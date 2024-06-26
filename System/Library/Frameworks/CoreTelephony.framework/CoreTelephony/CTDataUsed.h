@class CTDataUsage;

@interface CTDataUsed : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CTDataUsage *native;
@property (readonly, nonatomic) CTDataUsage *proxied;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addNativeUsage:(id)a0;
- (void)addProxiedUsage:(id)a0;
- (void)addUsage:(id)a0;
- (id)initWithUsage:(id)a0 proxied:(id)a1;

@end
