@protocol CSPowerStatusProviding, NSObject;

@interface CSPowerChangeObserver : NSObject {
    id<NSObject> _notificationToken;
    id<CSPowerStatusProviding> _statusProvider;
}

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic, getter=isConnectedToPower) BOOL connectedToPower;
@property (nonatomic) BOOL isConnectedToQiPower;
@property (nonatomic) BOOL isConnectedToWirelessInternalCharger;
@property (nonatomic) BOOL isConnectedToWirelessInternalChargingAccessory;

- (void)setIsConnectedToPower:(BOOL)a0;
- (id)initWithStatusProvider:(id)a0 notificationName:(id)a1 updateBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)update;

@end
