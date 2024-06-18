@class NSArray, NSString, _EXExtensionInstanceIdentifier, _EXExtensionIdentity;

@interface _EXLaunchConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) _EXExtensionIdentity *extensionIdentity;
@property (retain) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (copy) NSArray *preferredLanguages;
@property (copy) NSString *sandboxProfileName;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithExtensionIdentity:(id)a0;
- (BOOL)isLaunchConfigurationEqual:(id)a0;

@end
