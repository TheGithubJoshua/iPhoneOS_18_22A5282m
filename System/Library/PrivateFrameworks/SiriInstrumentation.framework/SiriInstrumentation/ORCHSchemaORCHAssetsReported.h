@class NSArray, NSData;

@interface ORCHSchemaORCHAssetsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)assetsAtIndex:(unsigned long long)a0;
- (unsigned long long)assetsCount;
- (id)dictionaryRepresentation;
- (void)addAssets:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearAssets;
- (id)suppressMessageUnderConditions;
- (void)deleteAssets;

@end
