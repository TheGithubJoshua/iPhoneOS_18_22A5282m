@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCStreamInputManager : VCObject <VCStreamInputDelegate> {
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_dispatch_queue> *_streamInputQueue;
    NSMutableDictionary *_streamInputs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)deregisterBlocksForService;
- (id)init;
- (void)registerBlocksForService;
- (oneway void)release;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)dealloc;
- (void)registerService:(char *)a0 weakSelf:(id)a1 block:(id /* block */)a2;
- (BOOL)clientProcessDiedWithXPCArguments:(id)a0 result:(id *)a1 error:(id *)a2;
- (void)didResumeStreamInput:(id)a0;
- (void)didStartStreamInput:(id)a0;
- (void)didStopStreamInput:(id)a0;
- (void)didSuspendStreamInput:(id)a0;
- (BOOL)getServerPidWithXPCArguments:(id)a0 result:(id *)a1 error:(id *)a2;
- (BOOL)initializeStreamInputWithXPCArguments:(id)a0 result:(id *)a1 error:(id *)a2;
- (id)newStreamInputID;
- (BOOL)pushSampleBufferWithXPCArguments:(id)a0 result:(id *)a1 error:(id *)a2;
- (void)registerDidClientDieBlock:(id)a0;
- (void)registerService:(char *)a0 weakSelf:(id)a1 eventLogLevel:(int)a2 block:(id /* block */)a3;
- (id)streamInputWithID:(long long)a0;
- (BOOL)terminateStreamInputWithXPCArguments:(id)a0 result:(id *)a1 error:(id *)a2;

@end
