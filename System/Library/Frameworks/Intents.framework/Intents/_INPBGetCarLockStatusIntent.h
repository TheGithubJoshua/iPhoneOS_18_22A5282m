@class _INPBDataString, NSString, _INPBIntentMetadata;

@interface _INPBGetCarLockStatusIntent : PBCodable <_INPBGetCarLockStatusIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *carName;
@property (readonly, nonatomic) BOOL hasCarName;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
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