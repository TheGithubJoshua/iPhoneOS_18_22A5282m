@class UIView;

@interface AltitudeRichDialView : NanoCompassBaseRichView {
    UIView *_topView;
    UIView *_bottomView;
}

@property (readonly, nonatomic) UIView *topView;
@property (readonly, nonatomic) UIView *bottomView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (id)_newBottomView;
- (id)_newTopView;
- (id)monochromeAccentViews;
- (id)monochromeOtherViews;

@end
