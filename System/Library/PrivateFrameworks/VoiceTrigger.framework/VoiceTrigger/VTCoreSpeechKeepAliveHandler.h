@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VTCoreSpeechKeepAliveHandler : NSObject <VTSiriEnabledMonitorDelegate> {
    int _activeNotificationToken;
    int _inactiveNotificationToken;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _voiceTriggerEnabled;
    BOOL _speakerStateActivated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_enableCoreSpeechDaemonKeepAlive;
- (id)init;
- (void)_disableCoreSpeechDaemonKeepAlive;
- (void)_voiceTriggerPolicyDisabled;
- (void)start;
- (void)_handleSpeakerInactivated;
- (void)_handleSpeakerActivated;
- (void).cxx_destruct;
- (void)VTSiriEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (void)dealloc;
- (BOOL)_coreSpeechDaemonKeepAlived;
- (void)_voiceTriggerPolicyEnabled;
- (void)voiceTriggerPolicyDidChange:(BOOL)a0;

@end
