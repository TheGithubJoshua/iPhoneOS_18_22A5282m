@class NSString;

@interface IMSandboxedResource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long sandboxExtensionHandle;
@property (retain, nonatomic) id resource;
@property (retain, nonatomic) NSString *sandboxExtension;

+ (Class)resourceClass;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (char *)_sandboxExtensionForPID:(int)a0;
- (BOOL)accessResourceByConsumingSandboxExtensionWithBlock:(id /* block */)a0;
- (void)authorizeForPID:(int)a0;

@end
