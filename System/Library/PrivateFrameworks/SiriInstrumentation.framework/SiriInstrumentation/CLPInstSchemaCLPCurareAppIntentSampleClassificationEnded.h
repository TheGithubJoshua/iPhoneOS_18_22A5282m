@class NSData;

@interface CLPInstSchemaCLPCurareAppIntentSampleClassificationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char probability : 1; } _has;
}

@property (nonatomic) float probability;
@property (nonatomic) BOOL hasProbability;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteProbability;

@end
