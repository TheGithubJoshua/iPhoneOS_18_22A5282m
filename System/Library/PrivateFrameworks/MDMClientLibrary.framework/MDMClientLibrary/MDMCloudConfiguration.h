@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MDMCloudConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSDictionary *memberQueueDetails;
@property (retain, nonatomic) NSDictionary *memberQueueSetAsideDetails;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)sharedConfiguration;
+ (id)canonicalConfigurationWithSupervision:(BOOL)a0;

- (id)diagnosticsUploadURL;
- (BOOL)isSupervised;
- (id)skipSetupKeys;
- (id)init;
- (id)enrollmentServerInfo;
- (BOOL)hasMAIDCredential;
- (id)region;
- (id)mdmVersionProtocol;
- (id)enrollmentServerURL;
- (id)MAIDUsername;
- (BOOL)alreadySignedIntoFaceTime;
- (id)enrollmentServerSupportedFeatures;
- (BOOL)isProvisionallyEnrolled;
- (int)userMode;
- (void).cxx_destruct;
- (id)languageScript;
- (id)tvProviderUserToken;
- (void)refreshDetailsFromDisk;
- (BOOL)isAwaitingConfiguration;
- (id)language;
- (BOOL)isMDMUnremovable;
- (BOOL)isTeslaEnrolled;
- (id)enrollmentAnchorCertificates;
- (id)provisionalEnrollmentExpirationDate;

@end
