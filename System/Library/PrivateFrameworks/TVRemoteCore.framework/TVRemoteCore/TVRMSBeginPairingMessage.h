@class NSString;

@interface TVRMSBeginPairingMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAppName;
@property (retain, nonatomic) NSString *appName;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) BOOL hasPasscode;
@property (retain, nonatomic) NSString *passcode;

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
