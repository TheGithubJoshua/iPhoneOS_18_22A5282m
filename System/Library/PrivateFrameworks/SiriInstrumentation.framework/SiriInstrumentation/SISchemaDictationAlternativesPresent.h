@class NSData, SISchemaLocaleIdentifier;

@interface SISchemaDictationAlternativesPresent : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfUnderlines : 1; unsigned char countOfWordsUnderlined : 1; unsigned char multilingualIsLowConfidence : 1; } _has;
}

@property (nonatomic) int numberOfUnderlines;
@property (nonatomic) BOOL hasNumberOfUnderlines;
@property (nonatomic) int countOfWordsUnderlined;
@property (nonatomic) BOOL hasCountOfWordsUnderlined;
@property (retain, nonatomic) SISchemaLocaleIdentifier *alternativesLocale;
@property (nonatomic) BOOL hasAlternativesLocale;
@property (nonatomic) BOOL multilingualIsLowConfidence;
@property (nonatomic) BOOL hasMultilingualIsLowConfidence;
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
- (void)deleteAlternativesLocale;
- (void)deleteCountOfWordsUnderlined;
- (void)deleteMultilingualIsLowConfidence;
- (void)deleteNumberOfUnderlines;

@end
