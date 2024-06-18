@interface CATTaskRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL handlesNotifications;

+ (Class)allowlistedClassForResultObject;
+ (Class)whitelistedClassForResultObject;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;

@end
