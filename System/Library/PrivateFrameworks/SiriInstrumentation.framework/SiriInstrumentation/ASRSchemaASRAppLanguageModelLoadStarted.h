@class NSData;

@interface ASRSchemaASRAppLanguageModelLoadStarted : SISchemaInstrumentationMessage {
    struct { unsigned char modelLocale : 1; } _has;
}

@property (nonatomic) int modelLocale;
@property (nonatomic) BOOL hasModelLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteModelLocale;

@end
