@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *timeNotification;

+ (void)load;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitions;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (void)logTimeZoneEntry:(id)a0;
- (void).cxx_destruct;
- (void)logEventForwardTimeZoneWithTrigger:(id)a0;
- (void)logEventForwardTimeZone;

@end
