@interface NFGeneralStatisticsCALogger : NSObject

+ (void)updateAnalyticsGeneralTransactionStatistics:(id)a0;
+ (void)_setupInitValuesForGeneralTransactionStatistics;
+ (void)postAnalyticsSetupEndpoints:(unsigned int)a0 totalUnknowntoSE:(unsigned int)a1;
+ (void)updateGeneralDeviceStatistic:(id)a0;
+ (void)postAnalyticsGeneralTransactionStatistics;
+ (void)postGeneralDeviceStatistics;
+ (void)_resetGeneralDeviceStatisticToDefaults;

@end
