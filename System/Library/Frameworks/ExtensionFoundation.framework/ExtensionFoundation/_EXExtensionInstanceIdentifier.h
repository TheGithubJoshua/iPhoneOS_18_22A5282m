@class NSUUID;

@interface _EXExtensionInstanceIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly) BOOL isDefault;

+ (id)defaultInstanceIdentifier;

- (id)initWithCoder:(id)a0;
- (BOOL)isDefault;
- (id)init;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualInstanceIdentifier:(id)a0;

@end
