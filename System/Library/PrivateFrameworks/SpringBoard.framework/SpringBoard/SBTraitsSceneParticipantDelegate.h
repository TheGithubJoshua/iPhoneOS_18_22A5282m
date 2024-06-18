@class NSString, SBFTraitsParticipant, FBScene, SBFTraitsArbiter, BKSAnimationFenceHandle, SBTraitsSceneOrientationRequestAssistant, SBSceneHandle, NSNumber, UIApplicationSceneClientSettingsDiffInspector;

@interface SBTraitsSceneParticipantDelegate : NSObject <FBSceneObserver, SBSceneHandleObserver, BSInvalidatable, SBFTraitsParticipantDelegate, SBTraitsSceneSettingsUpdater> {
    BOOL _invalidated;
    SBTraitsSceneOrientationRequestAssistant *_orientationRequestActionAssistant;
    UIApplicationSceneClientSettingsDiffInspector *_sceneClientSettingsDiffInspector;
    long long _orientationMode;
    BKSAnimationFenceHandle *_fallbackFence_90210730;
}

@property (nonatomic) BOOL canDetermineActiveOrientation;
@property (retain, nonatomic) NSNumber *preferredSceneLevel;
@property (nonatomic, getter=isOrientationActuationAnimatable) BOOL orientationActuationEnabled;
@property (nonatomic, getter=isOrientationActuationAnimatable) BOOL orientationActuationAnimatable;
@property (nonatomic) long long orientationModeOverride;
@property (copy, nonatomic) id /* block */ actuateZOrderAlongsideBlock;
@property (copy, nonatomic) id /* block */ actuateOrientationAlongsideBlock;
@property (copy, nonatomic) id /* block */ actuateOrientationSettingsAlongsideBlock;
@property (weak, nonatomic) FBScene *scene;
@property (weak, nonatomic) SBSceneHandle *sceneHandle;
@property (weak, nonatomic) SBFTraitsArbiter *arbiter;
@property (weak, nonatomic) SBFTraitsParticipant *participant;
@property (readonly, nonatomic) long long sceneCurrentOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (void)sceneContentStateDidChange:(id)a0;
- (BOOL)_isAllowedToHavePortraitUpsideDown;
- (unsigned long long)_sanitizedMask:(unsigned long long)a0 forApplication:(id)a1;
- (void)updatePreferencesForParticipant:(id)a0 updater:(id)a1;
- (void)participantWillInvalidate:(id)a0;
- (void)_evaluateOrientationTransitionContext:(id)a0;
- (long long)_orientationMode;
- (void)sceneHandle:(id)a0 didDestroyScene:(id)a1;
- (unsigned long long)_bestGuessSupportedInterfaceOrientations;
- (unsigned long long)_allLegalOrientations;
- (void)actuateZOrderLevelSettings;
- (void)updatePreferencesWithUpdater:(id)a0;
- (id)_application;
- (void)_resetToInitialState;
- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (unsigned long long)_supportedOrientations;
- (void)invalidate;
- (void).cxx_destruct;
- (void)updateOrientationSceneSettingsForParticipant:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)actuateOrientationSettingsWithContext:(id)a0;
- (long long)_preferredOrientation;
- (void)dealloc;
- (BOOL)needsActuationForUpdateReasons:(long long)a0;
- (id)initWithSceneHandle:(id)a0;
- (id)initWithScene:(id)a0;
- (id)participantAssociatedSceneIdentityTokens:(id)a0;

@end
