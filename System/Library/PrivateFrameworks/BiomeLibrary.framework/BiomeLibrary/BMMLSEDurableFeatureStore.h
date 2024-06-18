@class NSString, BMMLSEDurableFeatureStoreFeatureValue;

@interface BMMLSEDurableFeatureStore : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int featureEntryType;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) int featureName;
@property (readonly, nonatomic) BMMLSEDurableFeatureStoreFeatureValue *featureValue;
@property (readonly, nonatomic) unsigned int featureVersion;
@property (nonatomic) BOOL hasFeatureVersion;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFeatureEntryType:(int)a0 itemIdentifier:(id)a1 featureName:(int)a2 featureValue:(id)a3 featureVersion:(id)a4;

@end