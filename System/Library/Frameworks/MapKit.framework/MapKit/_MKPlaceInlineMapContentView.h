@class UIView, _MKUILabel, UIImageView, UIImage, MKViewWithHairline, NSLayoutConstraint, MKMapItemView;

@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView {
    MKViewWithHairline *_hairlineView;
    NSLayoutConstraint *_topToTitleConstraint;
    NSLayoutConstraint *_titleToBottomConstraint;
    UIView *_mapView;
    UIImageView *_mapImageView;
    _MKUILabel *_titleLabel;
}

@property (retain, nonatomic) UIImage *map;
@property (retain, nonatomic) MKMapItemView *mapItemView;
@property (nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasTitle;
- (void).cxx_destruct;
- (double)titleHeight;
- (void)_contentSizeDidChange;
- (void)infoCardThemeChanged;
- (double)mapViewHeight;
- (BOOL)useImageView;

@end
