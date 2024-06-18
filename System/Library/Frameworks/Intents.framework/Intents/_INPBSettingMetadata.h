@class NSString, _INPBAppIdentifier, _INPBDevice;

@interface _INPBSettingMetadata : PBCodable <_INPBSettingMetadata, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *settingId;
@property (readonly, nonatomic) BOOL hasSettingId;
@property (retain, nonatomic) _INPBAppIdentifier *targetApp;
@property (readonly, nonatomic) BOOL hasTargetApp;
@property (retain, nonatomic) _INPBDevice *targetDevice;
@property (readonly, nonatomic) BOOL hasTargetDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end