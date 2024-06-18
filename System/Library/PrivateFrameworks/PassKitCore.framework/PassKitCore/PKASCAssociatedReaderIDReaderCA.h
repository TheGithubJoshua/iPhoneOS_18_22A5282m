@class NSData;

@interface PKASCAssociatedReaderIDReaderCA : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSData *attestation;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToASCAssociatedReaderIDReaderCA:(id)a0;

@end
