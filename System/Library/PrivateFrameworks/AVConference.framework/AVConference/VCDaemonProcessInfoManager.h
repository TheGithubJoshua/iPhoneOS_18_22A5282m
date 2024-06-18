@class NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonProcessInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

+ (id)copyProcessInfo;
+ (id)sharedManager;

- (void)deregisterBlocksForService;
- (id)init;
- (void)registerBlocksForService;
- (id)copyProcessInfo;
- (oneway void)release;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)dealloc;

@end
