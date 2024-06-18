@class HUComfortSound;

@interface HUComfortSoundsSettings : HCSettings

@property (nonatomic) BOOL comfortSoundsEnabled;
@property (nonatomic) BOOL mixesWithMedia;
@property (nonatomic) BOOL stopsOnLock;
@property (retain, nonatomic) HUComfortSound *selectedComfortSound;
@property (nonatomic) double relativeVolume;
@property (nonatomic) double mediaVolume;
@property (nonatomic) double lastEnablementTimestamp;
@property (nonatomic) BOOL forceMixingBehavior;

+ (id)sharedInstance;

- (void)setStopsOnLock:(BOOL)a0;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (BOOL)mixesWithMedia;
- (id)preferenceKeyForSelector:(SEL)a0;
- (BOOL)comfortSoundsAvailable;
- (void)setRelativeVolume:(double)a0;
- (void)logMessage:(id)a0;
- (void)setComfortSoundsEnabled:(BOOL)a0;
- (void)setLastEnablementTimestamp:(double)a0;
- (BOOL)stopsOnLock;
- (BOOL)forceMixingBehavior;
- (BOOL)shouldStoreLocally;
- (id)keysToSync;
- (void)setMediaVolume:(double)a0;
- (double)relativeVolume;
- (BOOL)comfortSoundsEnabled;
- (double)mediaVolume;
- (void)reset;
- (void)setMixesWithMedia:(BOOL)a0;
- (void)setForceMixingBehavior:(BOOL)a0;
- (double)lastEnablementTimestamp;

@end
