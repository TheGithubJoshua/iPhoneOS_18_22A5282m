@interface ATXAppLaunchDuetDataProvider : ATXDuetDataProvider

+ (long long)supportedCoreDuetStream;
+ (Class)supportedDuetEventClass;
+ (id)biomePublisher:(id)a0 andEndDate:(id)a1 isIncluded:(id /* block */)a2;

@end
