@class NSData;

@interface SISchemaClientAnyEvent : PBCodable <NSCopying> {
    struct { unsigned char eventType : 1; } _has;
}

@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasEventData;
@property (retain, nonatomic) NSData *eventData;

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
- (id)si_dictionaryRepresentation;

@end
