@class NSObject;
@protocol OS_dispatch_source;

@interface ACCPlatformProcessAssertion : RBSAssertion

@property (nonatomic) unsigned long long startTime;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *processAssertionTimer;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)a0 processAssertionName:(id)a1 rbsAttributes:(id)a2 pid:(int)a3;

@end
