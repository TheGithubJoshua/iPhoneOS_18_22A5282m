@class NSString, NSData;

@interface PLUSSchemaPLUSTMDCCorrectedPronunciationTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *firstNamePhonemes;
@property (nonatomic) BOOL hasFirstNamePhonemes;
@property (copy, nonatomic) NSString *lastNamePhonemes;
@property (nonatomic) BOOL hasLastNamePhonemes;
@property (copy, nonatomic) NSString *nicknamePhonemes;
@property (nonatomic) BOOL hasNicknamePhonemes;
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
- (void)deleteFirstNamePhonemes;
- (void)deleteLastNamePhonemes;
- (void)deleteNicknamePhonemes;

@end
