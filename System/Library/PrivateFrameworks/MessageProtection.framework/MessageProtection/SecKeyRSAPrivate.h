@interface SecKeyRSAPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)publicKey;
- (id)init;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)decryptData:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (void).cxx_destruct;

@end
