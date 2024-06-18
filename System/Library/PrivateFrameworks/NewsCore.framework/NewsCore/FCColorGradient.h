@class NSArray;

@interface FCColorGradient : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (readonly, nonatomic) NSArray *colors;
@property (readonly, nonatomic) NSArray *locations;

+ (id)blackGradient;
+ (id)colorGradientWithConfigDict:(id)a0;
+ (id)whiteGradient;
+ (id)colorGradientWithColors:(id)a0 locations:(id)a1;

- (id)init;
- (id)initWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 colors:(id)a2 locations:(id)a3;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSimilarToColorGradient:(id)a0 withinPercentage:(double)a1;

@end
