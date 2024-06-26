@class NSDate, NSString, NSArray, NSURLSession, NSPPrivacyProxyConfiguration, NSDictionary, NSNumber;

@interface NSPConfiguration : NSObject <NSSecureCoding, NSCopying> {
    NSString *_configServerHost;
    NSNumber *_version;
    long long _diskVersion;
    NSPConfiguration *_defaults;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSNumber *version;
@property (copy) NSNumber *timestamp;
@property (copy) NSNumber *enabled;
@property (copy) NSString *etag;
@property (copy) NSNumber *epoch;
@property (copy) NSDate *resurrectionDate;
@property (copy) NSArray *appRules;
@property (copy) NSNumber *configServerEnabled;
@property (copy) NSString *configServerHost;
@property (copy) NSNumber *configServerPort;
@property (copy) NSString *configServerPath;
@property (copy) NSNumber *urlRequestTimeout;
@property (copy) NSString *waldoLeafOID;
@property (copy) NSNumber *waldoRevocationFailClosed;
@property (retain, nonatomic) NSURLSession *privacyProxyURLSession;
@property BOOL ignoreInvalidCerts;
@property (retain, nonatomic) NSDictionary *edgeSets;
@property (copy) NSNumber *persistMetrics;
@property (readonly) NSDate *dayPassExpirationDate;
@property (readonly) NSDate *earliestEnableCheckDate;
@property (readonly) BOOL isDead;
@property (copy) NSPPrivacyProxyConfiguration *proxyConfiguration;
@property (copy, nonatomic) NSNumber *userTier;
@property (copy) NSNumber *proxyTrafficState;
@property (copy) NSDate *configurationFetchDate;
@property (copy) NSDate *subscriberTierResetDate;
@property (copy) NSNumber *hasSubscriberTierResetDate;
@property (copy) NSNumber *cloudSubscriptionCheckEnabled;
@property (retain, nonatomic) NSNumber *geohashSharingEnabledStatus;
@property (retain, nonatomic) NSString *geohashOverride;
@property (retain, nonatomic) NSNumber *preferredPathRoutingEnabledStatus;
@property (retain, nonatomic) NSNumber *privateAccessTokensEnabledStatus;
@property (retain, nonatomic) NSNumber *privateAccessTokensAllowTools;
@property (retain, nonatomic) NSNumber *proxyAccountType;
@property (retain, nonatomic) NSNumber *userPreferredTier;
@property (retain, nonatomic) NSNumber *trialConfigVersion;

+ (id)defaultConfiguration;
+ (id)proxyAccountTypeToString:(id)a0;
+ (BOOL)validatePrivacyProxyConfiguration:(id)a0;
+ (void)verifyConfigurationSignature:(id)a0 configuration:(id)a1 host:(id)a2 validateCert:(BOOL)a3 completionHandler:(id /* block */)a4;
+ (id)proxyTrafficStateToString:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)setup;
- (id)getEdgeSetForAppRule:(id)a0;
- (id)initFromTLVs:(id)a0;
- (void)incrementSessionCountersOnFirstLaunch;
- (id)getCurrentKeyBagForAppRule:(id)a0;
- (id)diagnostics;
- (id)initFromKeychain;
- (BOOL)saveToPreferences;
- (void)removeFromKeychain;
- (id)initFromPreferences;
- (id)initWithTimestamp:(id)a0 fromDictionary:(id)a1 waldoSource:(long long)a2;
- (BOOL)evaluateEnableRatios;
- (BOOL)resetStaleEdgeSets;
- (void)saveToKeychain;
- (void)setupNSURLSession;
- (id)createConfigFetchURLWithDomain:(id)a0 timestamp:(id)a1;
- (void)enumerateEdgeSetsWithBlock:(id /* block */)a0;
- (id)copyAgentResultsForAppRule:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateNetworkAgents;
- (void)teardown;
- (void).cxx_destruct;
- (id)description;
- (void)merge:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)tierToString;
- (id)getEdgeSetForSigningIdentifier:(id)a0;
- (id)copyTLVData;

@end
