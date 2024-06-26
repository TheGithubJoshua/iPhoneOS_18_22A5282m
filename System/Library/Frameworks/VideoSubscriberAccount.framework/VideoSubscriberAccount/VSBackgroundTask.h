@class NSString, RBSAssertion;
@protocol VSBackgroundTaskDelegate;

@interface VSBackgroundTask : NSObject

@property (retain, nonatomic) RBSAssertion *assertion;
@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<VSBackgroundTaskDelegate> delegate;

- (void)end;
- (id)init;
- (BOOL)begin;
- (void).cxx_destruct;

@end
