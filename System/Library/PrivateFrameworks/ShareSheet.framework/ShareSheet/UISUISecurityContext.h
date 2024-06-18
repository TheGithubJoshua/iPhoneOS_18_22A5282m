@class NSArray, NSMutableArray;

@interface UISUISecurityContext : NSObject <NSSecureCoding> {
    long long _activationCount;
    NSMutableArray *_URLsBeingAccessed;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *securityScopedResources;
@property (readonly, nonatomic) BOOL isActive;

- (id)initWithCoder:(id)a0;
- (void)activate;
- (void)deactivate;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isActive;
- (id)accessibleURLs;
- (id)initWithSecurityScopedResources:(id)a0;
- (id)securityScopedResourcesMatchingPredicate:(id /* block */)a0;

@end
