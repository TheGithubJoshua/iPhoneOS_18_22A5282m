@interface W5WiFiChannel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long channel;
@property (readonly, nonatomic) unsigned int flags;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)isEqualToChannel:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithChannel:(long long)a0 flags:(unsigned int)a1;

@end
