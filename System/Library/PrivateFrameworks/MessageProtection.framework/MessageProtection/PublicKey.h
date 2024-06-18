@protocol P256PublicKeyProtocol;

@interface PublicKey : NSObject

@property (retain) id<P256PublicKeyProtocol> key;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (id)initWithKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
