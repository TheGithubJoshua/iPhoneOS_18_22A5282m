@class NSMutableArray;

@interface SPProtoSockPuppetPlist : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *objects;

+ (Class)objectType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)addObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearObjects;
- (unsigned long long)objectsCount;

@end
