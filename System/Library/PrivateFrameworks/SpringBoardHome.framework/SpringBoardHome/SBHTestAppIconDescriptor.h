@class NSString;

@interface SBHTestAppIconDescriptor : NSObject <SBHTestIconDescriptor>

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned long long)sbh_iconDescriptorType;
- (id)initWithAppIconBundleIdentifier:(id)a0;
- (BOOL)sbh_isValidWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
