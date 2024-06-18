@class NSString, DRSProtoTaskingDeviceMetadata;

@interface DRSProtoTaskingConfigMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTaskingDeviceMetadata;
@property (retain, nonatomic) DRSProtoTaskingDeviceMetadata *taskingDeviceMetadata;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasTeamId;
@property (retain, nonatomic) NSString *teamId;

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
