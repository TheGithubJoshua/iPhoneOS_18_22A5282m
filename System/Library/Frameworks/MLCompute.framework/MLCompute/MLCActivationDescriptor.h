@interface MLCActivationDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) int activationType;
@property (readonly, nonatomic) float a;
@property (readonly, nonatomic) float b;
@property (readonly, nonatomic) float c;

+ (id)descriptorWithType:(int)a0;
+ (id)descriptorWithType:(int)a0 a:(float)a1;
+ (id)descriptorWithType:(int)a0 a:(float)a1 b:(float)a2;
+ (void /* unknown type, empty encoding */)defaultParametersForType:(int)a0;
+ (id)descriptorWithType:(int)a0 a:(float)a1 b:(float)a2 c:(float)a3;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(int)a0 a:(float)a1 b:(float)a2 c:(float)a3;

@end
