@class NSString, NSNumber, NSError;

@interface UARPConsent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *accessoryName;
@property (readonly) NSString *assetVersion;
@property BOOL isDownloadable;
@property NSNumber *downloadSize;
@property BOOL isRecommended;
@property (copy) NSString *consentDescription;
@property (copy) NSString *warning;
@property BOOL needsPostLogoutMode;
@property (copy) NSString *installerProgressDescription;
@property (copy) NSString *installerProgressPhase;
@property (retain) NSError *installerProgressError;
@property (retain) NSNumber *installerOverallProgress;
@property (copy) NSString *assetBuildVersion;

- (id)initWithCoder:(id)a0;
- (void)dumpWithTabDepth:(unsigned long long)a0 dumpString:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccessoryName:(id)a0 assetVersion:(id)a1;

@end
