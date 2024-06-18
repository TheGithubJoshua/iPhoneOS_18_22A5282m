@class NSData;

@interface STSDiffieHellmanParameter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long publicKeyGroup;
@property (retain, nonatomic) NSData *publicKey;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)asData;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithKeyGroup:(unsigned long long)a0 key:(id)a1;

@end
