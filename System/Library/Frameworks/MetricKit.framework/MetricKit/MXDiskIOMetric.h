@class NSMeasurement;

@interface MXDiskIOMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeLogicalWrites;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCumulativeLogicalWritesMeasurement:(id)a0;

@end
