@interface CKDMMCSPackageSignatureGenerator : NSObject

@property (nonatomic) void *generator;
@property (nonatomic, getter=isValid) BOOL valid;

- (id)init;
- (void)updateWithData:(id)a0;
- (void)dealloc;
- (id)dataByFinishingSignature;
- (char *)_finishGenerator;

@end
