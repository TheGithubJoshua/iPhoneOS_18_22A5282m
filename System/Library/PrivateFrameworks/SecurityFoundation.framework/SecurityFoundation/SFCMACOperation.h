@class SFSymmetricEncryptionOperation;

@interface SFCMACOperation : SFMessageAuthenticationCodeOperation {
    id _cmacOperationInternal;
}

@property (copy, nonatomic) SFSymmetricEncryptionOperation *encryptionOperation;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEncryptionOperation:(id)a0;

@end
