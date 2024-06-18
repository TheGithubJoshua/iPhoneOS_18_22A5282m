@class NSMutableArray;

@interface ATXPBExecutableReferenceCache : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keys;

+ (Class)keysType;

- (void)addKeys:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)clearKeys;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)keysCount;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keysAtIndex:(unsigned long long)a0;

@end
