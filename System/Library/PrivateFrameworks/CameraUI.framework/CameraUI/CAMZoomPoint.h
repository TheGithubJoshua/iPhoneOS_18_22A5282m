@interface CAMZoomPoint : NSObject

@property (readonly, nonatomic) CAMZoomPoint *baseZoomPoint;
@property (readonly, nonatomic) double zoomFactor;
@property (readonly, nonatomic) double displayZoomFactor;

+ (id)zoomPointsWithFactors:(id)a0 displayZoomFactors:(id)a1;
+ (id)zoomFactorsFromZoomPoints:(id)a0;
+ (id)zoomPointWithFactor:(double)a0 displayed:(double)a1;
+ (id)significantIndexesInZoomPoints:(id)a0;
+ (id)displayZoomFactorsFromZoomPoints:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToZoomPoint:(id)a0;

@end
