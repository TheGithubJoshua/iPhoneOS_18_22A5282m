@class NSString;

@interface ASDProgress : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *bundleID;
@property long long completedUnitCount;
@property long long downloadCompletedUnitCount;
@property long long downloadTotalUnitCount;
@property long long installCompletedUnitCount;
@property long long installTotalUnitCount;
@property long long postProcessCompletedUnitCount;
@property long long postProcessTotalUnitCount;
@property BOOL hasPostProcessing;
@property long long essentialBackgroundAssetDownloadEstimate;
@property long long phase;
@property BOOL reportRemotely;
@property double throughput;
@property long long totalUnitCount;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
