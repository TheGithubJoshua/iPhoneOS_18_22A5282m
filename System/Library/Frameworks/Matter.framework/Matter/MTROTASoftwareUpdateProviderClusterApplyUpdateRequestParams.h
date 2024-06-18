@class NSData, NSNumber;

@interface MTROTASoftwareUpdateProviderClusterApplyUpdateRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *updateToken;
@property (copy, nonatomic, getter=getNewVersion) NSNumber *newVersion;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
