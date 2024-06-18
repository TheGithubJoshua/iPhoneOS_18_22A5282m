@class NSString, NSDictionary;

@interface ATXCustomIntentDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *typeName;
@property (readonly, copy, nonatomic) NSDictionary *parameters;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)createIntent;
- (id)initWithTypeName:(id)a0 parameters:(id)a1;

@end
