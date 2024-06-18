@class INFERENCESchemaINFERENCENotebookAppSelectionTrainingIndependentSignals, NSArray, NSData;

@interface INFERENCESchemaINFERENCENotebookAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCENotebookAppSelectionTrainingIndependentSignals *inferenceNotebookAppSelectionTrainingAppIndependentSignals;
@property (nonatomic) BOOL hasInferenceNotebookAppSelectionTrainingAppIndependentSignals;
@property (copy, nonatomic) NSArray *inferenceNotebookAppSelectionTrainingAppDependentSignals;
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
- (void)addInferenceNotebookAppSelectionTrainingAppDependentSignals:(id)a0;
- (void)clearInferenceNotebookAppSelectionTrainingAppDependentSignals;
- (void)deleteInferenceNotebookAppSelectionTrainingAppDependentSignals;
- (void)deleteInferenceNotebookAppSelectionTrainingAppIndependentSignals;
- (id)inferenceNotebookAppSelectionTrainingAppDependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)inferenceNotebookAppSelectionTrainingAppDependentSignalsCount;

@end
