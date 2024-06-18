@class NSNumber, NSString;

@interface HMMInterval : NSObject

@property (class, readonly) NSNumber *negativeInfinityStart;
@property (class, readonly) NSNumber *positiveInfinityEnd;

@property (readonly) NSString *standardIntervalString;
@property (readonly) NSString *negativeInfinityIntervalString;
@property (readonly) NSString *positiveInfinityIntervalString;
@property (readonly) NSString *allNumbersIntervalString;
@property (readonly) NSNumber *start;
@property (readonly) NSNumber *end;

+ (id)closedClosedIntervalFromStart:(id)a0 toEnd:(id)a1;
+ (id)openClosedIntervalFromStart:(id)a0 toEnd:(id)a1;
+ (void)initialize;
+ (id)intervalForSingleValue:(id)a0;
+ (id)closedOpenIntervalFromStart:(id)a0 toEnd:(id)a1;
+ (id)openOpenIntervalFromStart:(id)a0 toEnd:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)labelString;
- (id)initFromStart:(id)a0 toEnd:(id)a1;

@end
