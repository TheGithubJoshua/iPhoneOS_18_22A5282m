@interface ANSTISPAlgorithmResult : ANSTResult

@property (readonly, nonatomic) float smudgeConfidence;

+ (id)new;

- (id)init;
- (id)_init;
- (id)initWithSmudgeConfidence:(float)a0;

@end
