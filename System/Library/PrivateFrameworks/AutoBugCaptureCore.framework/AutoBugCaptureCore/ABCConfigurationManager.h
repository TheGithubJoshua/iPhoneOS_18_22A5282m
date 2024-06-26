@class NSString, NSDictionary, ABCPreferences, NSNumber;

@interface ABCConfigurationManager : NSObject <ABCConfigurationProtocol>

@property (retain, nonatomic) ABCPreferences *preferences;
@property (nonatomic) BOOL apns_enable;
@property (nonatomic) BOOL apns_dev_environment;
@property (retain, nonatomic) NSNumber *disable_internal_build;
@property (retain, nonatomic) NSNumber *carrier_seed_flag;
@property (retain, nonatomic) NSNumber *seed_flag;
@property (retain, nonatomic) NSNumber *vendor_flag;
@property (retain, nonatomic) NSNumber *npi_flag;
@property (retain, nonatomic) NSDictionary *previousConfiguration;
@property (readonly, nonatomic) BOOL arbitratorDisableDampening;
@property (readonly, nonatomic) BOOL isDeviceUnderTest;
@property (readonly, nonatomic) unsigned long long dampenedIPSLimit;
@property (readonly, nonatomic) unsigned long long maxUploadRetryCount;
@property (readonly, nonatomic) unsigned long long arbitratorDailyCountLimit;
@property (readonly, nonatomic) unsigned long long dampeningRestrictionFactor;
@property (readonly, nonatomic) BOOL disableAPIRateLimit;
@property (readonly, nonatomic) double apiRateLimit;
@property (readonly, nonatomic) double apiLimitWindow;
@property (readonly, nonatomic) NSString *databaseContainerPath;
@property (readonly, nonatomic) BOOL cloudKitEnabled;
@property (readonly, nonatomic) BOOL cloudKitSandboxEnvironment;
@property (readonly, nonatomic) NSString *cloudKitContainerIdentifier;
@property (readonly, nonatomic) NSString *cloudKitInvernessService;
@property (readonly, nonatomic) BOOL cloudKitPrefersAnonymous;
@property (readonly, nonatomic) double cloudKitTimeoutIntervalForResource;
@property (readonly, nonatomic) double cloudKitTimeoutIntervalForRequest;
@property (readonly, nonatomic) unsigned long long cloudKitFallbackMaximumLogCount;
@property (readonly, nonatomic) unsigned long long maxCaseSummaryPerSubmission;
@property (readonly, nonatomic) unsigned long long submittedCaseSummaryRetentionDays;
@property (readonly, nonatomic) unsigned long long unsubmittedCaseSummaryRetentionDays;
@property (readonly, nonatomic) BOOL caseSummaryEnabled;
@property (readonly, nonatomic) BOOL apnsEnabled;
@property (readonly, nonatomic) BOOL apnsSandboxEnvironment;
@property (readonly, nonatomic) NSString *logArchivePath;
@property (readonly, nonatomic) unsigned int logArchiveUID;
@property (readonly, nonatomic) unsigned int logArchiveGID;
@property (readonly, nonatomic) BOOL autoBugCaptureEnabled;
@property (readonly, nonatomic) BOOL autoFeedbackAssistantEnable;
@property (readonly, nonatomic) BOOL autoBugCaptureAvailable;
@property (readonly, nonatomic) BOOL autoBugCaptureSignature;
@property (readonly, nonatomic) BOOL autoBugCaptureRegularPayloads;
@property (readonly, nonatomic) BOOL autoBugCaptureSensitivePayloads;
@property (readonly, nonatomic) BOOL autoBugCaptureUploadPreapproved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLibraryDirectory;
+ (id)autoBugCapturePrefix;

- (id)init;
- (unsigned int)logArchiveUID;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)autoBugCaptureUploadPreapproved;
- (id)logArchivePath;
- (BOOL)autoBugCaptureSupportedHardware;
- (int)autoBugCaptureFeatures;
- (unsigned int)logArchiveGID;
- (id)databaseContainerPath;
- (id)getAutoBugCaptureConfiguration;
- (void).cxx_destruct;
- (id)loadEmbeddedConfigurationPlist:(const char *)a0;
- (BOOL)autoFeedbackAssistantEnable;
- (BOOL)autoBugCaptureSignature;
- (BOOL)autoBugCaptureRegularPayloads;
- (void)initializeOverrides;
- (void)dealloc;
- (id)defaultDiagnosticActions;
- (BOOL)autoBugCaptureAvailable;
- (BOOL)autoBugCaptureSensitivePayloads;
- (id)currentDiagnosticActions;

@end
