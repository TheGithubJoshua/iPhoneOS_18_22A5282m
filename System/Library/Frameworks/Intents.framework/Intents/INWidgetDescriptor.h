@class NSString;

@interface INWidgetDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *intentClassName;
@property (readonly, nonatomic) long long preferredSizeClass;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;

- (void).cxx_destruct;
- (id)description;
- (BOOL)supportsIntent:(id)a0;
- (id)_extensionRecordWithError:(id *)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 intentClassName:(id)a2 preferredSizeClass:(long long)a3;

@end
