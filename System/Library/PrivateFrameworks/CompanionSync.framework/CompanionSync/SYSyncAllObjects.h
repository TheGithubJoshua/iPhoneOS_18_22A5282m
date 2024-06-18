@class SYMessageHeader, NSString, NSMutableArray;

@interface SYSyncAllObjects : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSMutableArray *allObjects;

+ (Class)allObjectsType;

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
- (unsigned long long)allObjectsCount;
- (void)clearAllObjects;
- (void)addAllObjects:(id)a0;
- (id)allObjectsAtIndex:(unsigned long long)a0;

@end
