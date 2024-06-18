@class FPItemID;

@interface FPExtensionEnumerationSettings : FPEnumerationSettings

@property (copy, nonatomic) FPItemID *enumeratedItemID;
@property (nonatomic, getter=isPresenterEnumeration) BOOL presenterEnumeration;
@property (nonatomic) BOOL wantsDirectExtensionEnumeration;
@property (nonatomic) BOOL requireSandboxAccess;
@property (nonatomic) BOOL createAppLibraries;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
