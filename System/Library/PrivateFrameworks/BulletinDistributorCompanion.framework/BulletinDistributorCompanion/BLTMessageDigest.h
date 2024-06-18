@class NSData;

@interface BLTMessageDigest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *messageDigest;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMessage:(id)a0;
- (BOOL)isEqualToMessageDigest:(id)a0;

@end
