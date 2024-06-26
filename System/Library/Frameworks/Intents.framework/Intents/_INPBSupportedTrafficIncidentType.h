@class NSString, _INPBString;

@interface _INPBSupportedTrafficIncidentType : PBCodable <_INPBSupportedTrafficIncidentType, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBString *localizedDisplayString;
@property (readonly, nonatomic) BOOL hasLocalizedDisplayString;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)a0;
- (id)typeAsString:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
