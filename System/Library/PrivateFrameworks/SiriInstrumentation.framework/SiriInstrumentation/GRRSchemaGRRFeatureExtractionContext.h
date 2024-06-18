@class GRRSchemaGRRFeatureExtractionStarted, GRRSchemaGRRFeatureExtracted, NSData, SISchemaUUID;

@interface GRRSchemaGRRFeatureExtractionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) GRRSchemaGRRFeatureExtractionStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) GRRSchemaGRRFeatureExtracted *ended;
@property (nonatomic) BOOL hasEnded;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteStartedOrChanged;

@end
