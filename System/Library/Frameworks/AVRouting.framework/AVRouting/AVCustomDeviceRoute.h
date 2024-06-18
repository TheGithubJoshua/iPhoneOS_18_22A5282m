@class NSUUID, DADevice, NSObject;
@protocol OS_nw_endpoint;

@interface AVCustomDeviceRoute : NSObject

@property (retain, nonatomic) DADevice *device;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *networkEndpoint;
@property (retain, nonatomic) NSUUID *bluetoothIdentifier;
@property (nonatomic, getter=isActive) BOOL active;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
