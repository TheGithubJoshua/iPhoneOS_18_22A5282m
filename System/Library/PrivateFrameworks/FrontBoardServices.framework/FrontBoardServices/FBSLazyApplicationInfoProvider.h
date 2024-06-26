@class NSString;

@interface FBSLazyApplicationInfoProvider : NSObject <FBSApplicationInfoProvider>

@property (nonatomic) Class applicationInfoSubclass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)applicationInfoForAuditToken:(id)a0;
- (id)applicationInfoForBundleIdentifier:(id)a0;

@end
