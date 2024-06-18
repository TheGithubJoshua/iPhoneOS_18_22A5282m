@class NSString;

@interface BMPBDeviceMetadataEvent : PBCodable <NSCopying> {
    struct { unsigned char platform : 1; unsigned char rapidSecurityResponsePreReboot : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (nonatomic) BOOL hasPlatform;
@property (nonatomic) int platform;
@property (readonly, nonatomic) BOOL hasSupplementalBuild;
@property (retain, nonatomic) NSString *supplementalBuild;
@property (nonatomic) BOOL hasRapidSecurityResponsePreReboot;
@property (nonatomic) BOOL rapidSecurityResponsePreReboot;

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
- (int)StringAsPlatform:(id)a0;
- (id)platformAsString:(int)a0;

@end
