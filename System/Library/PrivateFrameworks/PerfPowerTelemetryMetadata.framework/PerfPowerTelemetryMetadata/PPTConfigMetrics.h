@class NSString;

@interface PPTConfigMetrics : NSObject <PPTMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configMetrics;
+ (id)allDeclMetrics;
+ (id)subsystem;


@end
