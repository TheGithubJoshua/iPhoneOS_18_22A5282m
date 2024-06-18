@class NSSet, NSUUID, NSString;

@interface PRUIModalEntryPointPosterSelection : NSObject <PRUIModalEntryPoint>

@property (readonly, copy, nonatomic) NSSet *allowedConfigurationUUIDs;
@property (readonly, nonatomic) NSUUID *selectedConfigurationUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithAllowedConfigurationUUIDs:(id)a0;
- (id)initWithAllowedConfigurationUUIDs:(id)a0 selectedConfigurationUUID:(id)a1;

@end