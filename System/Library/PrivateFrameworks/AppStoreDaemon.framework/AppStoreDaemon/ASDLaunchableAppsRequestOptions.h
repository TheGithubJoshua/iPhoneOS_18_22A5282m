@class NSArray;

@interface ASDLaunchableAppsRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSArray *bundleIDs;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleIDs:(id)a0;

@end
