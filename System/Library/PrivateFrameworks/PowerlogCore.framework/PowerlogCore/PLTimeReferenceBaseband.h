@class PLNSNotificationOperatorComposition;

@interface PLTimeReferenceBaseband : PLTimeReferenceDynamic

@property (retain) PLNSNotificationOperatorComposition *basebandTimeNotification;
@property BOOL followupCurrentTimeRunning;

- (void)timeChangedNotificationReceived:(id)a0;
- (id)currentTime;
- (void).cxx_destruct;
- (void)registerForTimeChangedNotification;
- (void)dealloc;
- (id)initWithTimeManager:(id)a0 entryDefinitionKey:(id)a1 timeReferenceType:(long long)a2;

@end
