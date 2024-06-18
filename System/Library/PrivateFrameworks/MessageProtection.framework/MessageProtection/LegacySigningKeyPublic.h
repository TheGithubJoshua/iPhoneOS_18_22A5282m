@interface LegacySigningKeyPublic : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (void).cxx_destruct;
- (BOOL)verifySignature:(id)a0 ofData:(id)a1;

@end