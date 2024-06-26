@class NSString, NSData, SISchemaRedactableString;

@interface SISchemaDialogOutput : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *viewID;
@property (nonatomic) BOOL hasViewID;
@property (retain, nonatomic) SISchemaRedactableString *spokenDialogOutput;
@property (nonatomic) BOOL hasSpokenDialogOutput;
@property (retain, nonatomic) SISchemaRedactableString *displayedDialogOutput;
@property (nonatomic) BOOL hasDisplayedDialogOutput;
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
- (void)deleteDisplayedDialogOutput;
- (void)deleteSpokenDialogOutput;
- (void)deleteViewID;

@end
