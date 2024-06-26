@class UIPanGestureRecognizer, NSString, NSAttributedString, UITapGestureRecognizer;
@protocol CKBalloonTextViewInteractionDelegate;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate, CKBalloonTextViewProtocol, UIGestureRecognizerDelegate, UITextViewDelegate>

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIPanGestureRecognizer *dragGestureRecognizer;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } _selectedRange;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKBalloonTextViewInteractionDelegate> interactionDelegate;
@property (nonatomic, getter=isFakeSelected) BOOL fakeSelected;
@property (nonatomic) BOOL shouldAdjustInsetsForMinimumSize;

+ (id)textView;
+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 attributedText:(id)a1 maximumNumberOfLines:(unsigned long long)a2 lineBreakMode:(long long)a3 isReplyPreview:(BOOL)a4 outTextAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a5 outIsSingleLine:(BOOL *)a6;

- (void)copy:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)becomeFirstResponder;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)registerForEvents;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)didMoveToWindow;
- (BOOL)resignFirstResponder;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_interactionStoppedFromPreviewItemController:(id)a0;
- (void)_interactionStartedFromPreviewItemController:(id)a0;
- (BOOL)_showsEditMenu;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (id)_fakeSelectionBackgroundColor;
- (void)_removeFakeSelectionBackgroundColor;
- (void)_setFakeSelectionBackgroundColor;
- (void)_setFakeSelectionBackgroundColorForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_textWithHyphenationAppliedForAttributedText:(id)a0;
- (void)_updateFakeSelectionBackgroundColor:(id)a0;
- (void)panGestureRecognized:(id)a0;
- (void)setBalloonTextSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 isSingleLine:(BOOL *)a2 isReplyPreview:(BOOL)a3;

@end
