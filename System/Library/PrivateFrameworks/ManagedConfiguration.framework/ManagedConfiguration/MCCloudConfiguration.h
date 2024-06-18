@class NSDictionary;

@interface MCCloudConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)sharedConfiguration;

- (id)diagnosticsUploadURL;
- (BOOL)isSupervised;
- (id)skipSetupKeys;
- (BOOL)hasMAIDCredential;
- (id)region;
- (id)mdmVersionProtocol;
- (id)MAIDUsername;
- (BOOL)alreadySignedIntoFaceTime;
- (BOOL)isProvisionallyEnrolled;
- (id)languageScript;
- (id)tvProviderUserToken;
- (void)refreshDetailsFromDisk;
- (BOOL)isAwaitingConfiguration;
- (id)language;
- (BOOL)isTeslaEnrolled;
- (id)provisionalEnrollmentExpirationDate;

@end
