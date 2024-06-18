@class NSString, _INPBIntentMetadata;

@interface _INPBReadAnnouncementIntent : PBCodable <_INPBReadAnnouncementIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char readType : 1; unsigned char userNotificationType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int readType;
@property (nonatomic) BOOL hasReadType;
@property (copy, nonatomic) NSString *startAnnouncementIdentifier;
@property (readonly, nonatomic) BOOL hasStartAnnouncementIdentifier;
@property (nonatomic) int userNotificationType;
@property (nonatomic) BOOL hasUserNotificationType;
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
- (int)StringAsReadType:(id)a0;
- (int)StringAsUserNotificationType:(id)a0;
- (id)readTypeAsString:(int)a0;
- (id)userNotificationTypeAsString:(int)a0;

@end
