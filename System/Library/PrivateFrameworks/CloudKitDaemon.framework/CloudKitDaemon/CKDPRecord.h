@class CKDPRecordType, CKDPIdentifier, CKDPRecordStableUrl, NSMutableArray, CKDPStorageExpiration, CKDPProtectionInfo, CKDPShareIdentifier, NSString, CKDPRecordChainParent, CKDPShare, CKDPDate, NSData, CKDPRecordIdentifier, CKDPDateStatistics;

@interface CKDPRecord : PBCodable <NSCopying> {
    struct { unsigned char permission : 1; unsigned char expired : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) CKDPRecordType *type;
@property (readonly, nonatomic) BOOL hasCreatedBy;
@property (retain, nonatomic) CKDPIdentifier *createdBy;
@property (readonly, nonatomic) BOOL hasTimeStatistics;
@property (retain, nonatomic) CKDPDateStatistics *timeStatistics;
@property (retain, nonatomic) NSMutableArray *fields;
@property (readonly, nonatomic) BOOL hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (readonly, nonatomic) BOOL hasModifiedBy;
@property (retain, nonatomic) CKDPIdentifier *modifiedBy;
@property (retain, nonatomic) NSMutableArray *conflictLoserEtags;
@property (readonly, nonatomic) BOOL hasModifiedByDevice;
@property (retain, nonatomic) NSString *modifiedByDevice;
@property (retain, nonatomic) NSMutableArray *pluginFields;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) int permission;
@property (readonly, nonatomic) BOOL hasShareInfo;
@property (retain, nonatomic) CKDPShare *shareInfo;
@property (readonly, nonatomic) BOOL hasChainPrivateKey;
@property (retain, nonatomic) NSData *chainPrivateKey;
@property (readonly, nonatomic) BOOL hasChainProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *chainProtectionInfo;
@property (readonly, nonatomic) BOOL hasChainParent;
@property (retain, nonatomic) CKDPRecordChainParent *chainParent;
@property (readonly, nonatomic) BOOL hasStableUrl;
@property (retain, nonatomic) CKDPRecordStableUrl *stableUrl;
@property (retain, nonatomic) NSMutableArray *tombstonedPublicKeyIDs;
@property (readonly, nonatomic) BOOL hasZoneishPrimaryKeyId;
@property (retain, nonatomic) NSData *zoneishPrimaryKeyId;
@property (readonly, nonatomic) BOOL hasStorageExpiration;
@property (retain, nonatomic) CKDPStorageExpiration *storageExpiration;
@property (nonatomic) BOOL hasExpired;
@property (nonatomic) BOOL expired;
@property (readonly, nonatomic) BOOL hasExpirationTime;
@property (retain, nonatomic) CKDPDate *expirationTime;

+ (id)recordFromData:(id)a0;
+ (Class)conflictLoserEtagsType;
+ (Class)fieldsType;
+ (Class)pluginFieldsType;
+ (Class)tombstonedPublicKeyIDsType;

- (unsigned long long)conflictLoserEtagsCount;
- (void)addConflictLoserEtags:(id)a0;
- (void)clearConflictLoserEtags;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (id)fieldData;
- (void)clearFields;
- (void)mergeFrom:(id)a0;
- (void)addTombstonedPublicKeyIDs:(id)a0;
- (void)addFields:(id)a0;
- (id)permissionAsString:(int)a0;
- (unsigned long long)fieldsCount;
- (id)dictionaryRepresentation;
- (id)dataRepresentation;
- (void)copyTo:(id)a0;
- (int)StringAsPermission:(id)a0;
- (void)addPluginFields:(id)a0;
- (id)tombstonedPublicKeyIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)pluginFieldsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)clearTombstonedPublicKeyIDs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)tombstonedPublicKeyIDsCount;
- (void)_inflateFieldsFromData:(id)a0;
- (unsigned long long)pluginFieldsCount;
- (id)_permissionAsString;
- (void)clearPluginFields;
- (id)fieldForKey:(id)a0;

@end
