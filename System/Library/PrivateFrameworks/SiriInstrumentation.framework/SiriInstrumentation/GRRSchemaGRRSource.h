@class NSData, SISchemaUUID;

@interface GRRSchemaGRRSource : SISchemaInstrumentationMessage {
    struct { unsigned char sourceType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sourceId;
@property (nonatomic) BOOL hasSourceId;
@property (nonatomic) int sourceType;
@property (nonatomic) BOOL hasSourceType;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteSourceId;
- (void)deleteSourceType;

@end
