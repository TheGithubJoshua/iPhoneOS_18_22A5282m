@class NSString, NSMutableArray, CMMotionAlarmManager;
@protocol SBFMotionAlarmDelegate;

@interface SBFMotionAlarmController : NSObject <CMMotionAlarmDelegateProtocol>

@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) CMMotionAlarmManager *motionAlarmManager;
@property (weak, nonatomic) id<SBFMotionAlarmDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_notifyDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_registerMotionAlarm;
- (void)_unregisterMotionAlarm;
- (void)alarmDidFire:(id)a0 error:(id)a1;
- (void)alarmDidRegister:(id)a0 error:(id)a1;
- (void)alarmDidUnregister:(id)a0 error:(id)a1;
- (void)registerMotionAlarm;
- (void)remoteAppLaunchedWithResult:(unsigned int)a0 error:(id)a1;
- (void)unregisterMotionAlarm;

@end
