@class SBFTraitsPreferencesZOrderLevel, NSString, SBFTraitsPreferencesOrientation, SBFTraitsSettingsActuationContext, SBFTraitsArbiter, SBFTraitsSettings, SBFTraitsOrientationResolutionPolicyInfo;
@protocol SBFTraitsParticipantDelegate, BSInvalidatable;

@interface SBFTraitsParticipant : NSObject <SBFTraitsPreferencesUpdating, SBFTraitsSettingsUpdating, SBFTraitsSettingsActuationContextProviding, SBFTraitsPreferencesProviding, SBFTraitsResolutionPoliciesProviding, NSCopying, BSInvalidatable, BSDescriptionProviding, SBFTraitsSettingsProviding> {
    BOOL _invalidated;
    id<BSInvalidatable> _stateDumpHandle;
}

@property (copy, nonatomic) NSString *role;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (weak, nonatomic) id<SBFTraitsParticipantDelegate> delegate;
@property (weak, nonatomic) SBFTraitsArbiter *arbiter;
@property (retain, nonatomic) SBFTraitsPreferencesZOrderLevel *zOrderLevelPreferences;
@property (retain, nonatomic) SBFTraitsPreferencesOrientation *orientationPreferences;
@property (retain, nonatomic) SBFTraitsSettings *currentSettings;
@property (retain, nonatomic) SBFTraitsSettings *previousSettings;
@property (nonatomic) BOOL _debugDelegateDidValidateLastSettings;
@property (copy, nonatomic) NSString *_debugLastOrientationValidationFailureReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) SBFTraitsSettingsActuationContext *orientationActuationContext;
@property (copy, nonatomic) SBFTraitsOrientationResolutionPolicyInfo *orientationResolutionPolicyInfo;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (double)currentZOrderLevel;
- (void)updateOrientationPreferencesWithBlock:(id /* block */)a0;
- (long long)previousOrientation;
- (id)succinctDescription;
- (void)updatePreferencesIfNeeded;
- (BOOL)hasAnyActuationContext;
- (void)updateZOrderLevelSettingsWithBlock:(id /* block */)a0;
- (long long)currentDeviceOrientation;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)updateOrientationSettingsWithBlock:(id /* block */)a0;
- (double)previousZOrderLevel;
- (void)setNeedsUpdatePreferencesWithReason:(id)a0 animate:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setNeedsUpdatePreferencesWithReason:(id)a0;
- (void)updateZOrderLevelPreferencesWithBlock:(id /* block */)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)setNeedsUpdatePreferencesWithReason:(id)a0 force:(BOOL)a1;
- (long long)previousDeviceOrientation;
- (long long)currentOrientation;
- (id)_setupStateDump;
- (void)setNeedsUpdatePreferencesWithReason:(id)a0 force:(BOOL)a1 animate:(BOOL)a2;
- (id)initWithRole:(id)a0 uniqueIdentifier:(id)a1 delegate:(id)a2 arbiter:(id)a3;

@end
