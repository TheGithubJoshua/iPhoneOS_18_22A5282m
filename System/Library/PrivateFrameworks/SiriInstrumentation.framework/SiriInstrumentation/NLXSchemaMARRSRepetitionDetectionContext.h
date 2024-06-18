@class NLXSchemaMARRSRepetitionDetectionEvaluated, NLXSchemaMARRSRepetitionDetectionStarted, NSData, NLXSchemaMARRSRepetitionDetectionFailed;

@interface NLXSchemaMARRSRepetitionDetectionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionStarted *started;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionEvaluated *evaluated;
@property (nonatomic) BOOL hasEvaluated;
@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionEvaluated *ended;
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
