@class FLOWLINKSchemaFLOWLinkActionEnded, FLOWLINKSchemaFLOWLinkActionStarted, NSData, FLOWLINKSchemaFLOWLinkActionCancelled, FLOWLINKSchemaFLOWLinkActionFailed;

@interface FLOWLINKSchemaFLOWLINKActionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWLINKSchemaFLOWLinkActionStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLinkActionEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLinkActionFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLinkActionCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
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
- (void)deleteCancelled;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
