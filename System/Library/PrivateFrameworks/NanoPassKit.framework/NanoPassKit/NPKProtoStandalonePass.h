@class NSString, NSData, NSMutableArray;

@interface NPKProtoStandalonePass : PBCodable <NSCopying> {
    struct { unsigned char passType : 1; unsigned char remotePass : 1; } _has;
}

@property (nonatomic) BOOL hasPassType;
@property (nonatomic) int passType;
@property (readonly, nonatomic) BOOL hasSerialNumber;
@property (retain, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) BOOL hasPassTypeIdentifier;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (readonly, nonatomic) BOOL hasImageData;
@property (retain, nonatomic) NSData *imageData;
@property (readonly, nonatomic) BOOL hasLocalizedName;
@property (retain, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) BOOL hasLocalizedDescription;
@property (retain, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (retain, nonatomic) NSString *organizationName;
@property (retain, nonatomic) NSMutableArray *userInfos;
@property (nonatomic) BOOL hasRemotePass;
@property (nonatomic) BOOL remotePass;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;

+ (Class)userInfosType;

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
- (void)clearUserInfos;
- (unsigned long long)userInfosCount;
- (int)StringAsPassType:(id)a0;
- (void)addUserInfos:(id)a0;
- (id)passTypeAsString:(int)a0;
- (id)userInfosAtIndex:(unsigned long long)a0;

@end
