@class NSData, CKDPAssetsToDownload, CKDPRecordZoneIdentifier;

@interface CKDPFetchArchivedRecordsRequest : PBRequest <NSCopying> {
    struct { unsigned char limit : 1; unsigned char newestFirst : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) BOOL hasArchiveContinuationToken;
@property (retain, nonatomic) NSData *archiveContinuationToken;
@property (nonatomic) BOOL hasNewestFirst;
@property (nonatomic) BOOL newestFirst;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) unsigned int limit;
@property (readonly, nonatomic) BOOL hasAssetsToDownload;
@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload;

+ (id)options;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
