@interface BLTPBSetRemoteGlobalSpokenSettingEnabledRequest : PBRequest <NSCopying> {
    struct { unsigned char settingDate : 1; unsigned char settingEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasSettingEnabled;
@property (nonatomic) BOOL settingEnabled;
@property (nonatomic) BOOL hasSettingDate;
@property (nonatomic) double settingDate;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
