@class NSMutableArray, HVPBContentState;

@interface HVPBContentStateEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasState;
@property (retain, nonatomic) HVPBContentState *state;
@property (retain, nonatomic) NSMutableArray *uniqueIds;

+ (Class)uniqueIdsType;

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
- (void)addUniqueIds:(id)a0;
- (void)clearUniqueIds;
- (id)uniqueIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)uniqueIdsCount;

@end
