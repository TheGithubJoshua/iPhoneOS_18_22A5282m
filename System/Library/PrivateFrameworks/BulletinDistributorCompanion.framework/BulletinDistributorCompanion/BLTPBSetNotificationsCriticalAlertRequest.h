@class NSString;

@interface BLTPBSetNotificationsCriticalAlertRequest : PBRequest <NSCopying> {
    struct { unsigned char criticalAlertSetting : 1; } _has;
}

@property (nonatomic) BOOL hasCriticalAlertSetting;
@property (nonatomic) int criticalAlertSetting;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *sectionID;

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
- (int)StringAsCriticalAlertSetting:(id)a0;
- (id)criticalAlertSettingAsString:(int)a0;

@end
