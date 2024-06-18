@interface UMLog : NSObject

@property (nonatomic) unsigned long long type;

+ (id)debug;
+ (id)fault;
+ (id)info;
+ (id)error;
+ (id)standard;

- (void)logPrivateFormat:(id)a0;
- (void)logMessage:(id)a0;
- (void)logPublicFormat:(id)a0;

@end
