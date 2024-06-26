@class RTTUtterance, NSString, UITextView, CALayer;
@protocol RTTUIUtteranceCellDelegate;

@interface RTTUIUtteranceCell : UITableViewCell <UITextViewDelegate> {
    UITextView *_textView;
    CALayer *_bubbleLayer;
}

@property (nonatomic, getter=_accessibilityIsUnread, setter=_accessibilitySetIsUnread:) BOOL accessibilityIsUnread;
@property (retain, nonatomic) RTTUtterance *utterance;
@property (nonatomic, getter=isEditingUtterance) BOOL editingUtterance;
@property (weak, nonatomic) id<RTTUIUtteranceCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForUtterance:(id)a0 andWidth:(double)a1;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)updateLayout;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedTextRange;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)accessibilityValue;
- (void)textViewDidChange:(id)a0;
- (BOOL)_accessibilityRealtimeHasUnread;
- (BOOL)_accessibilityRealtimeCompleted;
- (void)_accessibilityHandleATFocused:(BOOL)a0 assistiveTech:(id)a1;
- (double)preferredHeightForWidth:(double)a0;
- (void)adjustTextViewSize;
- (void)setSendProgressIndex:(unsigned long long)a0;
- (void)updateUtterance:(id)a0;
- (void)updateUtterance:(id)a0 postNotifications:(BOOL)a1;
- (id)utteranceTextColor;

@end
