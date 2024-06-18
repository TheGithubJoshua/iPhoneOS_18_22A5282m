@class NSString, NSDictionary, NSArray, NSDate, NSMutableArray, NSMutableDictionary;

@interface VMUProcessDescription : NSObject {
    unsigned int _task;
    int _pid;
    BOOL _taskIsCorpse;
    NSString *_hardwareModel;
    NSString *_processName;
    BOOL _processNameNeedsCorrection;
    NSString *_executablePath;
    struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } _symbolicator;
    BOOL _executablePathNeedsCorrection;
    unsigned long long _executableLoadAddress;
    int _cpuType;
    unsigned int _platform;
    BOOL _is64Bit;
    struct timeval { long long tv_sec; int tv_usec; } _proc_starttime;
    NSDictionary *_lsApplicationInformation;
    NSMutableArray *_binaryImages;
    NSArray *_sortedBinaryImages;
    NSDictionary *_binaryImageHints;
    NSArray *_unreadableBinaryImagePaths;
    BOOL _binaryImagePostProcessingComplete;
    NSDictionary *_buildVersionDictionary;
    NSDictionary *_osVersionDictionary;
    struct mapped_memory_t { } *_mappedMemory;
    NSString *_parentProcessName;
    NSString *_parentExecutablePath;
    int _ppid;
    NSDate *_date;
    NSMutableDictionary *_environment;
}

@property (readonly, nonatomic) unsigned long long physicalFootprint;
@property (readonly, nonatomic) unsigned long long physicalFootprintPeak;
@property (readonly, nonatomic) unsigned int idleExitStatus;

+ (id)parseBinaryImagesDescription:(id)a0;
+ (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolicatorFromBinaryImagesDescription:(id)a0;
+ (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolicatorFromBinaryImagesDescription:(id)a0 withArchitecture:(struct _CSArchitecture { int x0; int x1; })a1;

- (void)clearCrashReporterInfo;
- (id)_osVersionDictionary;
- (int)cpuType;
- (id)parentProcessName;
- (void)setCrashReporterInfo;
- (id)processName;
- (id)_systemVersionDescription;
- (id)_sanitizeVersion:(id)a0;
- (id)processStatisticsDescription;
- (id)executablePath;
- (int)pid;
- (id)displayName;
- (id)binaryImages;
- (id)_buildVersionDictionary;
- (id)processIdentifier;
- (id)parentProcessPath;
- (id)_cpuTypeDescription;
- (BOOL)initFromCorpse;
- (id)binaryImagesDescription;
- (id)date;
- (id)valueForEnvVar:(id)a0;
- (id)_binaryImagesDescriptionForRanges:(id)a0;
- (void).cxx_destruct;
- (id)binaryImagesDescriptionForBacktraces:(id)a0;
- (BOOL)isAppleApplication;
- (id)description;
- (id)_rangesOfBinaryImages:(id)a0 forBacktraces:(id)a1;
- (void)_libraryLoaded:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0;
- (id)_bundleLock;
- (id)processVersionDictionary;
- (BOOL)is64Bit;
- (id)processVersion;
- (void)dealloc;
- (id)_buildInfoDescription;
- (id)initWithTask:(unsigned int)a0 getBinariesList:(BOOL)a1;
- (id)processDescriptionHeader;
- (id)dateAndVersionDescription;
- (void)initFromLiveProcess;
- (id)initWithPid:(int)a0 orTask:(unsigned int)a1;
- (void)cleansePathsIncludingBinaryImageList:(BOOL)a0;
- (id)bundleIdentifier;
- (id)binaryImageDictionaryForAddress:(unsigned long long)a0;
- (int)parentPid;
- (unsigned int)task;

@end
