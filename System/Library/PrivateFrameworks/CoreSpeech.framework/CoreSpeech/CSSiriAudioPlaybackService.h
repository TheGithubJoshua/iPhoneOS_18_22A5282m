@class NSString, NSMutableDictionary, NSHashTable, AVAudioSession, NSObject, CSAudioSessionController;
@protocol OS_dispatch_queue;

@interface CSSiriAudioPlaybackService : NSObject <AFMemoryPressureListening, CSAudioSessionControllerDelegate, AFAudioPlaybackService> {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_listeners;
    NSMutableDictionary *_activeSessionsByRequest;
    NSMutableDictionary *_reusableSessionsByRequest;
    unsigned int _audioSessionID;
    AVAudioSession *_audioSession;
    CSAudioSessionController *_audioSessionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;

- (void)addListener:(id)a0;
- (void)_handlePreparationForSession:(id)a0;
- (void)_enumerateListenersUsingBlock:(id /* block */)a0;
- (void)_prewarmRequest:(id)a0 completion:(id /* block */)a1;
- (void)stopRequest:(id)a0 immediately:(BOOL)a1;
- (void)removeListener:(id)a0;
- (void)audioSessionController:(id)a0 didReceiveAudioSessionOwnerResetNotification:(id)a1;
- (void)audioSessionController:(id)a0 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)a1;
- (void)_handleExecutionForSession:(id)a0;
- (void)removeAllListeners;
- (void)startRequest:(id)a0 options:(unsigned long long)a1 preparationHandler:(id /* block */)a2 executionHandler:(id /* block */)a3 finalizationHandler:(id /* block */)a4;
- (void)prewarmRequest:(id)a0 completion:(id /* block */)a1;
- (void)audioSessionController:(id)a0 didReceiveAudioSessionOwnerLostNotification:(id)a1;
- (void)_stopAllRequests:(BOOL)a0 completion:(id /* block */)a1;
- (id)_audioSession;
- (id)initWithAudioSessionController:(id)a0;
- (void)_setAudioSessionID:(unsigned int)a0;
- (unsigned int)_audioSessionID;
- (void)_startRequest:(id)a0 options:(unsigned long long)a1 preparationHandler:(id /* block */)a2 executionHandler:(id /* block */)a3 finalizationHandler:(id /* block */)a4;
- (void)_stopAllRequestsSynchronously;
- (void).cxx_destruct;
- (void)startRequest:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_evictAllReusableSessionsForReason:(id)a0;
- (void)_stopRequest:(id)a0 immediately:(BOOL)a1;
- (void)audioSessionController:(id)a0 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)a1;
- (id)_createAudioPlaybackSessionWithRequest:(id)a0 options:(unsigned long long)a1;
- (void)_handleFinalizationForSession:(id)a0 error:(id)a1;
- (void)memoryPressureObserver:(id)a0 didChangeFromCondition:(long long)a1 toCondition:(long long)a2;
- (void)audioSessionController:(id)a0 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)a1;
- (void)stopAllRequestsSynchronously;
- (void)stopAllRequests:(BOOL)a0 completion:(id /* block */)a1;
- (void)_invalidate;

@end
