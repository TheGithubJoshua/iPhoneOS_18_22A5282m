@class NSData;

@interface CKDPZoneRetrieveChangesRequest : PBRequest <NSCopying> {
    struct { unsigned char maxChangedZones : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (nonatomic) BOOL hasMaxChangedZones;
@property (nonatomic) unsigned int maxChangedZones;

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
