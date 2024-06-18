@class UITextView, NSString, CKTextBalloonView, SCKPMessageCardSectionAttachmentView, SCKPAudioMessageView, UIVisualEffectView, UIButton;
@protocol SCKPMessageCardSectionViewDelegate;

@interface SCKPMessageCardSectionView : UIView <UITextViewDelegate, SCKPAudioMessageViewDelegate, SCKPMessageCardSectionAttachmentViewDelegate> {
    UITextView *_textView;
    CKTextBalloonView *_sentBalloonView;
    UIButton *_sendButton;
    SCKPMessageCardSectionAttachmentView *_attachmentView;
    id<SCKPMessageCardSectionViewDelegate> _delegate;
    SCKPAudioMessageView *_audioMessageView;
    UIVisualEffectView *_messageBackgroundView;
    int _messageStatus;
}

@property (nonatomic) long long playButtonState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)displayedText;
- (void)dismissKeyboard;
- (BOOL)keyboardIsVisible;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)_sendButtonPressed:(id)a0;
- (void)audioMessagePlayButtonTapped:(id)a0;
- (id)initWithMessageCardSection:(id)a0 delegate:(id)a1;
- (void)setMessageContents:(id)a0;
- (void)userDidTapAttachmentView:(id)a0;

@end
