@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSQueryRewriteEvaluated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *queryRewriteHypotheses;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
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
- (void)addQueryRewriteHypotheses:(id)a0;
- (void)clearQueryRewriteHypotheses;
- (void)deleteLinkId;
- (void)deleteQueryRewriteHypotheses;
- (id)queryRewriteHypothesesAtIndex:(unsigned long long)a0;
- (unsigned long long)queryRewriteHypothesesCount;

@end
