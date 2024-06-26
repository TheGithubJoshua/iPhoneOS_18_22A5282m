@class NSString;

@interface BMMLSEVirtualFeatureStoreFeatureFeatureValue : BMEventBase <BMStoreData>

@property (readonly, nonatomic) unsigned int intValue;
@property (nonatomic) BOOL hasIntValue;
@property (readonly, nonatomic) double doubleValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL boolValue;
@property (nonatomic) BOOL hasBoolValue;
@property (readonly, nonatomic) int timeBucketValue;
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
- (id)initWithIntValue:(id)a0 doubleValue:(id)a1 stringValue:(id)a2 boolValue:(id)a3 timeBucketValue:(int)a4;

@end
