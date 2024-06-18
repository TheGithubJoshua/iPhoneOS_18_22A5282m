@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *type;

- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0;
- (id)preferedResourceName;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (BOOL)allowLocalizedIcon;
- (id)resourceDirectoryURL;

@end
