@class NSString, NSDictionary, NSData, NSURL;

@interface HDHRSSignedClinicalDataProcessingContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *rawData;
@property (readonly, nonatomic) long long sourceType;
@property (readonly, copy, nonatomic) NSURL *sourceURL;
@property (readonly, copy, nonatomic) NSString *issuerIdentifier;
@property (readonly, copy, nonatomic) NSString *signingKeyID;
@property (readonly, copy, nonatomic) NSData *JWKSData;
@property (readonly, nonatomic) unsigned long long JWKSOutcome;
@property (readonly, copy, nonatomic) NSDictionary *metadata;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRawData:(id)a0 sourceType:(long long)a1 sourceURL:(id)a2 issuerIdentifier:(id)a3 signingKeyID:(id)a4 JWKSData:(id)a5 JWKSOutcome:(unsigned long long)a6 metadata:(id)a7;

@end
