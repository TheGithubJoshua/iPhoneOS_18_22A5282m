@class NSString, NSData, NPKProtoCatalog, NSMutableArray, NPKProtoPassSyncStateItem;

@interface NPKProtoPassSyncStateChange : PBCodable <NSCopying> {
    struct { unsigned char lastKnownReconciledPassSyncStateHashVersion : 1; unsigned char passSegmentIndex : 1; unsigned char passSegmentTotal : 1; } _has;
}

@property (retain, nonatomic) NSData *changeUUID;
@property (readonly, nonatomic) BOOL hasLastKnownReconciledPassSyncStateHash;
@property (retain, nonatomic) NSData *lastKnownReconciledPassSyncStateHash;
@property (nonatomic) int changeType;
@property (retain, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) BOOL hasSyncStateItem;
@property (retain, nonatomic) NPKProtoPassSyncStateItem *syncStateItem;
@property (readonly, nonatomic) BOOL hasPassData;
@property (retain, nonatomic) NSData *passData;
@property (nonatomic) BOOL hasPassSegmentIndex;
@property (nonatomic) unsigned int passSegmentIndex;
@property (nonatomic) BOOL hasPassSegmentTotal;
@property (nonatomic) unsigned int passSegmentTotal;
@property (readonly, nonatomic) BOOL hasCompanionCatalog;
@property (retain, nonatomic) NPKProtoCatalog *companionCatalog;
@property (readonly, nonatomic) BOOL hasBaseManifestHashForPartialUpdate;
@property (retain, nonatomic) NSData *baseManifestHashForPartialUpdate;
@property (retain, nonatomic) NSMutableArray *remoteAssetsForPartialUpdates;
@property (readonly, nonatomic) BOOL hasWatchCatalog;
@property (retain, nonatomic) NPKProtoCatalog *watchCatalog;
@property (nonatomic) BOOL hasLastKnownReconciledPassSyncStateHashVersion;
@property (nonatomic) unsigned int lastKnownReconciledPassSyncStateHashVersion;

+ (Class)remoteAssetsForPartialUpdateType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsChangeType:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)changeTypeAsString:(int)a0;
- (void)addRemoteAssetsForPartialUpdate:(id)a0;
- (void)clearRemoteAssetsForPartialUpdates;
- (id)npkDescription;
- (id)remoteAssetsForPartialUpdateAtIndex:(unsigned long long)a0;
- (unsigned long long)remoteAssetsForPartialUpdatesCount;

@end
