@class NSData, HMEProtoEventMetadata;

@interface HMEProtoEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEventData;
@property (retain, nonatomic) NSData *eventData;
@property (readonly, nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) HMEProtoEventMetadata *eventMetadata;

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
