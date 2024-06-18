@class NSData, NSDate;

@interface IDSKTRegistrationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *ktDataForRegistration;
@property (retain, nonatomic) NSData *ktPublicAccountKey;
@property (retain, nonatomic) NSData *ktDataSignature;
@property (retain, nonatomic) NSDate *registeredTime;
@property (nonatomic) BOOL uploadedToKVS;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)dataRepresentationWithError:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (BOOL)needsKVSUpload;

@end
