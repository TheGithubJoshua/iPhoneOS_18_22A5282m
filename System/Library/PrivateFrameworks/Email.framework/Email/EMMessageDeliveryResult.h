@class NSError;

@interface EMMessageDeliveryResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;

- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0 error:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
