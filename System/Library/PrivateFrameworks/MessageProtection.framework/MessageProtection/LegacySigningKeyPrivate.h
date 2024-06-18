@interface LegacySigningKeyPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)publicKey;
- (id)init;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (id)signData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
