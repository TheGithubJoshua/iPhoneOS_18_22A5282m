@class NSArray, RTVisitHyperParameter;

@interface RTVisitDecoder : NSObject {
    NSArray *_beam;
}

@property (readonly, nonatomic) RTVisitHyperParameter *hyperParameter;

- (id)init;
- (id)initWithHyperParameter:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)createSuccessor:(id)a0 probabilities:(const float *)a1 firstTimeStepDate:(id)a2 currentDate:(id)a3;
- (id)decodeWithProbabilities:(const float *)a0 batchSize:(unsigned long long)a1 firstTimeStepDate:(id)a2;
- (void)updateSuccessor:(id)a0 newNode:(id)a1;

@end
