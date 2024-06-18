@class CKDPProtectionInfo, CKDPRecordStableUrl, CKDPShareIdentifier, CKDPStorageExpiration, CKDPRecordZoneIdentifier, NSMutableArray;

@interface CKDPZone : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (readonly, nonatomic) BOOL hasRecordProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *recordProtectionInfo;
@property (readonly, nonatomic) BOOL hasStableUrl;
@property (retain, nonatomic) CKDPRecordStableUrl *stableUrl;
@property (readonly, nonatomic) BOOL hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (retain, nonatomic) NSMutableArray *protectionInfoKeysToRemoves;
@property (readonly, nonatomic) BOOL hasStorageExpiration;
@property (retain, nonatomic) CKDPStorageExpiration *storageExpiration;

+ (Class)protectionInfoKeysToRemoveType;

- (void)mergeFrom:(id)a0;
- (unsigned long long)protectionInfoKeysToRemovesCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)addProtectionInfoKeysToRemove:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearProtectionInfoKeysToRemoves;

@end
