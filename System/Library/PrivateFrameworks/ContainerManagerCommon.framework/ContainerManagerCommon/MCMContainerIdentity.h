@interface MCMContainerIdentity : MCMContainerIdentityMinimal

@property (readonly, nonatomic) BOOL transient;

+ (id)containerIdentityWithUserIdentity:(id)a0 identifier:(id)a1 containerClass:(unsigned long long)a2 platform:(unsigned int)a3 transient:(BOOL)a4 error:(unsigned long long *)a5;
+ (id)containerIdentityWithIdentifier:(id)a0 containerClass:(unsigned long long)a1 platform:(unsigned int)a2 error:(unsigned long long *)a3;
+ (id)containerIdentityWithMinimalContainerIdentity:(id)a0 transient:(BOOL)a1;
+ (id)containerIdentityFromPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
+ (id)containerIdentityWithUserIdentity:(id)a0 identifier:(id)a1 containerClass:(unsigned long long)a2 platform:(unsigned int)a3 error:(unsigned long long *)a4;

- (id)containerIdentity;
- (id)init;
- (id)plist;
- (unsigned long long)hash;
- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToContainerIdentity:(id)a0;
- (id)nontransientContainerIdentity;
- (id)initWithUserIdentity:(id)a0 identifier:(id)a1 containerClass:(unsigned long long)a2 platform:(unsigned int)a3 transient:(BOOL)a4 error:(unsigned long long *)a5;
- (id)initWithVersion1PlistDictionary:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
- (id)identityByChangingTransient:(BOOL)a0;
- (id)transientContainerIdentity;

@end
