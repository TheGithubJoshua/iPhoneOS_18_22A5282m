@class NSString;

@interface AVExecutionEnvironment : NSObject

@property (readonly) NSString *platformIdentifier;

+ (id)sharedExecutionEnvironment;
+ (void)initialize;
+ (id)currentPlatformIdentifier;
+ (void)resetPlatformIdentifierForQueue:(id)a0;
+ (void)setPlatformIdentifier:(id)a0 forQueue:(id)a1;

@end
