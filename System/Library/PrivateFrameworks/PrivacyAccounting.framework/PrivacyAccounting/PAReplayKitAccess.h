@class PAApplication;

@interface PAReplayKitAccess : PAAccess

@property (readonly, nonatomic) PAApplication *broadcaster;

+ (BOOL)supportsSecureCoding;
+ (id)accessWithAccessor:(id)a0 fromBroadcaster:(id)a1;
+ (id)accessWithAccessor:(id)a0;
+ (id)eventStreamIdentifier;

- (id)JSONObject;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)copyWithNewBroadcaster:(id)a0;
- (id)initWithAccessor:(id)a0 fromBroadcaster:(id)a1;
- (id)initWithAccessor:(id)a0 broadcaster:(id)a1 identifier:(id)a2 kind:(long long)a3;
- (id)proto;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAccessor:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToAccess:(id)a0 withOptions:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)category;
- (unsigned long long)hashWithOptions:(unsigned long long)a0;

@end
