@class NSXPCListener;

@interface DEDConfiguration : NSObject

@property (retain) NSXPCListener *anonymousListener;

+ (id)sharedInstance;

- (id)dedDirectory;
- (id)classClusterAPIVersion;
- (id)machServiceName;
- (void)invalidateTestListeners;
- (void).cxx_destruct;
- (const char *)loggingSubsystem;
- (id)errorDomain;
- (id)identifier;
- (unsigned long long)connectionType;
- (id)sharedAnonymousListener;

@end
