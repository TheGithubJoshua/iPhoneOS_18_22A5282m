@class NSString;

@interface AppleMediaServicesUIDynamic.DynamicLabel : AMSUICommonView <UITextViewDelegate> {
    void /* unknown type, empty encoding */ defaultAlignment;
    void /* unknown type, empty encoding */ defaultColor;
    void /* unknown type, empty encoding */ defaultFont;
    void /* unknown type, empty encoding */ dynamicText;
    void /* unknown type, empty encoding */ shrinkToFit;
    void /* unknown type, empty encoding */ didShrinkForLineCount;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ objectGraph;
}

@property (nonatomic, readonly) BOOL hasContent;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } jet_focusedFrame;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, copy) NSString *maximumContentSizeCategory;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)invalidateIntrinsicContentSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;

@end
