@class NSUUID, NSData;

@interface DAKeyBindingAttestationRequestData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sharingSessionIdentifier;
@property (readonly, nonatomic) NSData *subCaAttestation;
@property (readonly, nonatomic) NSData *casd;
@property (readonly, nonatomic) NSData *rsaCertData;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSharingSessionIdentifier:(id)a0 subCaAttestation:(id)a1 casd:(id)a2 rsaCertData:(id)a3;

@end
