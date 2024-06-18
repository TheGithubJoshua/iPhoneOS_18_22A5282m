@class NSData, ACAccountStore, NSString;

@interface MSMSPlatform : NSObject <MSPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) BOOL isPerfLoggingEnabled;
@property (retain, nonatomic) NSData *pushToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)thePlatform;

- (id)theDaemon;
- (id)init;
- (id)OSString;
- (id)pushTokenForPersonID:(id)a0;
- (void)didDetectUnrecoverableCondition;
- (id)contentURLForPersonID:(id)a0;
- (id)OSVersion;
- (id)appBundleInfoString;
- (Class)publisherPluginClass;
- (BOOL)isPerformanceLoggingEnabled;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (void)_rereadDefaults;
- (id)stringForSysctlKey:(id)a0;
- (Class)deletePluginClass;
- (id)UDID;
- (void).cxx_destruct;
- (Class)subscriberPluginClass;
- (void)logFacility:(int)a0 level:(int)a1 format:(id)a2 args:(char *)a3;
- (id)hardwareString;
- (id)pathMediaStreamDir;
- (id)socketOptions;
- (BOOL)policyMayUpload;
- (BOOL)shouldEnableNewFeatures;
- (id)baseURLForPersonID:(id)a0;
- (void)logFile:(const char *)a0 func:(const char *)a1 line:(int)a2 facility:(int)a3 level:(int)a4 format:(id)a5 args:(char *)a6;
- (BOOL)shouldLogAtLevel:(int)a0;
- (Class)pluginClass;
- (BOOL)policyMayDownload;
- (id)fullNameFromFirstName:(id)a0 lastName:(id)a1;
- (id)authTokenForPersonID:(id)a0;
- (id)_accountForPersonID:(id)a0;
- (BOOL)_mayPerformFileTransfer;
- (struct __CFString { } *)_facilityStringForFacility:(int)a0;

@end
