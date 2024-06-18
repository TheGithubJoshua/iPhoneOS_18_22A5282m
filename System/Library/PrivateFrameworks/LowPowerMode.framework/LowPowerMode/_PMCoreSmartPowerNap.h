@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _PMCoreSmartPowerNap : NSObject <_PMCoreSmartPowerNapProtocol, _PMCoreSmartPowerNapCallbackProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callback_queue;
@property (nonatomic) unsigned char current_state;
@property BOOL connection_interrupted;

- (void)updateState:(unsigned char)a0;
- (void)unregister;
- (unsigned char)syncState;
- (id)init;
- (void)setState:(unsigned char)a0;
- (unsigned char)state;
- (void).cxx_destruct;
- (void)registerWithCallback:(id)a0 callback:(id /* block */)a1;
- (void)reRegister;
- (void)registerWithIdentifier:(id)a0;
- (void)setCSPNMotionAlarmStartThreshold:(unsigned int)a0;
- (void)setCSPNMotionAlarmThreshold:(unsigned int)a0;
- (void)setCSPNReentryCoolOffPeriod:(unsigned int)a0;
- (void)setCSPNReentryDelaySeconds:(unsigned int)a0;
- (void)setCSPNRequeryDelta:(unsigned int)a0;
- (void)syncStateWithHandler:(id /* block */)a0;
- (void)unregisterWithIdentifier:(id)a0;

@end
