@class NSString, TKVibrationRecorderContentViewController;
@protocol TKVibrationRecorderViewControllerDelegate;

@interface TKVibrationRecorderViewController : UINavigationController <PSStateRestoration> {
    TKVibrationRecorderContentViewController *_vibrationRecorderContentViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TKVibrationRecorderViewControllerDelegate> vibrationRecorderViewControllerDelegate;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (BOOL)canBeShownFromSuspendedState;
- (id)initWithVibratorController:(id)a0;

@end
