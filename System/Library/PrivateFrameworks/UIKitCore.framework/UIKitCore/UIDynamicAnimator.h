@class UIView, NSArray, UIDynamicAnimatorTicker, CADisplayLink, UIDynamicsDebug, NSMutableDictionary, NSMutableArray, PKExtendedPhysicsWorld, NSMutableSet, NSMutableIndexSet;
@protocol UIDynamicAnimatorDelegate, _UIDynamicReferenceSystem;

@interface UIDynamicAnimator : NSObject {
    PKExtendedPhysicsWorld *_world;
    CADisplayLink *_displaylink;
    double _elapsedTime;
    double _realElapsedTime;
    double _lastUpdateTime;
    double _lastInterval;
    long long _ticks;
    UIDynamicsDebug *_dynamicsDebug;
    NSMutableDictionary *_bodies;
    NSMutableArray *_topLevelBehaviors;
    NSMutableSet *_registeredBehaviors;
    NSMutableSet *_behaviorsToRemove;
    NSMutableSet *_behaviorsToAdd;
    NSMutableIndexSet *_availableFieldCategories;
    NSMutableArray *_postSolverActions;
    NSMutableArray *_beginContacts;
    NSMutableArray *_endContacts;
    BOOL _isInWorldStepMethod;
    BOOL _needsLocalBehaviorReevaluation;
    BOOL _stopping;
    unsigned long long _referenceSystemType;
    unsigned long long _integralization;
    struct { unsigned char delegateImplementsDynamicAnimatorDidPause : 1; unsigned char delegateImplementsDynamicAnimatorWillResume : 1; } _stateFlags;
    double _accuracy;
    int _registeredCollisionGroups;
    int _registeredImplicitBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _referenceSystemBounds;
    id<_UIDynamicReferenceSystem> _referenceSystem;
    int _debugInterval;
    BOOL _debugEnabled;
    id /* block */ _action;
    id<UIDynamicAnimatorDelegate> _delegate;
    BOOL _disableDisplayLink;
    double _speed;
}

@property (retain, nonatomic) UIDynamicAnimatorTicker *ticker;
@property (readonly, nonatomic) UIView *referenceView;
@property (readonly, copy, nonatomic) NSArray *behaviors;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) double elapsedTime;
@property (weak, nonatomic) id<UIDynamicAnimatorDelegate> delegate;

+ (void)initialize;
+ (id)_allDynamicAnimators;
+ (void)_clearReferenceViewFromAnimators:(id)a0;
+ (void)_referenceViewSizeChanged:(id)a0;
+ (void)_registerAnimator:(id)a0;
+ (void)_unregisterAnimator:(id)a0;

- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)_start;
- (id)_delegate;
- (id)init;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)_setDelegate:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)_stop;
- (id)recursiveDescription;
- (void)_setAction:(id /* block */)a0;
- (void)removeBehavior:(id)a0;
- (void).cxx_destruct;
- (void)setDebugEnabled:(BOOL)a0;
- (id)description;
- (void)setReferenceView:(id)a0;
- (void)addBehavior:(id)a0;
- (void)dealloc;
- (void)_setRunning:(BOOL)a0;
- (BOOL)isDebugEnabled;
- (void)_displayLinkTick:(id)a0;
- (double)_speed;
- (void)_checkBehavior:(id)a0;
- (void)_postSolverStep;
- (void)_shouldReevaluateLocalBehaviors;
- (void)_tickle;
- (BOOL)_alwaysDisableDisplayLink;
- (unsigned long long)_animatorIntegralization;
- (double)_animatorInterval;
- (BOOL)_animatorStep:(double)a0;
- (id)_bodyForItem:(id)a0;
- (void)_clearReferenceView;
- (BOOL)_containsBehavior:(id)a0;
- (BOOL)_debugEnabled;
- (int)_debugInterval;
- (void)_defaultMapper:(id)a0 position:(struct CGPoint { double x0; double x1; })a1 angle:(double)a2 itemType:(unsigned long long)a3;
- (void)_evaluateLocalBehaviors;
- (BOOL)_isWorldActive;
- (id)_keyForItem:(id)a0;
- (id)_newBodyForItem:(id)a0 inItemGroup:(id)a1;
- (void)_preSolverStep;
- (double)_ptmRatio;
- (double)_realElapsedTime;
- (void)_reevaluateImplicitBounds;
- (id)_referenceSystem;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceSystemBounds;
- (unsigned long long)_referenceSystemType;
- (void)_registerBehavior:(id)a0;
- (id)_registerBodyForItem:(id)a0;
- (int)_registerCollisionGroup;
- (void)_registerFieldCategoryForFieldBehavior:(id)a0;
- (void)_registerImplicitBounds;
- (void)_reportBeginContacts;
- (void)_reportEndContacts;
- (void)_runBlockPostSolverIfNeeded:(id /* block */)a0;
- (void)_setAlwaysDisableDisplayLink:(BOOL)a0;
- (void)_setAnimatorIntegralization:(unsigned long long)a0;
- (void)_setDebugEnabled:(BOOL)a0;
- (void)_setDebugInterval:(int)a0;
- (void)_setReferenceSystem:(id)a0;
- (void)_setSpeed:(double)a0;
- (void)_setupWorld;
- (long long)_ticks;
- (void)_traverseBehaviorHierarchy:(id /* block */)a0;
- (void)_unregisterBehavior:(id)a0;
- (void)_unregisterBodyForItem:(id)a0 action:(id /* block */)a1;
- (void)_unregisterCollisionGroup;
- (void)_unregisterFieldCategoryForFieldBehavior:(id)a0;
- (void)_unregisterImplicitBounds;
- (id)_world;
- (double)debugAnimationSpeed;
- (unsigned long long)debugFrameInterval;
- (void)didBeginContact:(id)a0;
- (void)didEndContact:(id)a0;
- (id)initWithReferenceSystem:(id)a0;
- (id)initWithReferenceView:(id)a0;
- (id)itemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForCellAtIndexPath:(id)a0;
- (void)removeAllBehaviors;
- (void)setDebugAnimationSpeed:(double)a0;
- (void)setDebugFrameInterval:(unsigned long long)a0;
- (void)updateItemFromCurrentState:(id)a0;
- (void)updateItemUsingCurrentState:(id)a0;

@end