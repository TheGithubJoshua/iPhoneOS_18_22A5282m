@class NSString, RBSAssertion;

@interface _CNRunningBoardInhibitor : CNInhibitor

@property (readonly, copy, nonatomic) NSString *explanation;
@property (retain, nonatomic) RBSAssertion *assertion;

+ (id)os_log;
+ (id)runningBoardTarget;

- (id)initWithExplanation:(id)a0;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (id)description;

@end
