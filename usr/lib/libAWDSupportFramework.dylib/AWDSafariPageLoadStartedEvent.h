@interface AWDSafariPageLoadStartedEvent : PBCodable <NSCopying> {
    struct { unsigned char configurationID : 1; unsigned char pageID : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasConfigurationID;
@property (nonatomic) unsigned long long configurationID;
@property (nonatomic) BOOL hasPageID;
@property (nonatomic) unsigned long long pageID;

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