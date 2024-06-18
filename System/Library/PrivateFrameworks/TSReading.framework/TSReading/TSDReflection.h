@interface TSDReflection : NSObject <TSDMixing, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) double fadeAcceleration;

+ (BOOL)canMixWithNilObjects;
+ (id)reflection;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOpacity:(double)a0;
- (id)initWithOpacity:(double)a0 fadeAcceleration:(double)a1;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;

@end
