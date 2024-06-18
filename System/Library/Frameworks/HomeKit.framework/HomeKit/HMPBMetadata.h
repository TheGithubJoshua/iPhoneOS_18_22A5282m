@class NSMutableArray;

@interface HMPBMetadata : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *hapCharacteristics;
@property (retain, nonatomic) NSMutableArray *hapServices;
@property (retain, nonatomic) NSMutableArray *hapCategories;

+ (Class)hapServicesType;
+ (Class)hapCategoriesType;
+ (Class)hapCharacteristicsType;

- (void)clearHapServices;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hapCategoriesCount;
- (void)addHapCategories:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearHapCharacteristics;
- (id)hapCharacteristicsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)hapServicesAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)addHapServices:(id)a0;
- (unsigned long long)hapServicesCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearHapCategories;
- (void)addHapCharacteristics:(id)a0;
- (id)hapCategoriesAtIndex:(unsigned long long)a0;
- (unsigned long long)hapCharacteristicsCount;

@end
