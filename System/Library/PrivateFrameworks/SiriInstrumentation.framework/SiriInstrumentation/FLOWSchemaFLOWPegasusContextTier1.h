@class PEGASUSSchemaPEGASUSIntentTier1, FLOWSchemaFLOWWebAnswerExecutionTier1, FLOWSchemaFLOWMapsExecutionTier1, NSData, SISchemaUUID, FLOWSchemaFLOWKGQAExecutionTier1, FLOWSchemaFLOWSportsExecutionTier1;

@interface FLOWSchemaFLOWPegasusContextTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSIntentTier1 *intentTier1;
@property (nonatomic) BOOL hasIntentTier1;
@property (retain, nonatomic) FLOWSchemaFLOWKGQAExecutionTier1 *kgQAExecutionTier1;
@property (nonatomic) BOOL hasKgQAExecutionTier1;
@property (retain, nonatomic) FLOWSchemaFLOWWebAnswerExecutionTier1 *webAnswerExecutionTier1;
@property (nonatomic) BOOL hasWebAnswerExecutionTier1;
@property (retain, nonatomic) FLOWSchemaFLOWSportsExecutionTier1 *sportsExecutionTier1;
@property (nonatomic) BOOL hasSportsExecutionTier1;
@property (retain, nonatomic) FLOWSchemaFLOWMapsExecutionTier1 *mapsExecutionTier1;
@property (nonatomic) BOOL hasMapsExecutionTier1;
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
- (void)deleteIntentTier1;
- (void)deleteKgQAExecutionTier1;
- (void)deleteLinkId;
- (void)deleteMapsExecutionTier1;
- (void)deleteSportsExecutionTier1;
- (void)deleteWebAnswerExecutionTier1;

@end
