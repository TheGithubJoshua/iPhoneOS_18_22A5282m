@class NSString;

@interface ISBundleIdentifierIcon : ISConcreteIcon

@property (readonly) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)makeResourceProvider;
- (id)makeSymbolResourceProvider;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (double)_aspectRatio;
- (id)description;
- (id)_makeResourceProviderAllowIconResourceFallback:(BOOL)a0;

@end
