@interface AppStoreKit.WordmarkView : UIView {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ referenceLineHeight;
    void /* unknown type, empty encoding */ alignment;
}

@property (nonatomic, readonly) BOOL hasContent;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
