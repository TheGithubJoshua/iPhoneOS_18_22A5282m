@interface ATXHistogramBundleIdTable : ATXHistogramTable <ATXBundleIdRemovableProtocol>

+ (id)sharedInstance;
+ (void)useTemporarySharedInstance:(id)a0;
+ (void)stopUsingTemporarySharedInstance;

- (id)permutationFrom:(id)a0;
- (void)removeBundleIds:(id)a0;
- (id)initWithDatastore:(id)a0;

@end
