@class MLModel, NSString;

@interface MLWrappedModel : MLModel

@property (retain) MLModel *innerModel;
@property (retain, nonatomic) NSString *reason;

- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)predictionsFromBatch:(id)a0 error:(id *)a1;
- (void)clearInnerModelWithReason:(id)a0;
- (id)initWithInnerModel:(id)a0;

@end