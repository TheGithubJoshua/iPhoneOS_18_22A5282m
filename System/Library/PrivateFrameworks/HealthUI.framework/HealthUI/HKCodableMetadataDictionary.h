@class NSMutableArray;

@interface HKCodableMetadataDictionary : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keyValuePairs;

+ (Class)keyValuePairsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addKeyValuePairs:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearKeyValuePairs;
- (id)keyValuePairsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)keyValuePairsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end