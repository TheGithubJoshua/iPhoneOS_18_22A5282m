@class HDCodableMedicalCodingList, NSMutableArray;

@interface HDCodableInspectableValueCollection : PBCodable <NSCopying> {
    struct { unsigned char collectionType : 1; } _has;
}

@property (nonatomic) BOOL hasCollectionType;
@property (nonatomic) long long collectionType;
@property (retain, nonatomic) NSMutableArray *collections;
@property (readonly, nonatomic) BOOL hasElementTags;
@property (retain, nonatomic) HDCodableMedicalCodingList *elementTags;

+ (Class)collectionType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)collectionsCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearCollections;
- (id)collectionAtIndex:(unsigned long long)a0;
- (void)addCollection:(id)a0;

@end
