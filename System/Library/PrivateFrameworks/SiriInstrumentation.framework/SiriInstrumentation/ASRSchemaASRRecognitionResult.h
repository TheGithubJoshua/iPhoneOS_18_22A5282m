@class NSArray, NSData, SISchemaUUID;

@interface ASRSchemaASRRecognitionResult : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSArray *utterances;
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
- (void)clearUtterances;
- (id)phrasesAtIndex:(unsigned long long)a0;
- (unsigned long long)utterancesCount;
- (void)addPhrases:(id)a0;
- (void)addUtterances:(id)a0;
- (void)clearPhrases;
- (void)deleteLinkId;
- (void)deletePhrases;
- (void)deleteUtterances;
- (unsigned long long)phrasesCount;
- (id)utterancesAtIndex:(unsigned long long)a0;

@end
