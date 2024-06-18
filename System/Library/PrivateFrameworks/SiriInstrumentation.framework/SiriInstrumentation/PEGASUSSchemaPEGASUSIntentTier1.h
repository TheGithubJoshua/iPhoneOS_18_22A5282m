@class NSArray, NSData, SISchemaUUID;

@interface PEGASUSSchemaPEGASUSIntentTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *intentArgs;
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
- (unsigned long long)intentArgsCount;
- (void)clearIntentArgs;
- (void)addIntentArgs:(id)a0;
- (void)deleteIntentArgs;
- (void)deleteLinkId;
- (id)intentArgsAtIndex:(unsigned long long)a0;

@end
