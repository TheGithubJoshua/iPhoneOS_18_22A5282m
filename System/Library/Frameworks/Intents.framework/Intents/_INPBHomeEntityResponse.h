@class NSArray, NSString, _INPBHomeEntity;

@interface _INPBHomeEntityResponse : PBCodable <_INPBHomeEntityResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBHomeEntity *entity;
@property (readonly, nonatomic) BOOL hasEntity;
@property (copy, nonatomic) NSArray *taskResponses;
@property (readonly, nonatomic) unsigned long long taskResponsesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)taskResponsesType;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addTaskResponses:(id)a0;
- (void)clearTaskResponses;
- (id)taskResponsesAtIndex:(unsigned long long)a0;

@end
