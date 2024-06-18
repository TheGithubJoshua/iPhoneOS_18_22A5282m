@class EKSeriesDetails;

@interface EKPostSliceDescription : EKSliceDescription

@property (copy) EKSeriesDetails *updatedMainSeriesDetails;
@property (copy) EKSeriesDetails *createdSeriesDetails;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOriginalSliceDescription:(id)a0;

@end
