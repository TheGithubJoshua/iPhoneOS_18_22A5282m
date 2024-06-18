@class NSMutableDictionary, NSMapTable, NSMutableSet, NSHashTable, UINotificationFeedbackGenerator, NSMutableArray;

@interface SBSoundController : NSObject {
    NSMutableDictionary *_soundsBySystemSoundIDs;
    NSMutableSet *_usedNotificationTypes;
    UINotificationFeedbackGenerator *_hapticFeedbackGenerator;
    NSMapTable *_toneAlertsBySounds;
    NSMapTable *_soundsByToneAlerts;
    NSHashTable *_observers;
    unsigned long long _pendingCallbacks;
    NSMutableArray *_pendedCallbacks;
}

+ (id)sharedInstance;

- (void)removeObserver:(id)a0;
- (id)init;
- (BOOL)stopSound:(id)a0;
- (BOOL)isPlayingAnySound;
- (void)_beginPendingCallbacksBlock;
- (BOOL)_playSystemSound:(id)a0;
- (BOOL)playSoundWithDefaultEnvironment:(id)a0;
- (BOOL)_playToneAlert:(id)a0;
- (void)_cleanupToneAlertForSound:(id)a0 andKill:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)playSound:(id)a0 environments:(long long)a1 completion:(id /* block */)a2;
- (BOOL)_playFeedback:(id)a0;
- (void)_soundDidStartPlaying:(id)a0;
- (BOOL)stopAllSounds;
- (BOOL)isPlaying:(id)a0;
- (BOOL)handleVolumeButtonDownEvent;
- (void)_enqueueCallback:(id /* block */)a0;
- (void)_ringerStateChanged:(id)a0;
- (void)addObserver:(id)a0;
- (void)_soundDidFinishPlaying:(id)a0;
- (void)_endPendingCallbacksBlock;
- (void)_cleanupSystemSound:(unsigned int)a0 andKill:(BOOL)a1;

@end
