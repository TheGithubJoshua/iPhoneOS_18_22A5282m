@class NSString, CAPortalLayer, UIView;

@interface _UIPortalView : UIView

@property (nonatomic, getter=_isGeometryFrozen, setter=_setGeometryFrozen:) BOOL _geometryFrozen;
@property (weak, nonatomic) UIView *sourceView;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hidesSourceView;
@property (nonatomic) BOOL matchesAlpha;
@property (nonatomic) BOOL matchesTransform;
@property (nonatomic) BOOL matchesPosition;
@property (nonatomic) BOOL allowsBackdropGroups;
@property (nonatomic) BOOL allowsHitTesting;
@property (nonatomic) BOOL forwardsClientHitTestingToSourceView;
@property (readonly, nonatomic) CAPortalLayer *portalLayer;

+ (Class)layerClass;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setMatchesAlpha:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hidesSourceView;
- (void)setAllowsBackdropGroups:(BOOL)a0;
- (void)setHidesSourceView:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithSourceView:(id)a0;
- (id)description;
- (BOOL)matchesPosition;
- (void)setAllowsHitTesting:(BOOL)a0;
- (BOOL)allowsBackdropGroups;
- (id)portalLayer;
- (void)setMatchesPosition:(BOOL)a0;
- (void)setHidden:(BOOL)a0;
- (BOOL)matchesAlpha;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)matchesTransform;
- (void)setMatchesTransform:(BOOL)a0;
- (BOOL)allowsHitTesting;

@end
