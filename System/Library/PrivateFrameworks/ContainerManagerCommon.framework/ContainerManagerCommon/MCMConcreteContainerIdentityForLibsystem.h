@class NSString;

@interface MCMConcreteContainerIdentityForLibsystem : MCMConcreteContainerIdentity

@property (readonly, nonatomic) NSString *containerPathIdentifier;
@property (readonly, nonatomic) BOOL existed;

+ (id)containerIdentityWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerClass:(unsigned long long)a3 platform:(unsigned int)a4 containerPathIdentifier:(id)a5 existed:(BOOL)a6 transient:(BOOL)a7 error:(unsigned long long *)a8;

- (id)transientConcreteContainerIdentityForLibsystem;
- (id)init;
- (id)identityByChangingContainerPathIdentifier:(id)a0;
- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (id)initWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerClass:(unsigned long long)a3 platform:(unsigned int)a4 containerPathIdentifier:(id)a5 existed:(BOOL)a6 transient:(BOOL)a7 error:(unsigned long long *)a8;
- (id)identityByChangingUUID:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)nontransientConcreteContainerIdentityForLibsystem;
- (id)debugDescription;
- (struct container_object_s { } *)createLibsystemContainerWithError:(unsigned long long *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nontransientContainerIdentity;
- (id)identityByChangingTransient:(BOOL)a0;
- (id)transientContainerIdentity;

@end
