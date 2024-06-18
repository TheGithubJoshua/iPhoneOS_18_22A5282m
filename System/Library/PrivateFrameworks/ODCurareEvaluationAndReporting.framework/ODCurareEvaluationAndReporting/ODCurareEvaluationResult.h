@class NSString, NSDictionary;

@interface ODCurareEvaluationResult : NSObject

@property (retain, nonatomic) NSString *evaluationName;
@property (nonatomic) long long numberOfSamplesPositive;
@property (nonatomic) long long numberOfSamplesTotal;
@property (retain, nonatomic) NSDictionary *metadata;

- (void).cxx_destruct;
- (id)description;
- (id)initWithEvaluationName:(id)a0 numberOfSamplesPositive:(long long)a1 numberOfSamplesTotal:(long long)a2;

@end
