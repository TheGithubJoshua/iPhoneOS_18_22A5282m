@class _ANEDaemonConnection, NSArray, _ANEVirtualClient;

@interface _ANEClient : NSObject

@property (readonly, nonatomic) _ANEDaemonConnection *conn;
@property (readonly, nonatomic) NSArray *priorityQ;
@property (readonly, nonatomic) _ANEVirtualClient *virtualClient;

+ (id)new;
+ (void)initialize;
+ (id)sharedConnection;
+ (id)sharedPrivateConnection;

- (id)init;
- (BOOL)endRealTimeTask;
- (void)purgeCompiledModelMatchingHash:(id)a0;
- (BOOL)unloadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)mapIOSurfacesWithModel:(id)a0 request:(id)a1 cacheInference:(BOOL)a2 error:(id *)a3;
- (void).cxx_destruct;
- (BOOL)evaluateWithModel:(id)a0 options:(id)a1 request:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)beginRealTimeTask;
- (void)purgeCompiledModel:(id)a0;
- (BOOL)loadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (void)dealloc;
- (BOOL)compileModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)compiledModelExistsFor:(id)a0;
- (BOOL)echo:(id)a0;
- (BOOL)compiledModelExistsMatchingHash:(id)a0;
- (BOOL)evaluateRealTimeWithModel:(id)a0 options:(id)a1 request:(id)a2 error:(id *)a3;
- (BOOL)loadRealTimeModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)unloadRealTimeModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (void)unmapIOSurfacesWithModel:(id)a0 request:(id)a1;
- (BOOL)isVirtualClient;
- (BOOL)doEvaluateDirectWithModel:(id)a0 options:(id)a1 request:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)doLoadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)doUnloadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (id)initWithRestrictedAccessAllowed:(BOOL)a0;

@end
