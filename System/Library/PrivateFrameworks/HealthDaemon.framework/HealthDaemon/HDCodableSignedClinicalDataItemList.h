@class NSMutableArray;

@interface HDCodableSignedClinicalDataItemList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;

- (void)clearItems;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)itemsCount;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)addItems:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemsAtIndex:(unsigned long long)a0;

@end
