@class NSString;

@interface NPKProtoAutomaticProvisioningRequest : PBRequest <NSCopying> {
    struct { unsigned char credentialType : 1; unsigned char cardType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPassTypeIdentifier;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (readonly, nonatomic) BOOL hasSerialNumber;
@property (retain, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL hasCredentialType;
@property (nonatomic) unsigned long long credentialType;
@property (readonly, nonatomic) BOOL hasPrimaryAccountNumberSuffix;
@property (retain, nonatomic) NSString *primaryAccountNumberSuffix;
@property (readonly, nonatomic) BOOL hasLocalizedName;
@property (retain, nonatomic) NSString *localizedName;
@property (nonatomic) BOOL hasCardType;
@property (nonatomic) int cardType;

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
- (int)StringAsCardType:(id)a0;
- (id)cardTypeAsString:(int)a0;

@end
