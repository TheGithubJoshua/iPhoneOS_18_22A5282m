@class MRUAsset, NSString, MRUAssetView, MRUVisualStylingProvider, UILabel, MRUShadowView, UIImageSymbolConfiguration;

@interface MediaControlsRoundButton : UIControl <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) MRUAssetView *assetView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MRUShadowView *shadowView;
@property (retain, nonatomic) MRUAsset *asset;
@property (retain, nonatomic) NSString *glyphState;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (nonatomic) long long axis;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } assetFrame;
@property (nonatomic) struct CGSize { double width; double height; } assetSize;
@property (nonatomic, getter=isLabelHidden) BOOL labelHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0;
- (void)controlCenterApplyPrimaryContentShadow;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateLabelVisualStyling;
- (void)setSelected:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateContentSizeCategory;
- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)visualStylingProviderDidChange:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void)updateAssetVisualStyling;
- (void)setEnabled:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)layoutSubviews;

@end
