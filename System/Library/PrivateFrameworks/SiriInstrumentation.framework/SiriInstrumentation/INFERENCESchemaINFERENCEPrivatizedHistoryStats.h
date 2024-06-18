@class NSArray, NSData;

@interface INFERENCESchemaINFERENCEPrivatizedHistoryStats : SISchemaInstrumentationMessage {
    struct { unsigned char recency : 1; } _has;
}

@property (nonatomic) unsigned int recency;
@property (nonatomic) BOOL hasRecency;
@property (copy, nonatomic) NSArray *frequencies;
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
- (void)addFrequencies:(unsigned int)a0;
- (void)clearFrequencies;
- (void)deleteFrequencies;
- (void)deleteRecency;
- (unsigned int)frequenciesAtIndex:(unsigned long long)a0;
- (unsigned long long)frequenciesCount;

@end
