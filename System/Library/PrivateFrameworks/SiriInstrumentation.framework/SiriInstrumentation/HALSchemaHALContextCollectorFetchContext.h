@class HALSchemaHALContextCollectorFetchEnded, NSData, SISchemaUUID, HALSchemaHALContextCollectorFetchFailed, HALSchemaHALContextCollectorFetchStarted;

@interface HALSchemaHALContextCollectorFetchContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) HALSchemaHALContextCollectorFetchStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) HALSchemaHALContextCollectorFetchEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) HALSchemaHALContextCollectorFetchFailed *failed;
@property (nonatomic) BOOL hasFailed;
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
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
