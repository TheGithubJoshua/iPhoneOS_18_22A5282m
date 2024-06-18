@class NSLock, PXRunNode;

@interface PXRunNodeOperation : NSOperation

@property (readonly, nonatomic) NSLock *_stateLock;
@property (readonly, nonatomic) PXRunNode *runNode;
@property (readonly) unsigned long long state;

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsReady;

- (BOOL)isAsynchronous;
- (id)init;
- (BOOL)isReady;
- (void)start;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (BOOL)_transitionToState:(unsigned long long)a0;
- (BOOL)isFinished;
- (BOOL)cancelIfAble;
- (BOOL)completeIfAble;
- (id)initWithRunNode:(id)a0;

@end
