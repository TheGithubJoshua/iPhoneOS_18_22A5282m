@class AVSystemController;
@protocol SHSRingerControlDelegate;

@interface SHSRingerControl : NSObject

@property (retain, nonatomic) AVSystemController *_systemController;
@property (nonatomic) long long _volumeChangeCoalescingCount;
@property (nonatomic) BOOL _volumeInitialized;
@property (nonatomic) BOOL _logFaultCalledForInactive;
@property (nonatomic) BOOL _logFaultCalledForBackground;
@property (weak, nonatomic) id<SHSRingerControlDelegate> delegate;
@property (nonatomic) float volume;
@property (nonatomic) BOOL canChangeRingtoneWithButtons;
@property (nonatomic) BOOL appWantsVolumeChangeEvents;

- (void)reload;
- (id)init;
- (void)_setup;
- (void)_tearDown;
- (void).cxx_destruct;
- (void)_handleServerConnectionDiedNotification:(id)a0;
- (void)dealloc;
- (void)_handleEffectiveVolumeDidChangeNotification:(id)a0;
- (void)_updateVolume:(float)a0;

@end
