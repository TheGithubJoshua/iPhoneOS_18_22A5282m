@class NSData, NSNumber;

@interface MTROTASoftwareUpdateProviderClusterNotifyUpdateAppliedParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *updateToken;
@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
