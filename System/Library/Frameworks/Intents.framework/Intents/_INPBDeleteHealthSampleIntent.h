@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBDeleteHealthSampleIntent : PBCodable <_INPBDeleteHealthSampleIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (copy, nonatomic) NSArray *sampleUuids;
@property (readonly, nonatomic) unsigned long long sampleUuidsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sampleUuidsType;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSampleUuids:(id)a0;
- (void)clearSampleUuids;
- (id)sampleUuidsAtIndex:(unsigned long long)a0;

@end