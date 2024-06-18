@class NSSet, NSString, NSHashTable, BLSHBacklightInactiveEnvironmentSession;
@protocol BSInvalidatable;

@interface SBBacklightEnvironmentSessionProvider : NSObject <BLSHBacklightInactiveEnvironmentSessionObserving, BLSHBacklightEnvironmentSessionProviding> {
    NSHashTable *_backlightEnvironmentSceneProviders;
    NSHashTable *_backlightSceneHostEnvironmentProviders;
    NSHashTable *_observers;
    id<BSInvalidatable> _presentationUpdateLiveRenderAssertion;
    BOOL _springBoardBootCompleted;
}

@property (retain, nonatomic, setter=_setCurrentSession:) BLSHBacklightInactiveEnvironmentSession *_currentSession;
@property (readonly, copy, nonatomic) NSSet *currentPresentationBundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)init;
- (id)_buildPresentation;
- (void)_notifyObserversOfPresentation;
- (void)_rebuildPresentation;
- (void)invalidateBacklightSceneHostEnvironmentsForProvider:(id)a0;
- (void).cxx_destruct;
- (void)didEndInactiveEnvironmentSession:(id)a0;
- (void)unregisterBacklightEnvironmentSceneProvider:(id)a0;
- (void)registerBacklightEnvironmentSceneProvider:(id)a0;
- (void)unregisterBacklightSceneHostEnvironmentProvider:(id)a0;
- (void)inactiveEnvironmentSession:(id)a0 didUpdateToPresentation:(id)a1;
- (void)invalidateBacklightScenesForProvider:(id)a0;
- (void)registerBacklightSceneHostEnvironmentProvider:(id)a0;
- (void)addObserver:(id)a0;
- (id)_backlightPresentationEntries;
- (id)createInactiveEnvironmentSession;

@end
