@class NSString, UITextView, NSObject;
@protocol UITextViewDelegate;

@interface WFTextScrollView : UIScrollView <UITextViewDelegate>

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (readonly, nonatomic) UITextView *textView;
@property (nonatomic, getter=isAdjustmentEnabled) BOOL adjustmentEnabled;
@property (weak, nonatomic) NSObject<UITextViewDelegate> *textViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (id)initWithTextView:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)resignFirstResponder;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)textViewDidChangeSelection:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textUpdated;

@end
