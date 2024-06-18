@interface BYLicenseAgreement : NSObject

+ (BOOL)needsToAcceptNewAgreement;
+ (unsigned long long)versionOfAcceptedAgreement;
+ (void)_clearAcceptedLicenseVersion;
+ (void)recordUserAcceptedAgreementVersion:(unsigned long long)a0;
+ (unsigned long long)versionOfOnDiskAgreement;

@end
