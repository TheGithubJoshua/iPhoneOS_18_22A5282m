@class NSString, BKSProcessAssertion;

@interface _NSFileAccessAsynchronousProcessAssertion : NSObject {
    NSString *_name;
    BKSProcessAssertion *_assertion;
}

@property (readonly) int PID;

- (void)beginAssertion;
- (id)initWithPID:(int)a0 name:(id)a1;
- (void)invalidate;
- (void)dealloc;

@end
