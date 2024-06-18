@interface PURemotePasscodePolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isModificationAllowed) BOOL modificationAllowed;
@property (nonatomic) unsigned long long passcodeMinimumLength;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
