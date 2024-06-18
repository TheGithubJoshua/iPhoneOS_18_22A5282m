@class NSMutableArray;

@interface SHSignatureBuffer : NSObject

@property (nonatomic) double maximumSignatureDuration;
@property (nonatomic) double minimumSignatureDuration;
@property (nonatomic) double bufferMaxSize;
@property (readonly, nonatomic) NSMutableArray *slots;
@property (readonly, nonatomic) double currentSignatureDuration;

- (void).cxx_destruct;
- (double)duration;
- (void)reset;
- (void)discardSignatureWithID:(id)a0;
- (void)flow:(id)a0 time:(id)a1;
- (id)generateCurrentSignature;
- (id)initWithMinimumSignatureDuration:(double)a0 maximumSignatureDuration:(double)a1 bufferDuration:(double)a2;

@end
