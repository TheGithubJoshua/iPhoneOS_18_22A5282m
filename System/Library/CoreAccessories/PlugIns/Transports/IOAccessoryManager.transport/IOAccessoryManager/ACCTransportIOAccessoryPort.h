@class NSString;
@protocol ACCTransportIOAccessoryPortProtocol;

@interface ACCTransportIOAccessoryPort : ACCTransportIOAccessoryBase {
    struct __CFRunLoopSource { } *_notificationRunLoopSource;
}

@property (weak, nonatomic) id<ACCTransportIOAccessoryPortProtocol> delegate;
@property (nonatomic) BOOL isAuthenticated;
@property (readonly, nonatomic) int portIDNumber;
@property (readonly, nonatomic) int portTransportType;
@property (readonly, nonatomic) int resistorID;
@property (readonly, nonatomic) int portStreamType;
@property (retain, nonatomic) NSString *ioAccPortEndpointUUID;
@property (weak, nonatomic) NSString *ioAccPortParentConnectionUUID;

- (void)_handleResistorIDChange:(int)a0;
- (void)_handlePropertyChange;
- (BOOL)transmitData:(id)a0;
- (void)_handleIncomingData:(id)a0;
- (void).cxx_destruct;
- (void)portServiceRegistrationComplete;
- (id)initWithDelegate:(id)a0 andIOService:(unsigned int)a1;
- (void)dealloc;
- (void)_registerForIOAccessoryPortInterestNotifications;
- (void)_handleAccessoryPortDetach;

@end
