@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MXDebugPlatform : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *sysdiagnoseBlockQueue;
@property (readonly, retain, nonatomic) NSMutableDictionary *sysdiagnoseBlockRegistry;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)executeSysdiagnoseBlocks;
- (void)installSysdiagnoseBlock:(id)a0 blockToRun:(id /* block */)a1;

@end
