@interface TransparencySettings : NSObject

+ (BOOL)allowsInternalSecurityPolicies;
+ (double)defaultQueryCacheTimeout;
+ (id)getOverride:(id)a0;
+ (BOOL)getBool:(id)a0;
+ (double)backgroundNetworkTimeout;
+ (double)defaultNetworkTimeout;
+ (id)getIMEnvironmentName;
+ (double)uiBlockingNetworkTimeout;
+ (unsigned long long)getEnvironment;
+ (BOOL)isAccountsInQA;
+ (id)deviceUserAgent;
+ (double)defaultFollowupTicketLifetime;

@end
