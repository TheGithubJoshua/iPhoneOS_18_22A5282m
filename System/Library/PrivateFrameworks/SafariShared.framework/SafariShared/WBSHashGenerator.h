@class NSData;

@interface WBSHashGenerator : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *key;
@property (readonly, copy, nonatomic) NSData *keyID;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_createEncryptionKeyData;
- (id)_createEncryptionKeyIDDataUsingKey:(id)a0;
- (id)generateHashStringWithComponents:(id)a0;
- (id)generateHashWithComponents:(id)a0;
- (id)initWithKey:(id)a0 keyID:(id)a1;

@end
