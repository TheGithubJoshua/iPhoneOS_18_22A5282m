@class NSString, _INPBDateTimeRange;

@interface _INPBSetTemporalSettingIntentResponse : PBCodable <_INPBSetTemporalSettingIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *errorDetail;
@property (readonly, nonatomic) BOOL hasErrorDetail;
@property (retain, nonatomic) _INPBDateTimeRange *oldValue;
@property (readonly, nonatomic) BOOL hasOldValue;
@property (retain, nonatomic) _INPBDateTimeRange *updatedValue;
@property (readonly, nonatomic) BOOL hasUpdatedValue;
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