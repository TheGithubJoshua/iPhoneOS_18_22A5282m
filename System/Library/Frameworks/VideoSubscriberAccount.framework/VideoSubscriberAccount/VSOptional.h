@interface VSOptional : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id object;

+ (id)decodableClasses;
+ (id)optionalWithObject:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithObject:(id)a0;
- (id)init;
- (void)conditionallyUnwrapObject:(id /* block */)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)forceUnwrapObject;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)conditionallyUnwrapObject:(id /* block */)a0 otherwise:(id /* block */)a1;
- (id)unwrapWithFallback:(id)a0;

@end
