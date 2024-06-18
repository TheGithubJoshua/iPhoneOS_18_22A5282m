@class NSData, NSNumber;

@interface MTRNetworkCommissioningClusterReorderNetworkParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *networkID;
@property (copy, nonatomic) NSNumber *networkIndex;
@property (copy, nonatomic) NSNumber *breadcrumb;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
