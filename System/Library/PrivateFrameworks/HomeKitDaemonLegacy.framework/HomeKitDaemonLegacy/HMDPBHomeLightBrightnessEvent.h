@class NSString;

@interface HMDPBHomeLightBrightnessEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHomeUUID;
@property (retain, nonatomic) NSString *homeUUID;
@property (readonly, nonatomic) BOOL hasAccessoryUUID;
@property (retain, nonatomic) NSString *accessoryUUID;
@property (readonly, nonatomic) BOOL hasCharacteristicUUID;
@property (retain, nonatomic) NSString *characteristicUUID;
@property (readonly, nonatomic) BOOL hasBrightness;
@property (retain, nonatomic) NSString *brightness;

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
