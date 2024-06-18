@interface TPDialerSoundController : NSObject {
    struct __CFSet { } *_inflightSounds;
    unsigned char _soundsActivated : 1;
}

@property unsigned long long incompleteSoundCount;

+ (void)_delayedDeactivate;

- (id)init;
- (void)soundCompletedPlaying:(unsigned int)a0;
- (void)stopSoundForDialerCharacter:(long long)a0;
- (void)playSoundForDialerCharacter:(long long)a0;
- (void)setSoundsActivated:(BOOL)a0;
- (void)_stopAllSoundsForcingCallbacks:(BOOL)a0;
- (void)dealloc;
- (void)applicationSuspendedNotification:(id)a0;
- (void)applicationResumedNotification:(id)a0;

@end
