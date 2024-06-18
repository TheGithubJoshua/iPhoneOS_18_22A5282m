@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;

- (BOOL)isXPCService;
- (BOOL)isExtension;
- (id)validationToken;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (id)initWithDecodeFromJob:(id)a0;
- (id)xpcServiceIdentifier;
- (id)encodeForJob;
- (unsigned char)defaultManageFlags;
- (BOOL)inheritsCoalitionBand;
- (unsigned long long)hash;
- (id)uuid;
- (BOOL)isEqualToIdentity:(id)a0;
- (BOOL)isAnonymous;
- (id)copyWithAuid:(unsigned int)a0;
- (void).cxx_destruct;
- (id)hostIdentifier;
- (BOOL)supportsLaunchingDirectly;
- (id)persona;
- (id)hostIdentity;

@end
