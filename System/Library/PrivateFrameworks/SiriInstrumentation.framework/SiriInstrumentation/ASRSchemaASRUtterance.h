@class NSArray, NSData;

@interface ASRSchemaASRUtterance : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *interpretationIndices;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)addInterpretationIndices:(unsigned int)a0;
- (void)clearInterpretationIndices;
- (void)deleteInterpretationIndices;
- (unsigned int)interpretationIndicesAtIndex:(unsigned long long)a0;
- (unsigned long long)interpretationIndicesCount;

@end
