@interface SBControlCenterRingerSwitchController : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)_updateState;
- (void)dealloc;

@end
