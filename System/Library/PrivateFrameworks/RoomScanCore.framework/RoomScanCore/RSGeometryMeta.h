@interface RSGeometryMeta : NSObject <NSCopying>

@property (nonatomic) BOOL isCenterScaleUpdated;
@property (nonatomic) float pixelSize;
@property (nonatomic) float floorHeight;
@property (nonatomic) float ceilingHeight;
@property (nonatomic) float supportHeight;
@property (nonatomic) void /* unknown type, empty encoding */ center;
@property (nonatomic) void /* unknown type, empty encoding */ scale;
@property (nonatomic) void /* unknown type, empty encoding */ shift;
@property (nonatomic) int imageSize;
@property (nonatomic) int zSlice;
@property (nonatomic) float visualFloorHeight;
@property (nonatomic) float visualCeilingHeight;
@property (nonatomic) void /* unknown type, empty encoding */ floorCeilingCount;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (BOOL)isEqualToRSGeometryMeta:(id)a0;

@end
