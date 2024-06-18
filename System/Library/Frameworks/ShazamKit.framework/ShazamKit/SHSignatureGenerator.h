@class SHMutableSignature;

@interface SHSignatureGenerator : NSObject

@property (retain, nonatomic) SHMutableSignature *mutableSignature;

+ (void)generateSignatureFromAsset:(id)a0 completionHandler:(id /* block */)a1;

- (id)signature;
- (id)init;
- (double)maximumDuration;
- (void).cxx_destruct;
- (double)duration;
- (BOOL)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;
- (id)initSignatureRingBufferWithDuration:(double)a0;
- (id)initWithMaximumSignatureDuration:(double)a0;

@end
