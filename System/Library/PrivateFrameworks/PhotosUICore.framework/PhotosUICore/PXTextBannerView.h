@class NSString, UIImageView, UILabel;

@interface PXTextBannerView : UIView {
    UIImageView *_backgroundView;
    UILabel *_textLabel;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic, getter=isDestructiveText) BOOL destructiveText;
@property (nonatomic) long long textAlignment;

- (void)_updateSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
