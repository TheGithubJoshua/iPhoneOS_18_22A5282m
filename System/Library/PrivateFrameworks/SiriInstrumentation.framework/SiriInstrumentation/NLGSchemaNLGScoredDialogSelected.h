@class NLGSchemaNLGScoredDialog, NLGSchemaNLGDialogScorer, NSData, NLGSchemaNLGDialogCandidateStatistics;

@interface NLGSchemaNLGScoredDialogSelected : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLGSchemaNLGDialogScorer *dialogScorer;
@property (nonatomic) BOOL hasDialogScorer;
@property (retain, nonatomic) NLGSchemaNLGDialogCandidateStatistics *dialogCandidateStatistics;
@property (nonatomic) BOOL hasDialogCandidateStatistics;
@property (retain, nonatomic) NLGSchemaNLGScoredDialog *selectedScoredDialog;
@property (nonatomic) BOOL hasSelectedScoredDialog;
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
- (void)deleteDialogCandidateStatistics;
- (void)deleteDialogScorer;
- (void)deleteSelectedScoredDialog;

@end
