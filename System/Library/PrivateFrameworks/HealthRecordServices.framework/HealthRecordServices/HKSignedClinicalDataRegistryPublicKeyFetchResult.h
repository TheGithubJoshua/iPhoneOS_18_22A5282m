@class NSString, NSData;

@interface HKSignedClinicalDataRegistryPublicKeyFetchResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long outcome;
@property (readonly, copy, nonatomic) NSString *kid;
@property (readonly, copy, nonatomic) NSData *jwkData;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeyID:(id)a0 outcome:(unsigned long long)a1 jwkData:(id)a2;

@end
