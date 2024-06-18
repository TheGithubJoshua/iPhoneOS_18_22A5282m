@interface FAURLConfiguration : NSObject <FAURLProvider>

- (void)URLForEndpoint:(id)a0 withCompletion:(id /* block */)a1;
- (id)groupKitConfiguration;
- (void)fetchAAURLConfigurationWithCompletion:(id /* block */)a0;
- (id)URLForEndpoint:(id)a0;
- (id)groupKitMetricsRateLimit;

@end
