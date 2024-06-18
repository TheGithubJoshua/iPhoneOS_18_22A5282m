@interface SBLiquidDetectionManager : NSObject {
    int _wetToken;
    BOOL _finishedInit;
}

@property (readonly, nonatomic, getter=isAccessoryPortWet) BOOL accessoryPortWet;
@property (readonly, nonatomic, getter=isDetectionEnabled) BOOL detectionEnabled;
@property (readonly, nonatomic, getter=isLiquidDetected) BOOL liquidDetected;

+ (id)sharedInstance;
+ (BOOL)showStatusBarIcon;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_finishInit;
- (id)succinctDescription;
- (void)_stateDidUpdate;
- (id)succinctDescriptionBuilder;
- (id)description;
- (void)_updateStatusBar;
- (void)_updateWetState;
- (BOOL)_showStatusBarIcon;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;

@end
