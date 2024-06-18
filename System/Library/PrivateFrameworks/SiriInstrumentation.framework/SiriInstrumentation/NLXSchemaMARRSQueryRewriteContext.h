@class NLXSchemaMARRSQueryRewriteFailed, NLXSchemaMARRSQueryRewriteEvaluated, NSData, NLXSchemaMARRSQueryRewriteStarted;

@interface NLXSchemaMARRSQueryRewriteContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaMARRSQueryRewriteStarted *started;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) NLXSchemaMARRSQueryRewriteEvaluated *evaluated;
@property (nonatomic) BOOL hasEvaluated;
@property (retain, nonatomic) NLXSchemaMARRSQueryRewriteFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) NLXSchemaMARRSQueryRewriteStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) NLXSchemaMARRSQueryRewriteEvaluated *ended;
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
- (void)deleteEvaluated;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStarted;
- (void)deleteStartedOrChanged;

@end
