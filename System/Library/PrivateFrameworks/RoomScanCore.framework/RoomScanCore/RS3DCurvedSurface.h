@interface RS3DCurvedSurface : RS3DSurface <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ circleCenter;
@property (nonatomic) float radius;
@property (nonatomic) float startOrientation;
@property (nonatomic) float endOrientation;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0 WithGroupId:(unsigned int)a1;

@end
