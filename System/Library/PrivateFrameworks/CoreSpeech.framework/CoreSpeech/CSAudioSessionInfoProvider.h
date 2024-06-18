@class NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioSessionInfoProvider : NSObject <CSAudioSessionInfoProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionInfoQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_startMonitoring;
- (unsigned int)audioSessionIdForDeviceId:(id)a0;
- (id)init;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)_registerInterruptionNotification;
- (void)_audioRouteChanged:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)_stopMonitoring;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)a0;
- (void)_registerAudioSessionNotifications;
- (void)_deregisterAudioSessionNotifications;
- (void)registerObserver:(id)a0;
- (void)_registerAudioRouteChangeNotification;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleInterruption:(id)a0;

@end
