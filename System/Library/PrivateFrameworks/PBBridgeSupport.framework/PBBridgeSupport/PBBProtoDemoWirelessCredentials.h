@class NSString;

@interface PBBProtoDemoWirelessCredentials : PBCodable <NSCopying> {
    struct { unsigned char companionDemoConfig : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSsid;
@property (retain, nonatomic) NSString *ssid;
@property (readonly, nonatomic) BOOL hasPassword;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) BOOL hasCompanionDemoConfig;
@property (nonatomic) unsigned int companionDemoConfig;

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
