@protocol SBLockScreenEmergencyCallViewControllerDelegate;

@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController

@property (weak, nonatomic) id<SBLockScreenEmergencyCallViewControllerDelegate> delegate;

- (void)setBackgroundStyle:(long long)a0;
- (void)dismiss;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)tintColorForBackgroundStyle:(long long)a0 outBlurRadius:(double *)a1;
- (long long)_wallpaperStyleFromUIBackgroundStyle:(long long)a0;

@end
