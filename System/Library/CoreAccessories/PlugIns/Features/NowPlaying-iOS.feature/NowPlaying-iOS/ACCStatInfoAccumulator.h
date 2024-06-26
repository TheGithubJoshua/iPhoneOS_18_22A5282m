@class NSString, NSDate;

@interface ACCStatInfoAccumulator : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *lastUpdateTime;
@property (readonly, nonatomic) unsigned long long start;
@property (readonly, nonatomic) unsigned long long max;
@property (readonly, nonatomic) unsigned long long last;
@property (readonly, nonatomic) unsigned long long accum;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long average;

- (id)init;
- (void)set:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)add:(unsigned long long)a0;
- (void)reset;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 initValue:(unsigned long long)a1;
- (double)timeIntervalSinceLastUpdate;
- (double)timeIntervalSinceStart;

@end
