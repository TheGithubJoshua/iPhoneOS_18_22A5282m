@class NSDictionary, NSMutableDictionary;

@interface UITrackingLayoutGuide : UILayoutGuide

@property (nonatomic) BOOL constrainedToWindowGuide;
@property (readonly, nonatomic) NSDictionary *edgeConstraints;
@property (retain, nonatomic) NSMutableDictionary *nearEdgeConstraintsByEdge;
@property (retain, nonatomic) NSMutableDictionary *awayFromConstraintsByEdge;
@property (nonatomic) BOOL constrainedToWindowGuide;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } triggerInsetsForPortrait;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } triggerInsetsForLandscape;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } triggerProportions;
@property (nonatomic) unsigned long long overlappingEdges;
@property (nonatomic) unsigned long long pausedEdges;
@property (nonatomic) double animationDuration;
@property (nonatomic) unsigned long long animationOptions;
@property (nonatomic) BOOL animatingConstraintsChange;
@property (nonatomic) BOOL animatesChanges;
@property (nonatomic) long long owningViewInterfaceLayoutDirection;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isRTL;
- (BOOL)changeOffsetConstants:(struct UIOffset { double x0; double x1; })a0;
- (void)_setOwningView:(id)a0;
- (BOOL)changeSizingConstants:(struct CGSize { double x0; double x1; })a0;
- (void)stopTrackingConstraintsForEdge:(unsigned long long)a0;
- (void)updateConstraintsForActiveEdges;
- (id)_keysFromEdges:(unsigned long long)a0;
- (void)_thresholdCheck;
- (void)_createThresholdsFromProportions;
- (id)_keysInvolvingEdges:(unsigned long long)a0;
- (void)_layoutOwningViewAnimated:(BOOL)a0;
- (void)_thresholdCheckForGuide:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateForOverlappingEdges:(unsigned long long)a0;
- (id)constraintsActiveWhenAwayFromEdge:(unsigned long long)a0;
- (id)constraintsActiveWhenNearEdge:(unsigned long long)a0;
- (void)enableAnimations:(BOOL)a0;
- (void)pauseUpdatingConstraintsForEdges:(unsigned long long)a0;
- (void)removeAllTrackedConstraints;
- (void)resetAnimationOptions;
- (void)setConstraints:(id)a0 activeWhenAwayFromEdge:(unsigned long long)a1;
- (void)setConstraints:(id)a0 activeWhenNearEdge:(unsigned long long)a1;
- (void)setEdgeThresholds:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forOrientation:(long long)a1;
- (void)setProportionalEdgeThresholds:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)startUpdatingConstraintsForEdges:(unsigned long long)a0;
- (void)trackConstraintsFromViewBasedGuide:(id)a0;
- (void)updateAnimationDuration:(double)a0 options:(unsigned long long)a1;

@end
