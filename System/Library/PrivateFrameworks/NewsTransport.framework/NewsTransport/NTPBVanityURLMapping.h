@class NSMutableArray;

@interface NTPBVanityURLMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *paths;

+ (Class)pathsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)pathsAtIndex:(unsigned long long)a0;
- (unsigned long long)pathsCount;
- (void)clearPaths;
- (void)addPaths:(id)a0;

@end
