@class NSUUID, NSString, NSArray, NEVPNConnection, NEConfigurationManager, NEConfiguration, NEDNSSettings, NSObject;
@protocol NEDNSSettingsManagerDelegate;

@interface NEDNSSettingsManager : NSObject <NEPrettyDescription> {
    BOOL _hasLoaded;
    NEConfigurationManager *_configurationManager;
    NEVPNConnection *_connection;
    NSObject *_statusObserver;
    NEConfiguration *_configuration;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (weak) id<NEDNSSettingsManagerDelegate> delegate;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic, getter=isFromProfile) BOOL fromProfile;
@property (readonly, nonatomic, getter=isConfigurationGradeEnterprise) BOOL configurationGradeEnterprise;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *localizedDescription;
@property (retain) NEDNSSettings *dnsSettings;
@property (copy) NSArray *onDemandRules;

+ (id)sharedManager;
+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)a0;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)fetchStatusWithCompletionHandler:(id /* block */)a0;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)a0;

@end
