@class NSObject;
@protocol OS_xpc_object;

@interface BYXPCActivity : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *underlyingActivity;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity;
@property (copy, nonatomic) NSObject<OS_xpc_object> *criteria;

+ (id)activityWithXPCActivity:(id)a0;

- (BOOL)shouldDefer;
- (BOOL)setState:(long long)a0;
- (long long)state;
- (void).cxx_destruct;
- (BOOL)setCompletionStatus:(long long)a0;

@end
