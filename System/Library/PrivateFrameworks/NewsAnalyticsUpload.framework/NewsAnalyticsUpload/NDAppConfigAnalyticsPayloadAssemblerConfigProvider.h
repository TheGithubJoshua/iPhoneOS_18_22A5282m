@protocol FCNewsAppConfigurationManager;

@interface NDAppConfigAnalyticsPayloadAssemblerConfigProvider : NSObject <NDAnalyticsPayloadAssemblerConfigProvider>

@property (retain, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;

- (id)init;
- (id)initWithAppConfigurationManager:(id)a0;
- (void)fetchConfigWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
