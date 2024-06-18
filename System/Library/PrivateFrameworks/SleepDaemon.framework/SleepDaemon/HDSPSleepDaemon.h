@class HDSPEnvironment, NSString, NSDate, NSObject;
@protocol OS_dispatch_source;

@interface HDSPSleepDaemon : NSObject <HDSPDiagnosticsProvider>

@property (readonly, nonatomic) NSDate *launchDate;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *sigtermSource;
@property (readonly, nonatomic) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)diagnosticInfo;
- (void)_setupSigtermHandler;
- (void)start;
- (void).cxx_destruct;
- (id)initWithBehavior:(id)a0;
- (id)diagnosticDescription;
- (void)_handleSigterm;

@end
