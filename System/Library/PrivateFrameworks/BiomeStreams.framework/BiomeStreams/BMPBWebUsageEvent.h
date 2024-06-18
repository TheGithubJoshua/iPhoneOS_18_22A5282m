@class NSString;

@interface BMPBWebUsageEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char usageState : 1; unsigned char isUsageTrusted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) BOOL hasUsageState;
@property (nonatomic) int usageState;
@property (readonly, nonatomic) BOOL hasWebpageURL;
@property (retain, nonatomic) NSString *webpageURL;
@property (readonly, nonatomic) BOOL hasWebDomain;
@property (retain, nonatomic) NSString *webDomain;
@property (readonly, nonatomic) BOOL hasApplicationId;
@property (retain, nonatomic) NSString *applicationId;
@property (readonly, nonatomic) BOOL hasDeviceId;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL hasIsUsageTrusted;
@property (nonatomic) BOOL isUsageTrusted;

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
- (int)StringAsUsageState:(id)a0;
- (id)usageStateAsString:(int)a0;

@end
