@class NSObject;
@protocol OS_dispatch_workloop;

@interface RBSWorkloop : NSObject {
    NSObject<OS_dispatch_workloop> *_calloutWorkloop;
    NSObject<OS_dispatch_workloop> *_backgroundWorkloop;
    NSObject<OS_dispatch_workloop> *_syncingWorkloop;
}

+ (void)performBackgroundWork:(id /* block */)a0;
+ (id)createBackgroundQueue:(id)a0;
+ (id)sharedSyncingWorkloop;
+ (void)performBackgroundWorkWithServiceClass:(unsigned int)a0 block:(id /* block */)a1;
+ (id)sharedBackgroundWorkloop;
+ (id)createSyncingQueue:(id)a0;

- (void).cxx_destruct;

@end
