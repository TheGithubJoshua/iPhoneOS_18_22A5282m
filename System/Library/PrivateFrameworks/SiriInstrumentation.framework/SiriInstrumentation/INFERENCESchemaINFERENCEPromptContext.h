@class INFERENCESchemaINFERENCEDisambiguationPromptContext, NSData, INFERENCESchemaINFERENCEConfirmationPromptContext;

@interface INFERENCESchemaINFERENCEPromptContext : SISchemaInstrumentationMessage {
    struct { unsigned char tag : 1; } _has;
}

@property (nonatomic) int tag;
@property (nonatomic) BOOL hasTag;
@property (retain, nonatomic) INFERENCESchemaINFERENCEConfirmationPromptContext *confirmationPromptContext;
@property (nonatomic) BOOL hasConfirmationPromptContext;
@property (retain, nonatomic) INFERENCESchemaINFERENCEDisambiguationPromptContext *disambiguationPromptContext;
@property (nonatomic) BOOL hasDisambiguationPromptContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPromptcontext;

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
- (void)deleteConfirmationPromptContext;
- (void)deleteDisambiguationPromptContext;
- (void)deleteTag;

@end
