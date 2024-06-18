@class NSString, BKSProcessAssertion;

@interface CPProcessAssertion : NSObject

@property (retain, nonatomic) BKSProcessAssertion *processAssertion;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (id)processAssertionNameForBundleIdentifier:(id)a0;
+ (id)processAssertionWithBundleIdentifier:(id)a0;

- (unsigned long long)hash;
- (id)name;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void)acquireWithCompletionHandler:(id /* block */)a0;

@end
