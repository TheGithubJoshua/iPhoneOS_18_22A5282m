@class NSArray, NSUUID;

@interface DMFiCloudPolicyMonitor : NSObject

@property (readonly, copy, nonatomic) NSArray *policyTypes;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (nonatomic) long long iCloudLogoutPolicy;

+ (id)iCloudLogoutPolicyForPoliciesByType:(id)a0;
+ (id)new;

- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (id)init;
- (id)requestiCloudLogoutPolicyWithError:(id *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestiCloudLogoutPolicyWithCompletionHandler:(id /* block */)a0;

@end
