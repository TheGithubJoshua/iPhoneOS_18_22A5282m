@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject

@property (retain, nonatomic) NSDictionary *trackedBagKeys;

+ (id)sharedTracker;

- (id)init;
- (id)isSportsEnabled;
- (void)updateTrackedBagValuesWithChangedKeys:(id)a0;
- (void)updateTrackedBagValues;
- (id)isNowPlayingEnabled;
- (void).cxx_destruct;
- (BOOL)_amsBagBoolValueForKey:(id)a0;
- (void)_updateBoolValueForTrackedKey:(id)a0;
- (void)_setIsSportsEnabled:(BOOL)a0;
- (void)_updateKeys:(id)a0;
- (void)_setIsNowPlayingEnabled:(BOOL)a0;

@end
