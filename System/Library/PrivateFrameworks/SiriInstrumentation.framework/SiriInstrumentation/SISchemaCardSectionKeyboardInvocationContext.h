@class NSData;

@interface SISchemaCardSectionKeyboardInvocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char keyboardPresented : 1; unsigned char keyboardLocale : 1; unsigned char existingText : 1; } _has;
}

@property (nonatomic) BOOL keyboardPresented;
@property (nonatomic) BOOL hasKeyboardPresented;
@property (nonatomic) int keyboardLocale;
@property (nonatomic) BOOL hasKeyboardLocale;
@property (nonatomic) BOOL existingText;
@property (nonatomic) BOOL hasExistingText;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteExistingText;
- (void)deleteKeyboardLocale;
- (void)deleteKeyboardPresented;

@end
