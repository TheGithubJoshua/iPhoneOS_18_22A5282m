@class NSString, NSArray;

@interface VMUProcInfo : NSObject {
    unsigned int _task;
    NSString *_name;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    struct timeval { long long tv_sec; int tv_usec; } _startTime;
    BOOL _isZombie;
}

@property (readonly, nonatomic) BOOL shouldAnalyzeWithCorpse;
@property (readonly, nonatomic) BOOL isSemiCriticalProcess;

+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(int)a0;
+ (int)processParentId:(int)a0;

- (int)ppid;
- (id)initWithTask:(unsigned int)a0;
- (BOOL)terminate;
- (id)realAppName;
- (BOOL)isRunning;
- (int)cpuType;
- (id)initWithPid:(int)a0;
- (id)arguments;
- (BOOL)signal:(int)a0;
- (long long)compareByUserAppName:(id)a0;
- (id)firstArgument;
- (unsigned int)platform;
- (BOOL)isMachO;
- (int)pid;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (struct timeval { long long x0; int x1; })startTime;
- (id)procTableName;
- (id)name;
- (id)userAppName;
- (id)valueForEnvVar:(id)a0;
- (id)envVars;
- (void).cxx_destruct;
- (id)requestedAppName;
- (BOOL)isEqual:(id)a0;
- (BOOL)isNative;
- (id)description;
- (BOOL)isApp;
- (long long)compareByName:(id)a0;
- (BOOL)isZombie;
- (id)_infoFromCommandLine:(int)a0;
- (BOOL)isCFM;
- (void)dealloc;
- (id)platformName;
- (void)update;
- (unsigned int)task;

@end
