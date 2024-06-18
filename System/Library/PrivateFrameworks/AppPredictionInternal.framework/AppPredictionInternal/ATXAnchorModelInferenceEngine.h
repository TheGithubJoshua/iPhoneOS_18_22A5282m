@class NSUserDefaults, ATXCoreDuetContextHelper, ATXAnchorModelPredictionScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXAnchorModelInferenceEngine : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXAnchorModelPredictionScheduler *_predictionScheduler;
    _Atomic BOOL _started;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;

- (id /* block */)entranceCallbackForAnchor:(id)a0;
- (id)init;
- (void)handleAnchorEventForGymArrival;
- (void)retryPreviouslyIncompleteInference;
- (void)unregisterAnchorEventListeners;
- (void)handleInferenceEvent:(id)a0;
- (void)handleAnchorExitEventForGymArrival;
- (void)start;
- (void)setupContextStoreListenerForAnchor:(id)a0 context:(id)a1;
- (id)notificationIdentifierForAnchor:(id)a0;
- (void)registerForAnchorEntrance:(id)a0 cdContext:(id)a1;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (void).cxx_destruct;
- (void)registerAnchorEventListenerForAnchor:(id)a0;
- (id)supportedAnchorsForInference;
- (id /* block */)exitCallbackForAnchor:(id)a0;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (void)handleAnchorEventForAnchor:(id)a0;
- (void)registerForAnchorExit:(id)a0 cdContext:(id)a1;
- (void)dealloc;
- (void)handleLOIEntrance;
- (void)queueHandleInferenceEvent:(id)a0;
- (void)handleAnchorEventForMicrolocationVisitAnchor;
- (id)currentDuetEventForAnchor:(id)a0;
- (void)handleLOIExit;
- (void)handleAnchorEventForIdleTimeBegin;
- (void)registerForWakingNotificationForAnchor:(id)a0 cdContext:(id)a1;
- (void)registerAnchorEventListeners;

@end
