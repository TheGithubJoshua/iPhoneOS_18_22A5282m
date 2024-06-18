@class PKInk, UIImageView;

@interface PNPWizardScratchpadInkView : UIView {
    UIImageView *_imageView;
}

@property (readonly, nonatomic) PKInk *ink;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL pressed;

+ (double)preferredHeight;
+ (void)initialize;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithIndex:(long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
