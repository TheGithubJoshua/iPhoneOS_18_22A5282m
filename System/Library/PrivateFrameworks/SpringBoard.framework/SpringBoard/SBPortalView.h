@class CAPortalLayer, UIView;

@interface SBPortalView : UIView

@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic) BOOL hidesSourceView;
@property (nonatomic) BOOL matchesAlpha;
@property (nonatomic) BOOL matchesTransform;
@property (nonatomic) BOOL matchesPosition;
@property (nonatomic) BOOL allowsBackdropGroups;
@property (nonatomic) BOOL passesTouchesThrough;
@property (readonly, nonatomic) CAPortalLayer *portalLayer;

+ (Class)layerClass;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setMatchesAlpha:(BOOL)a0;
- (BOOL)hidesSourceView;
- (void)setAllowsBackdropGroups:(BOOL)a0;
- (void)setHidesSourceView:(BOOL)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)matchesPosition;
- (BOOL)allowsBackdropGroups;
- (id)portalLayer;
- (void)setMatchesPosition:(BOOL)a0;
- (BOOL)matchesAlpha;
- (BOOL)matchesTransform;
- (void)setMatchesTransform:(BOOL)a0;

@end
