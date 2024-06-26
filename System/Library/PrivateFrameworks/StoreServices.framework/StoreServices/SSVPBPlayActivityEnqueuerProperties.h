@class NSString;

@interface SSVPBPlayActivityEnqueuerProperties : PBCodable <NSCopying> {
    struct { unsigned char storeAccountID : 1; unsigned char systemReleaseType : 1; unsigned char privateListeningEnabled : 1; unsigned char sBEnabled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) BOOL hasDeviceGUID;
@property (retain, nonatomic) NSString *deviceGUID;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;
@property (nonatomic) BOOL hasSystemReleaseType;
@property (nonatomic) int systemReleaseType;
@property (nonatomic) BOOL hasSBEnabled;
@property (nonatomic) BOOL sBEnabled;
@property (nonatomic) BOOL hasStoreAccountID;
@property (nonatomic) unsigned long long storeAccountID;
@property (readonly, nonatomic) BOOL hasStoreFrontID;
@property (retain, nonatomic) NSString *storeFrontID;
@property (nonatomic) BOOL hasPrivateListeningEnabled;
@property (nonatomic) BOOL privateListeningEnabled;

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
- (int)StringAsSystemReleaseType:(id)a0;
- (id)systemReleaseTypeAsString:(int)a0;

@end
