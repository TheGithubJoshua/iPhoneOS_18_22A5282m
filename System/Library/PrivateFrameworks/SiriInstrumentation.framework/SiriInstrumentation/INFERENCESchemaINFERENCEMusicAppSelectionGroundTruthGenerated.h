@class INFERENCESchemaINFERENCEMusicTrainingIndependentSignals, NSArray, NSData;

@interface INFERENCESchemaINFERENCEMusicAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEMusicTrainingIndependentSignals *inferenceMusicTrainingIndependentSignals;
@property (nonatomic) BOOL hasInferenceMusicTrainingIndependentSignals;
@property (copy, nonatomic) NSArray *inferenceMusicTrainingDependentSignals;
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
- (void)addInferenceMusicTrainingDependentSignals:(id)a0;
- (void)clearInferenceMusicTrainingDependentSignals;
- (void)deleteInferenceMusicTrainingDependentSignals;
- (void)deleteInferenceMusicTrainingIndependentSignals;
- (id)inferenceMusicTrainingDependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)inferenceMusicTrainingDependentSignalsCount;

@end
