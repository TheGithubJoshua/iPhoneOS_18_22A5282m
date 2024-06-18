@class DODMLASRSchemaDODMLASRModelMetrics, DODMLASRSchemaDODMLASRTranscriptionMetrics, NSData, DODMLASRSchemaDODMLASREvaluationMetrics;

@interface DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char userLocale : 1; } _has;
}

@property (nonatomic) int userLocale;
@property (nonatomic) BOOL hasUserLocale;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptionMetrics *transcriptionMetrics;
@property (nonatomic) BOOL hasTranscriptionMetrics;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRModelMetrics *modelMetrics;
@property (nonatomic) BOOL hasModelMetrics;
@property (retain, nonatomic) DODMLASRSchemaDODMLASREvaluationMetrics *evaluationMetrics;
@property (nonatomic) BOOL hasEvaluationMetrics;
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
- (void)deleteEvaluationMetrics;
- (void)deleteModelMetrics;
- (void)deleteTranscriptionMetrics;
- (void)deleteUserLocale;

@end
