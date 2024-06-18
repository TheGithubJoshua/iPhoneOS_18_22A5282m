@class NSString;

@interface IDSQRProtoPluginControlResponse : PBCodable <NSCopying> {
    struct { unsigned char pluginParticipantId : 1; } _has;
}

@property (nonatomic) BOOL hasPluginParticipantId;
@property (nonatomic) unsigned long long pluginParticipantId;
@property (readonly, nonatomic) BOOL hasPluginServerCertHostname;
@property (retain, nonatomic) NSString *pluginServerCertHostname;
@property (readonly, nonatomic) BOOL hasPluginServerCertOid;
@property (retain, nonatomic) NSString *pluginServerCertOid;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
