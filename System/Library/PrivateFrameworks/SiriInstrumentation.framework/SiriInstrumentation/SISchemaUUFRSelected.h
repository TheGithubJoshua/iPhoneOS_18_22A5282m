@class SISchemaUUFRSnippetViewSelected, SISchemaUUFRCasinoCardSelected, NSData;

@interface SISchemaUUFRSelected : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUFRCasinoCardSelected *casinoCardSelected;
@property (nonatomic) BOOL hasCasinoCardSelected;
@property (retain, nonatomic) SISchemaUUFRSnippetViewSelected *snippetViewSelected;
@property (nonatomic) BOOL hasSnippetViewSelected;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSelectionevent;

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
- (void)deleteCasinoCardSelected;
- (void)deleteSnippetViewSelected;

@end
