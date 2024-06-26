@class NSArray;

@interface PPTHistogram : NSObject <NSCopying, NSSecureCoding> {
    struct unique_ptr<ppt::Histogram_Internal, std::default_delete<ppt::Histogram_Internal>> { struct __compressed_pair<ppt::Histogram_Internal *, std::default_delete<ppt::Histogram_Internal>> { struct Histogram_Internal *__value_; } __ptr_; } _histogramPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *dimensions;
@property (readonly, copy) NSArray *metrics;
@property (readonly) unsigned long long rank;
@property (readonly) unsigned long long size;

- (id)initWithCoder:(id)a0;
- (id)initWithDimensions:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHistogram:(id)a0;
- (unsigned long long)sum:(BOOL)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (id)dictionary;
- (id)JSONRepresentation;
- (void)recordSample:(id)a0;
- (id)counts:(BOOL)a0;
- (id)createArrayFromDimensionIdx:(unsigned long long)a0 withFlowBins:(BOOL)a1;
- (id)indicesFor:(id)a0;
- (id)initWithBinCount:(unsigned long long)a0 range:(struct { double x0; double x1; })a1 metricName:(id)a2;
- (id)initWithBinCount:(unsigned long long)a0 range:(struct { double x0; double x1; })a1 metricName:(id)a2 samples:(id)a3;
- (BOOL)isEqualToHistogram:(id)a0;

@end
