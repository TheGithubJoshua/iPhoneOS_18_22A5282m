@class MTMaterialView;

@interface CCUIContentModuleContentContainerView : UIView {
    BOOL _expanded;
    MTMaterialView *_moduleMaterialView;
}

@property (nonatomic) BOOL moduleProvidesOwnPlatter;
@property (nonatomic) double compactContinuousCornerRadius;
@property (nonatomic) double expandedContinuousCornerRadius;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)init;
- (void)_transitionToExpandedMode:(BOOL)a0 force:(BOOL)a1;
- (BOOL)_isContentClippingRequiredForSubview:(id)a0;
- (void)transitionToExpandedMode:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didEndTransitionToExpandedMode:(BOOL)a0;
- (void)_setContinuousCornerRadius:(double)a0 ignoreSubviewClipping:(BOOL)a1;
- (void).cxx_destruct;
- (void)addSubview:(id)a0;
- (void)layoutSubviews;
- (void)_configureModuleMaterialViewIfNecessary;

@end
