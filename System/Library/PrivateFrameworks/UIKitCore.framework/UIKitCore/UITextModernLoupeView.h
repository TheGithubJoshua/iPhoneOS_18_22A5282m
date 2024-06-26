@class CADisplayLink, _UIPortalView, UIView;
@protocol UICoordinateSpace;

@interface UITextModernLoupeView : UIView {
    UIView *_sourceView;
    UIView *_maskView;
    UIView *_backgroundView;
    UIView *_glowView;
    UIView *_portalContainerView;
    CADisplayLink *_displayLink;
    _UIPortalView *_portalView;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly, nonatomic) id<UICoordinateSpace> containerCoordinateSpace;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL statusBarHidden;
@property (nonatomic) double visualOffset;
@property (nonatomic) struct CGPoint { double x; double y; } modelPosition;

+ (BOOL)isModernLoupeEnabled;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithSourceView:(id)a0;
- (void)_displayLinkFired:(id)a0;
- (void)layoutSubviews;
- (void)_stopDisplayLink;
- (void)_updateColorsForTraitCollection:(id)a0;
- (id)backgroundColorIfNecessary;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1 removeWhenComplete:(BOOL)a2;

@end
