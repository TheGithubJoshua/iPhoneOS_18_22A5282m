@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRUtteranceInfo : SISchemaInstrumentationMessage {
    struct { unsigned char startTimeInNs : 1; unsigned char endTimeInNs : 1; } _has;
}

@property (copy, nonatomic) NSArray *results;
@property (nonatomic) unsigned long long startTimeInNs;
@property (nonatomic) BOOL hasStartTimeInNs;
@property (nonatomic) unsigned long long endTimeInNs;
@property (nonatomic) BOOL hasEndTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (void)clearResults;
- (unsigned long long)resultsCount;
- (void)addResults:(id)a0;
- (id)resultsAtIndex:(unsigned long long)a0;
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
- (void)deleteEndTimeInNs;
- (void)deleteResults;
- (void)deleteStartTimeInNs;

@end
