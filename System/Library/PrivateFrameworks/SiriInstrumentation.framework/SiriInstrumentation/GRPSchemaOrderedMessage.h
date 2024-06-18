@class NSData, GRPSchemaSiriEventTypeUnion;

@interface GRPSchemaOrderedMessage : SISchemaInstrumentationMessage {
    struct { unsigned char logicalEventTimestampInNs : 1; } _has;
}

@property (nonatomic) long long logicalEventTimestampInNs;
@property (nonatomic) BOOL hasLogicalEventTimestampInNs;
@property (retain, nonatomic) GRPSchemaSiriEventTypeUnion *siriEventTypeUnion;
@property (nonatomic) BOOL hasSiriEventTypeUnion;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteLogicalEventTimestampInNs;
- (void)deleteSiriEventTypeUnion;

@end
