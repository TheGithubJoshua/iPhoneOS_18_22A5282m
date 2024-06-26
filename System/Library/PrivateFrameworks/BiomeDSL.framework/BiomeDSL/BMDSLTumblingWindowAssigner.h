@class BMDSLAggregator, NSArray;

@interface BMDSLTumblingWindowAssigner : BMDSLWindowAssigner <BMDSLWindowAssigner>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double interval;
@property (retain, nonatomic) BMDSLAggregator *aggregator;
@property (copy, nonatomic) NSArray *timestampKeyPaths;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)bpsWindowAssigner;
- (id)initWithInterval:(double)a0 timestampKeyPaths:(id)a1 aggregator:(id)a2;
- (id)initWithInterval:(double)a0 timestampKeyPaths:(id)a1 aggregator:(id)a2 name:(id)a3 version:(unsigned int)a4;

@end
