@class NSString;

@interface PPTLocaleMetrics : NSObject <PPTMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allDeclMetrics;
+ (id)subsystem;
+ (id)timezoneMetrics;
+ (id)timezoneLoggingCadence;


@end
