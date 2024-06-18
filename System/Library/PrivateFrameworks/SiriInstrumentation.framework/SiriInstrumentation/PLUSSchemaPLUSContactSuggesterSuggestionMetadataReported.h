@class NSData, SISchemaUUID;

@interface PLUSSchemaPLUSContactSuggesterSuggestionMetadataReported : SISchemaInstrumentationMessage {
    struct { unsigned char isDuplicateSuggestion : 1; unsigned char isSuggestionPresentInModelOutput : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *suggestionId;
@property (nonatomic) BOOL hasSuggestionId;
@property (nonatomic) BOOL isDuplicateSuggestion;
@property (nonatomic) BOOL hasIsDuplicateSuggestion;
@property (nonatomic) BOOL isSuggestionPresentInModelOutput;
@property (nonatomic) BOOL hasIsSuggestionPresentInModelOutput;
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
- (void)deleteIsDuplicateSuggestion;
- (void)deleteIsSuggestionPresentInModelOutput;
- (void)deleteSuggestionId;

@end
