@class NSString, NSArray, CADisplayLink, _UIMotionEffectEventProvider, _UILazyMapTable, NSMutableSet, _UIMotionEffectEvent, _UIAssociationTable, NSMapTable;

@interface _UIMotionEffectEngine : NSObject <_UIMotionEffectEventConsumer> {
    _UIAssociationTable *_effectViewAssociationTable;
    _UILazyMapTable *_analyzerSettingsToAnalyzers;
    NSMapTable *_analyzersToEffects;
    NSMapTable *_suspendedViewsToEffectSets;
    _UIMotionEffectEventProvider *_eventProvider;
    BOOL _hasReceivedAtLeastOneEventSinceStarting;
    _UIMotionEffectEvent *_pendingEvent;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingEventLock;
    CADisplayLink *_displayLink;
    BOOL _generatingUpdates;
    NSMutableSet *_suspendReasons;
    _UIMotionEffectEvent *_lastEvent;
    BOOL _slowUpdatesEnabled;
    BOOL _pendingSlowDown;
    long long _eventProviderStatus;
    BOOL _allAnalyzersAreCentered;
    BOOL _hasAppliedAtLeastOneUpdateSinceStarting;
    BOOL _isPendingReset;
    int _thermalNotificationToken;
    int _screenDimmingNotificationToken;
}

@property (nonatomic, setter=_setTargetInterfaceOrientation:) long long _targetInterfaceOrientation;
@property (readonly, nonatomic) NSArray *suspensionReasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_motionEffectsEnabled;
+ (BOOL)_motionEffectsSupported;
+ (Class)_analyzerClass;
+ (Class)_eventProviderClass;

- (id)init;
- (void)_unregisterMotionEffect:(id)a0 fromView:(id)a1;
- (void)endSuspendingMotionEffectsForView:(id)a0;
- (void)resetMotionAnalysis;
- (void)_handleLatestDeviceMotion;
- (void)_startGeneratingUpdates;
- (void)_unregisterAllMotionEffectsForView:(id)a0;
- (void)updateWithEvent:(id)a0;
- (void)endSuspendingForReason:(id)a0;
- (void)endApplyingMotionEffect:(id)a0 toView:(id)a1;
- (BOOL)_motionEffectsAreSuspendedForView:(id)a0;
- (void)_unapplyAllEffects;
- (id)_motionEffectsForView:(id)a0;
- (void).cxx_destruct;
- (void)_toggleSlowUpdates;
- (void)_stopGeneratingUpdates;
- (void)_updateDisplayLinkInterval;
- (BOOL)_hasMotionEffectsForView:(id)a0;
- (void)dealloc;
- (void)beginApplyingMotionEffect:(id)a0 toView:(id)a1;
- (BOOL)_isSuspended;
- (void)beginSuspendingMotionEffectsForView:(id)a0;
- (BOOL)_motionEffect:(id)a0 belongsToView:(id)a1;
- (BOOL)_shouldGenerateUpdates;
- (void)updateEventProviderStatus:(long long)a0;
- (void)_startOrStopGeneratingUpdates;
- (void)beginSuspendingForReason:(id)a0;
- (void)_applyEffectsFromAnalyzer:(id)a0;

@end
