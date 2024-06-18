@class MTRApplicationLauncherClusterApplicationStruct, NSData, NSNumber;

@interface MTRApplicationLauncherClusterLaunchAppParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRApplicationLauncherClusterApplicationStruct *application;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
