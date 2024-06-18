@class NSMutableArray;

@interface NRPBMutableDeviceCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pairingIDs;
@property (retain, nonatomic) NSMutableArray *devices;

+ (Class)devicesType;
+ (Class)pairingIDsType;

- (void)addDevices:(id)a0;
- (id)devicesAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)clearDevices;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)pairingIDsCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)devicesCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearPairingIDs;
- (id)pairingIDsAtIndex:(unsigned long long)a0;
- (void)addPairingIDs:(id)a0;

@end
