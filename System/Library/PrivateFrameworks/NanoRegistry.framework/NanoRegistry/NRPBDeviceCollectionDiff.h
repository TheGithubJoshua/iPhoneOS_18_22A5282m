@class NSMutableArray;

@interface NRPBDeviceCollectionDiff : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pairingIDs;
@property (retain, nonatomic) NSMutableArray *diffs;

+ (Class)diffsType;
+ (Class)pairingIDsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)pairingIDsCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearPairingIDs;
- (id)pairingIDsAtIndex:(unsigned long long)a0;
- (void)addPairingIDs:(id)a0;
- (void)clearDiffs;
- (void)addDiffs:(id)a0;
- (id)diffsAtIndex:(unsigned long long)a0;
- (unsigned long long)diffsCount;

@end
