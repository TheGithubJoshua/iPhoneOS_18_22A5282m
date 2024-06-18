@class NSString, NSDictionary, NSDate, SDSeedingConfiguration;

@interface SDDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SDSeedingConfiguration *expectedConfiguration;
@property (retain, nonatomic) SDSeedingConfiguration *currentConfiguration;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long platform;
@property (retain, nonatomic) NSString *deviceClass;
@property (retain, nonatomic) NSString *build;
@property (retain, nonatomic) NSDate *updatedAt;
@property (nonatomic) BOOL isFeedbackAssistantAvailable;
@property (nonatomic) BOOL isRunningSeedBuild;
@property (nonatomic) BOOL hasDeviceManagementRestriction;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)_currentDevice;
+ (id)deviceName;
+ (id)deviceClass;
+ (id)deviceClassForProductType:(id)a0;
+ (id)deviceIdentifier;
+ (id)osBuild;
+ (id)deviceProductType;
+ (id)currentDevice;
+ (unsigned long long)devicePlatform;
+ (BOOL)deviceIsHomePod;
+ (id)_devicesMatchingPlatforms:(unsigned long long)a0;
+ (void)getCurrentDevice:(id /* block */)a0;
+ (void)getDevicesMatchingPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;

- (id)initWithCoder:(id)a0;
- (void)checkIn;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)_canFileFeedback;
- (void)_configureDeviceWithExpectedConfiguration;
- (void)_configureDeviceWithExpectedConfigurationWithUserIdentifier:(id)a0;
- (void)_enrollInBetaProgram:(id)a0;
- (void)_enrollInBetaProgram:(id)a0 userIdentifier:(id)a1;
- (id)_enrolledBetaProgram;
- (BOOL)_isEnrolled;
- (BOOL)_unenrollWithUserIdentifier:(id)a0;
- (void)_verifyEnrollmentWithUserIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateCurrentConfiguration;

@end
