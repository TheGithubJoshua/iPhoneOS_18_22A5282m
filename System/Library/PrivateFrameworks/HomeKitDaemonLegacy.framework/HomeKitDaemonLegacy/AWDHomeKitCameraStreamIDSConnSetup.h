@class AWDHomeKitCameraStreamIDSConnSetupParameters;

@interface AWDHomeKitCameraStreamIDSConnSetup : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVideoConnection;
@property (retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *videoConnection;
@property (readonly, nonatomic) BOOL hasAudioConnection;
@property (retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *audioConnection;
@property (readonly, nonatomic) BOOL hasKeepaliveConnection;
@property (retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *keepaliveConnection;

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
