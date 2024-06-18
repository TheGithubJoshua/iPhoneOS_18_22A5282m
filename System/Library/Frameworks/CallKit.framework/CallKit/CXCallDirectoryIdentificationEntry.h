@class NSString;

@interface CXCallDirectoryIdentificationEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *extensionIdentifier;
@property (copy, nonatomic) NSString *localizedExtensionName;
@property (copy, nonatomic) NSString *localizedExtensionContainingAppName;
@property (copy, nonatomic) NSString *localizedLabel;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
