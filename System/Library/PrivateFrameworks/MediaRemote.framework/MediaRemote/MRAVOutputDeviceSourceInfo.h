@class NSString;

@interface MRAVOutputDeviceSourceInfo : NSObject

@property (readonly, nonatomic) NSString *routingContextUID;
@property (readonly, nonatomic) BOOL multipleBuiltInDevices;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithRoutingContextUID:(id)a0 multipleBuiltInDevices:(BOOL)a1;

@end
