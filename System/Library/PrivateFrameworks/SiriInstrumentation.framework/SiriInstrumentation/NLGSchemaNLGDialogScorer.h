@class NSData;

@interface NLGSchemaNLGDialogScorer : SISchemaInstrumentationMessage {
    struct { unsigned char dialogScorerType : 1; } _has;
}

@property (nonatomic) int dialogScorerType;
@property (nonatomic) BOOL hasDialogScorerType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteDialogScorerType;

@end
