@class NSString;

@interface RBSEmbeddedAppWithPersonaProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
    NSString *_personaString;
}

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isApplication;
- (id)_initEmbeddedApp:(id)a0 personaString:(id)a1;
- (BOOL)_matchesIdentity:(id)a0;
- (id)encodeForJob;
- (unsigned char)defaultManageFlags;
- (id)_initEmbeddedAppWithAppInfoProvider:(id)a0;
- (BOOL)isEmbeddedApplication;
- (id)personaString;
- (BOOL)isAnonymous;
- (id)copyWithAuid:(unsigned int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)supportsLaunchingDirectly;
- (id)embeddedApplicationIdentifier;
- (id)debugDescription;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;

@end
