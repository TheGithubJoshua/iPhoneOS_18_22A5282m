@class NSString, MTAlarmManager;

@interface MTAlarmManagerExportedObject : NSObject <MTAlarmClient>

@property (readonly, weak, nonatomic) MTAlarmManager *alarmManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alarmFired:(id)a0;
- (void)alarmsAdded:(id)a0;
- (void)alarmsRemoved:(id)a0;
- (void)nextAlarmChanged:(id)a0;
- (void)_didReceiveAlarmServerReadyNotification:(id)a0;
- (void).cxx_destruct;
- (void)alarmDismissed:(id)a0;
- (void)alarmSnoozed:(id)a0;
- (void)dealloc;
- (void)alarmsUpdated:(id)a0;
- (id)initWithAlarmManager:(id)a0;

@end
