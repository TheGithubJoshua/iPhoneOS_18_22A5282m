@interface ISTimestampedEvent : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ timestamp;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ orderedEvent;

- (id)init;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
