@class _DKEventStatsCounterInternal;

@interface _DKEventTypeStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>

@property (retain) _DKEventStatsCounterInternal *internal;

- (id)typeValues;
- (id)eventName;
- (id)eventType;
- (void).cxx_destruct;

@end
