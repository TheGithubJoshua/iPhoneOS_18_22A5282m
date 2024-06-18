@interface ChronoCore.Application : UIApplication

@property (nonatomic, readonly) BOOL hostsSystemStatusBar;

- (BOOL)_supportsAlwaysOnDisplay;
- (id)init;
- (BOOL)_shouldAllowKeyboardArbiter;
- (BOOL)_hostsSystemStatusBar;
- (BOOL)_isSpringBoard;

@end
