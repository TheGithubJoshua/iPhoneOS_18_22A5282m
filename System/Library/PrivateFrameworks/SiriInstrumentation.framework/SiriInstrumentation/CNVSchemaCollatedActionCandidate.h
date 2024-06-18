@class NSArray, NSData, SISchemaUUID;

@interface CNVSchemaCollatedActionCandidate : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *primaryActionCandidateId;
@property (nonatomic) BOOL hasPrimaryActionCandidateId;
@property (copy, nonatomic) NSArray *alternativeActionCandidateIds;
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
- (void)addAlternativeActionCandidateIds:(id)a0;
- (id)alternativeActionCandidateIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)alternativeActionCandidateIdsCount;
- (void)clearAlternativeActionCandidateIds;
- (void)deleteAlternativeActionCandidateIds;
- (void)deletePrimaryActionCandidateId;

@end
