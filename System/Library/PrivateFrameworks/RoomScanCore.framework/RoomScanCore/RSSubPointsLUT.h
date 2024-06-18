@interface RSSubPointsLUT : NSObject <NSCopying>

@property (nonatomic) unsigned long long begin;
@property (nonatomic) unsigned long long end;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } pose;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } intrinsics;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long rawSize;
@property (nonatomic) float camW;
@property (nonatomic) float camH;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToRSSubPointsLUT:(id)a0;

@end
