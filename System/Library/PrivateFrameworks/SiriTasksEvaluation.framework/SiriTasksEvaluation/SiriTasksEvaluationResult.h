@class NSString;

@interface SiriTasksEvaluationResult : NSObject

@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) BOOL isEffectiveTask;
@property (nonatomic) BOOL isSuccessfulTask;

- (id)initWithDictionary:(id)a0;
- (id)initWithJSONData:(id)a0;
- (void).cxx_destruct;
- (id)toJSON;
- (id)initWithTaskId:(id)a0 isEffectiveTask:(BOOL)a1 isSuccessfulTask:(BOOL)a2;

@end
