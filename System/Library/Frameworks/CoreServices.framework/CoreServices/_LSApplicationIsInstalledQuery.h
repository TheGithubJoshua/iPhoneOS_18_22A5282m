@class NSString;

@interface _LSApplicationIsInstalledQuery : _LSQuery

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)queryWithBundleIdentifier:(id)a0;

- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
