@interface AWDEventKitSyncCompletedNightlySync : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char eventsSynced : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasEventsSynced;
@property (nonatomic) unsigned int eventsSynced;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
