@class NSString;

@interface RBSOSServiceProcessIdentity : RBSProcessIdentity {
    NSString *_jobLabel;
    unsigned char _type;
}

- (BOOL)isDaemon;
- (id)_initUnknownOSServiceWithJobLabel:(id)a0;
- (id)consistentLaunchdJobLabel;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)angelJobLabel;
- (unsigned char)osServiceType;
- (BOOL)_matchesIdentity:(id)a0;
- (id)_initServiceWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2 type:(unsigned char)a3;
- (id)_initAngelWithJobLabel:(id)a0;
- (BOOL)hasConsistentLaunchdJob;
- (BOOL)isAngel;
- (BOOL)isAnonymous;
- (id)copyWithAuid:(unsigned int)a0;
- (void).cxx_destruct;
- (BOOL)supportsLaunchingDirectly;
- (id)debugDescription;
- (id)_initDaemonWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (void)setOsServiceType:(unsigned char)a0;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (id)daemonJobLabel;

@end
