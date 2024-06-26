@class NSMutableArray;

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *defaultTags;
@property (retain, nonatomic) NSMutableArray *optionalTags;
@property (retain, nonatomic) NSMutableArray *disabledPortraitTags;

+ (Class)disabledPortraitTagsType;
+ (Class)defaultTagsType;
+ (Class)optionalTagsType;

- (void)clearDefaultTags;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addDisabledPortraitTags:(id)a0;
- (void)clearOptionalTags;
- (void)clearDisabledPortraitTags;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)disabledPortraitTagsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)defaultTagsCount;
- (void)addDefaultTags:(id)a0;
- (id)defaultTagsAtIndex:(unsigned long long)a0;
- (void)addOptionalTags:(id)a0;
- (id)optionalTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)optionalTagsCount;
- (unsigned long long)disabledPortraitTagsCount;

@end
