@class RadiosPreferences, NSObject;
@protocol OS_dispatch_queue, SBAirplaneModeDelegate;

@interface SBAirplaneModeController : NSObject <RadiosPreferencesDelegate> {
    RadiosPreferences *_radioPrefs;
    BOOL _cachedInAirplaneMode;
    NSObject<OS_dispatch_queue> *_radioQueue;
}

@property (nonatomic, getter=isInAirplaneMode) BOOL inAirplaneMode;
@property (weak, nonatomic) id<SBAirplaneModeDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void)airplaneModeChanged;
- (void).cxx_destruct;

@end
