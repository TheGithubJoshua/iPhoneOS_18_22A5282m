@class NSData;

@interface CKDPNotificationSyncRequest : PBRequest <NSCopying> {
    struct { unsigned char maxChanges : 1; unsigned char wantsChanges : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasServerChangeToken;
@property (retain, nonatomic) NSData *serverChangeToken;
@property (nonatomic) BOOL hasMaxChanges;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic) BOOL hasWantsChanges;
@property (nonatomic) BOOL wantsChanges;

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
