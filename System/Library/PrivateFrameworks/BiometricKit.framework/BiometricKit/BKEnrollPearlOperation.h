@class BKIdentity;
@protocol BKEnrollPearlOperationDelegate;

@interface BKEnrollPearlOperation : BKEnrollOperation

@property (weak, nonatomic) id<BKEnrollPearlOperationDelegate> delegate;
@property (nonatomic) long long enrollmentType;
@property (nonatomic) BOOL clientToComplete;
@property (retain, nonatomic) BKIdentity *augmentedIdentity;
@property (nonatomic) long long periocularGlassesRequirement;

- (id)initWithDevice:(id)a0;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (BOOL)startWithError:(id *)a0;
- (BOOL)suspendWithError:(id *)a0;
- (id)optionsDictionaryWithError:(id *)a0;
- (void)enrollFeedback:(id)a0 client:(unsigned long long)a1;
- (BOOL)resumeWithError:(id *)a0;
- (void)enrollUpdate:(id)a0 client:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)completeWithError:(id *)a0;
- (id)enrollResultInfoWithServerIdentity:(id)a0 details:(id)a1;

@end
