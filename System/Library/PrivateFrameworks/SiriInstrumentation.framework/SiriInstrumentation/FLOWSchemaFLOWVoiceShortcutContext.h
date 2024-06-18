@class NSArray, NSData;

@interface FLOWSchemaFLOWVoiceShortcutContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *voiceShortcutActions;
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
- (void)addVoiceShortcutAction:(id)a0;
- (void)clearVoiceShortcutAction;
- (void)deleteVoiceShortcutAction;
- (id)voiceShortcutActionAtIndex:(unsigned long long)a0;
- (unsigned long long)voiceShortcutActionCount;

@end
