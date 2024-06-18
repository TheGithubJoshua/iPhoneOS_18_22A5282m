@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *samples;

+ (id)makeMetric;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)isEmpty;
- (double)average;
- (void)encodeWithCoder:(id)a0;
- (void)addSample:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)merge:(id)a0;
- (unsigned long long)size;
- (double)variance;
- (double)sum;
- (id)generateDataForSR:(id)a0;

@end
