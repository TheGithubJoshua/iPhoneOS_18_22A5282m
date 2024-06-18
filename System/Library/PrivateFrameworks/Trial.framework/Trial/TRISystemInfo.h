@class NSArray, NSString;

@interface TRISystemInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isEnrolledInBetaProgram;
@property (retain, nonatomic) NSArray *enabledInputModeIdentifiers;
@property (nonatomic) BOOL logUserSettingsLanguageCode;
@property (nonatomic) BOOL logUserSettingsRegionCode;
@property (nonatomic) BOOL logUserKeyboardEnabledInputMode;
@property (retain, nonatomic) NSString *carrierBundleIdentifier;
@property (retain, nonatomic) NSString *carrierCountryIsoCode;
@property (nonatomic) BOOL isDiagnosticsAndUsageEnabled;
@property (nonatomic) BOOL hasAne;
@property (retain, nonatomic) NSString *aneVersion;

+ (id)_persistentSystemInfoPath;
+ (BOOL)_hasAne;
+ (id)_carrierBundleIdentifier;
+ (id)info;
+ (id)systemInfoFromFile:(id)a0;
+ (BOOL)_isDiagnosticsAndUsageEnabled;
+ (BOOL)_sysIsEnrolledInBetaProgram;
+ (id)_sysEnabledInputModeIdentifiers;
+ (BOOL)_isSeedBuild;
+ (id)_aneVersion;
+ (id)_carrierCountryIsoCode;
+ (id)loadSystemInfo;
+ (id)createSystemInfoWithFactorProvider:(id)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)saveToFile:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)save;
- (id)initFromSystemWithFactorProvider:(id)a0;

@end
