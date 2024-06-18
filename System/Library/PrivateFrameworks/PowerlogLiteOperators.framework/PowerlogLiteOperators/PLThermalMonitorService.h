@class PLXPCResponderOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLThermalMonitorService : PLService

@property (retain) PLEntryNotificationOperatorComposition *smcNotification;
@property (retain) PLXPCResponderOperatorComposition *sysdiagnoseResponder;

+ (void)load;

- (void)initOperatorDependancies;
- (id)init;
- (id)handleSysdiagnoseCallback:(id)a0;
- (void).cxx_destruct;
- (void)handleSMCCallback:(id)a0;
- (void)performLogging:(id)a0;

@end
