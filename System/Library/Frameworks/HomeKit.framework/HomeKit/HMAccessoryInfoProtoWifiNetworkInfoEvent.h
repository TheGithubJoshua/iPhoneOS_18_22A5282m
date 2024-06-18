@class NSString;

@interface HMAccessoryInfoProtoWifiNetworkInfoEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMacAddress;
@property (retain, nonatomic) NSString *macAddress;
@property (readonly, nonatomic) BOOL hasNetworkSSID;
@property (retain, nonatomic) NSString *networkSSID;

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
