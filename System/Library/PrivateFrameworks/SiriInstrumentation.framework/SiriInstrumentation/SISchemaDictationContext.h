@class NSString, NSArray, SISchemaLocaleIdentifier, SISchemaUUID, NSData;

@interface SISchemaDictationContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *keyboardLanguage;
@property (nonatomic) BOOL hasKeyboardLanguage;
@property (retain, nonatomic) SISchemaLocaleIdentifier *keyboardLocale;
@property (nonatomic) BOOL hasKeyboardLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *dictationLocale;
@property (nonatomic) BOOL hasDictationLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *userSelectedLocale;
@property (nonatomic) BOOL hasUserSelectedLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *siriSelectedLocale;
@property (nonatomic) BOOL hasSiriSelectedLocale;
@property (copy, nonatomic) NSArray *keyboardLocalesEnableds;
@property (copy, nonatomic) NSArray *dictationLocalesEnableds;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) SISchemaUUID *textInputSessionId;
@property (nonatomic) BOOL hasTextInputSessionId;
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
- (void)addDictationLocalesEnabled:(id)a0;
- (void)addKeyboardLocalesEnabled:(id)a0;
- (id)dictationLocalesEnabledAtIndex:(unsigned long long)a0;
- (void)clearDictationLocalesEnabled;
- (void)clearKeyboardLocalesEnabled;
- (void)deleteBundleId;
- (void)deleteDictationLocale;
- (void)deleteDictationLocalesEnabled;
- (void)deleteKeyboardLanguage;
- (void)deleteKeyboardLocale;
- (void)deleteKeyboardLocalesEnabled;
- (void)deleteSiriSelectedLocale;
- (void)deleteTextInputSessionId;
- (void)deleteUserSelectedLocale;
- (unsigned long long)dictationLocalesEnabledCount;
- (id)keyboardLocalesEnabledAtIndex:(unsigned long long)a0;
- (unsigned long long)keyboardLocalesEnabledCount;

@end