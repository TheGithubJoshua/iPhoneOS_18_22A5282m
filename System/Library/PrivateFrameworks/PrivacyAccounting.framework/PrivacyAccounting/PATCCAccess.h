@class NSString;

@interface PATCCAccess : PAAccess

@property (readonly, nonatomic) NSString *tccService;

+ (BOOL)supportsSecureCoding;
+ (id)accessWithAuditToken:(struct { unsigned int x0[8]; })a0 forService:(id)a1;
+ (id)accessWithAuthorization:(id)a0;
+ (id)eventStreamIdentifier;
+ (id)accessWithAccessor:(id)a0 forService:(id)a1;
+ (id)accessWithInsecureProcessIdentifier:(int)a0 forService:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)descriptionForCategory;
- (id)initWithInsecureProcessIdentifier:(int)a0 forService:(id)a1;
- (id)proto;
- (id)initWithAuthorization:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 forService:(id)a1;
- (id)initWithAccessor:(id)a0 identifier:(id)a1 kind:(long long)a2 forService:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccessor:(id)a0 forService:(id)a1;
- (id)description;
- (BOOL)isEqualToAccess:(id)a0 withOptions:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)category;
- (unsigned long long)hashWithOptions:(unsigned long long)a0;
- (id)initWithAccessor:(id)a0 forService:(id)a1 assetIdentifiers:(id)a2;

@end
