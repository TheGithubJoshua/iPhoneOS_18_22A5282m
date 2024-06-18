@class NSString, NSArray, NSData;

@interface GRRSchemaGRRHypothesisRankingStarted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (copy, nonatomic) NSArray *featureFlags;
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
- (void)addFeatureFlags:(id)a0;
- (void)clearFeatureFlags;
- (void)deleteAssetVersion;
- (void)deleteFeatureFlags;
- (id)featureFlagsAtIndex:(unsigned long long)a0;
- (unsigned long long)featureFlagsCount;

@end
