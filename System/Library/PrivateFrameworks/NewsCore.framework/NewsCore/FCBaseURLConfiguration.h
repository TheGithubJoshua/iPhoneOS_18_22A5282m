@protocol FCCoreConfiguration;

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) id<FCCoreConfiguration> coreConfiguration;

+ (id)searchBaseURLForConfiguration:(id)a0;
+ (id)overrideCAPIURLString;
+ (BOOL)hasOverrideCAPIURL;
+ (id)authTokenBaseURLForConfiguration:(id)a0;
+ (id)notificationsBaseURLForConfiguration:(id)a0;
+ (id)sportsDataVisualizationBaseURLForConfiguration:(id)a0;
+ (id)CAPIBaseURLForConfiguration:(id)a0;
+ (id)fairPlayBaseURLForConfiguration:(id)a0;
+ (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration:(id)a0;
+ (id)newsletterBaseURLForConfiguration:(id)a0;
+ (id)appAnalyticsSportsEventsBaseURLForConfiguration:(id)a0;

- (id)appAnalyticsSportsEventsBaseURLForConfiguration;
- (id)initWithCoreConfiguration:(id)a0;
- (id)notificationsBaseURL;
- (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration;
- (id)fairPlayBaseURL;
- (id)searchBaseURLForConfiguration;
- (id)baseURLString:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (void).cxx_destruct;
- (id)CAPIBaseURL;
- (id)baseURL:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)newsletterBaseURL;
- (id)sportsDataVisualizationBaseURLForConfiguration;
- (id)authTokenBaseURLForConfiguration;

@end
