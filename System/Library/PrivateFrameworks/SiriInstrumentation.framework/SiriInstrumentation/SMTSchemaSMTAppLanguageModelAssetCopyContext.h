@class SMTSchemaSMTAppLanguageModelAssetCopyStarted, NSData, SMTSchemaSMTAppLanguageModelAssetCopyEnded, SMTSchemaSMTAppLanguageModelAssetCopyFailed;

@interface SMTSchemaSMTAppLanguageModelAssetCopyContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelAssetCopyStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelAssetCopyEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelAssetCopyFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
