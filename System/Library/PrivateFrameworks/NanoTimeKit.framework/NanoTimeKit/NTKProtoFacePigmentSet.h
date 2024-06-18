@class NSString, NSMutableArray;

@interface NTKProtoFacePigmentSet : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *collectionBySlots;

+ (Class)collectionBySlotsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCollectionBySlots:(id)a0;
- (void)clearCollectionBySlots;
- (id)collectionBySlotsAtIndex:(unsigned long long)a0;
- (unsigned long long)collectionBySlotsCount;

@end
