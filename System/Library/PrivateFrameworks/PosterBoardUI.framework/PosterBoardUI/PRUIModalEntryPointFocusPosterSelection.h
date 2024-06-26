@class NSUUID, NSString;

@interface PRUIModalEntryPointFocusPosterSelection : NSObject <PRUIModalEntryPoint>

@property (readonly, copy, nonatomic) NSUUID *activityUUID;
@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithActivityUUID:(id)a0 activityIdentifier:(id)a1;

@end
