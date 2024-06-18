@class NSMutableArray, NFMutexLock;

@interface FCMultiStepFetchOperation : FCFetchOperation

@property (retain, nonatomic) NSMutableArray *steps;
@property (retain, nonatomic) NSMutableArray *stepResults;
@property (retain, nonatomic) NFMutexLock *accessLock;

- (void)addNonCriticalFetchStep:(SEL)a0;
- (void)_performNextStep;
- (id)completeFetchOperation;
- (id)init;
- (void)performOperation;
- (void)addFetchStep:(SEL)a0;
- (void).cxx_destruct;
- (void)customizeChildOperation:(id)a0 forFetchStep:(SEL)a1;

@end
