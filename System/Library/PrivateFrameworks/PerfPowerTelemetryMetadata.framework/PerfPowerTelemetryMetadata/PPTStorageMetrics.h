@class NSString;

@interface PPTStorageMetrics : NSObject <PPTMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configMetrics;
+ (id)configurationMetrics;
+ (id)allDeclMetrics;
+ (id)timeOffsetMetrics;
+ (id)subsystem;


@end
