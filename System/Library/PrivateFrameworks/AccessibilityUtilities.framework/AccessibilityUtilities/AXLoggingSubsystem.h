@interface AXLoggingSubsystem : NSObject {
    BOOL _ignoreLogging;
}

@property (nonatomic) BOOL ignoreLogging;

+ (double)threshold;
+ (id)errorWithDescription:(id)a0;
+ (id)sharedInstance;
+ (void)initialize;
+ (id)subsystems;
+ (id)identifier;
+ (BOOL)willLog;
+ (int)defaultLogLevel;
+ (id)_errorWithMessage:(id)a0 underlyingError:(id)a1;
+ (void)initializeSubsytem;
+ (BOOL)shouldIncludeBacktraceInLogs;
+ (BOOL)shouldIncludeFileLineAndFunctionInLogs;
+ (BOOL)shouldProcessMessageForLogs;
+ (BOOL)willLogDebug;
+ (BOOL)willLogInfo;
+ (id)wrapError:(id)a0 description:(id)a1;

@end
