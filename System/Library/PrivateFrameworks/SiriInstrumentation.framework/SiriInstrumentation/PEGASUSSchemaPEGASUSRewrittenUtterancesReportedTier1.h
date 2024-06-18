@class NSArray, NSData, SISchemaUUID;

@interface PEGASUSSchemaPEGASUSRewrittenUtterancesReportedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *rewrittenUtterances;
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
- (void)addRewrittenUtterances:(id)a0;
- (void)clearRewrittenUtterances;
- (void)deleteLinkId;
- (void)deleteRewrittenUtterances;
- (id)rewrittenUtterancesAtIndex:(unsigned long long)a0;
- (unsigned long long)rewrittenUtterancesCount;

@end
