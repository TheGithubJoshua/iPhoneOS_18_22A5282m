@interface HFDurationEventBuilder : HFEventBuilder

@property (nonatomic) double duration;

- (id)eventType;
- (id)description;
- (id)initWithEvent:(id)a0;
- (id)buildNewEventsFromCurrentState;
- (id)compareToObject:(id)a0;
- (id)comparisonKey;

@end
