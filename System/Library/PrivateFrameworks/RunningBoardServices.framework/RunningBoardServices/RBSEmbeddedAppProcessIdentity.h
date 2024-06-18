@class NSString;

@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
}

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isApplication;
- (BOOL)_matchesIdentity:(id)a0;
- (id)encodeForJob;
- (unsigned char)defaultManageFlags;
- (BOOL)isEmbeddedApplication;
- (BOOL)isAnonymous;
- (id)copyWithAuid:(unsigned int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)supportsLaunchingDirectly;
- (id)embeddedApplicationIdentifier;
- (id)debugDescription;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;

@end
