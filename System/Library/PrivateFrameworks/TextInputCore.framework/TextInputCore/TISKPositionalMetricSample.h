@class NSMutableArray;

@interface TISKPositionalMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *positionalMetricSample;

+ (id)makeMetric:(unsigned long long)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)merge:(id)a0;
- (unsigned long long)size;
- (id)description:(BOOL)a0;
- (void)addSample:(id)a0 withPosition:(unsigned long long)a1;
- (id)generateDataForSR:(id)a0;
- (id)singleMetricSample:(unsigned long long)a0;

@end
