@class NSArray, NSString;

@interface PPTHistogramDimension : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *edges;
@property (readonly) unsigned long long extent;
@property (readonly) BOOL isCategoryDimension;
@property (readonly, copy) NSString *metricName;
@property (readonly) struct { double min; double max; } range;
@property (readonly) unsigned long long size;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionary;
- (id)JSONRepresentation;
- (id)initWithBinCount:(unsigned long long)a0 range:(struct { double x0; double x1; })a1 metricName:(id)a2;
- (id)initWithCategories:(id)a0 metricName:(id)a1;
- (id)initWithEdges:(id)a0 metricName:(id)a1;
- (BOOL)isEqualToHistogramDimension:(id)a0;

@end
