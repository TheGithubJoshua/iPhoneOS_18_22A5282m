@interface DMEnvironment : NSObject

@property (nonatomic) BOOL testMigrationInfrastructureOnly;

+ (id)sharedInstance;
+ (BOOL)isBuildVersion:(id)a0 equalToBuildVersion:(id)a1;

- (id)buildVersion;
- (BOOL)implementMigrationPluginResults;
- (void)setContext:(id)a0;
- (id)contextPath;
- (void)setMigrationPluginResultsPref:(id)a0;
- (BOOL)userSessionIsLoginWindow;
- (void)setLastBuildVersionPref:(id)a0;
- (id)migrationPluginResultsPref;
- (void)setLastMigrationResultsPref:(id)a0;
- (BOOL)suppressMigrationPluginWrapperExitMarkerPref;
- (void)clearContext;
- (BOOL)waitForExecutePluginsSignalMarkerPref;
- (id)context;
- (void)blockUntilPreferencesFlush;
- (id)lastBuildVersionPref;
- (BOOL)deviceModeIsSharediPad;
- (id)userDataDispositionPref;
- (BOOL)isDeviceUsingEphemeralStorage;
- (void)setUserDataDispositionPref:(id)a0;
- (id)continuousIntegrationMarkerPref;
- (id)lastMigrationResultsPref;

@end
