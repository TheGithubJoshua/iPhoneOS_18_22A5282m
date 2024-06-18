@protocol CSNotificationClearingTriggerDelegate;

@interface CSNotificationClearingTrigger : NSObject

@property (nonatomic) BOOL triggerArmed;
@property (weak, nonatomic) id<CSNotificationClearingTriggerDelegate> delegate;
@property (nonatomic) BOOL authenticated;
@property (nonatomic) BOOL hadNotificationContentAtDisappearance;
@property (nonatomic) BOOL didDisableCarDNDUntilEndOfDrive;
@property (nonatomic) BOOL uiLocked;
@property (nonatomic) BOOL screenOff;
@property (nonatomic) BOOL screenInactive;

- (void)_reset;
- (BOOL)_wouldArmForDiscreteParameters;
- (id)initWithDelegate:(id)a0;
- (void)_clearIfNeeded;
- (BOOL)_shouldArm;
- (BOOL)_wouldArmIfNotForDNDAndNotificationContent;
- (void)_updateTriggerAndClearIfNeeded;
- (BOOL)_shouldFire;
- (void).cxx_destruct;
- (BOOL)_wouldArmIfNotForDND;

@end
