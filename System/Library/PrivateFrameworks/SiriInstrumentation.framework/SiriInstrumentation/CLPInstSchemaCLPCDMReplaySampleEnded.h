@class NSArray, NSData;

@interface CLPInstSchemaCLPCDMReplaySampleEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isReplaySuccessful : 1; } _has;
}

@property (nonatomic) BOOL isReplaySuccessful;
@property (nonatomic) BOOL hasIsReplaySuccessful;
@property (copy, nonatomic) NSArray *comparatorResults;
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
- (void)addComparatorResults:(id)a0;
- (void)clearComparatorResults;
- (id)comparatorResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)comparatorResultsCount;
- (void)deleteComparatorResults;
- (void)deleteIsReplaySuccessful;

@end
