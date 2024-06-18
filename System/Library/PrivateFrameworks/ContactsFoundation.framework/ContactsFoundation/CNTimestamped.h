@interface CNTimestamped : NSObject

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) double timestamp;

+ (id)timestampedWithValue:(id)a0 timestamp:(double)a1;
+ (id /* block */)wrapTransformWithScheduler:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithValue:(id)a0 timestamp:(double)a1;

@end
