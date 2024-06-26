@interface CDPCombinedWalrusStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long octagonWalrusStatus;
@property (nonatomic) unsigned long long pcsWalrusStatus;
@property (nonatomic) unsigned long long escrowWalrusStatus;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
