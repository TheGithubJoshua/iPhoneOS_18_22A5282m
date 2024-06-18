@class NSNumber, NSString, NSData;

@interface MTRNetworkCommissioningClusterThreadInterfaceScanResult : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *panId;
@property (copy, nonatomic) NSNumber *extendedPanId;
@property (copy, nonatomic) NSString *networkName;
@property (copy, nonatomic) NSNumber *channel;
@property (copy, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSData *extendedAddress;
@property (copy, nonatomic) NSNumber *rssi;
@property (copy, nonatomic) NSNumber *lqi;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
