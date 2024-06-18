@class NSMutableDictionary;

@interface PPTMetadataStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *metricsByID;

+ (id)plistMetricsFromDir:(id)a0;
+ (id)sharedStore;

- (id)init;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2;
- (void)addMetricsToCache:(id)a0;
- (void)cacheFrameworkMetrics;
- (id)getAllSubsystem;
- (void)loadMetricsForSubsystem:(id)a0;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2 version:(double)a3;
- (void).cxx_destruct;
- (id)getAllFrameworkSubsystem;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1;
- (void)cachePlistMetrics;
- (id)getMetadataForSubsystem:(id)a0;
- (void)buildDeviceMetadata;

@end
