@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface NSConcreteTask : NSTask {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_dictionary;
    id /* block */ _terminationHandler;
    NSObject<OS_dispatch_source> *_dsrc;
    long long _suspendCount;
    int _pid;
    _Atomic unsigned long long __exitRunningInfo;
    char _qos;
    _Atomic BOOL _isSpawnedProcessDisclaimed;
}

- (void)terminate;
- (long long)suspendCount;
- (long long)_platformExitInformation;
- (void)setArguments:(id)a0;
- (id)init;
- (void)setTerminationHandler:(id /* block */)a0;
- (BOOL)launchAndReturnError:(id *)a0;
- (BOOL)isRunning;
- (id)arguments;
- (id)taskDictionary;
- (int)_procid;
- (BOOL)suspend;
- (void)setStartsNewProcessGroup:(BOOL)a0;
- (void)setEnvironment:(id)a0;
- (void)interrupt;
- (int)terminationStatus;
- (id)standardError;
- (void)setStandardInput:(id)a0;
- (void)waitUntilExit;
- (id)standardInput;
- (void)setCurrentDirectoryPath:(id)a0;
- (int)processIdentifier;
- (void)_setTerminationHandler:(id /* block */)a0;
- (void)terminateTask;
- (BOOL)launchWithDictionary:(id)a0 error:(id *)a1;
- (id)currentDirectoryPath;
- (void)setStandardOutput:(id)a0;
- (id)standardOutput;
- (void)_withTaskDictionary:(id /* block */)a0;
- (BOOL)resume;
- (void)setStandardError:(id)a0;
- (BOOL)isSpawnedProcessDisclaimed;
- (void)launch;
- (id)preferredArchitectures;
- (id /* block */)terminationHandler;
- (void)dealloc;
- (void)setSpawnedProcessDisclaimed:(BOOL)a0;
- (void)setQualityOfService:(long long)a0;
- (void)setLaunchPath:(id)a0;
- (id)environment;
- (void)setTaskDictionary:(id)a0;
- (long long)terminationReason;
- (id)launchPath;
- (void)setPreferredArchitectures:(id)a0;
- (long long)qualityOfService;

@end
