@class ATIDSConnectionInfo, NSString, NSMutableArray, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface ATIDSService : ATMessageLinkListener <IDSServiceDelegate, ATSocketDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_service;
    ATIDSConnectionInfo *_connectionInfo;
    NSMutableArray *_listeners;
    BOOL _running;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)openSocketPriorityFromATPendingChangePriority:(int)a0;

- (id)pairedDevice;
- (void)addListener:(id)a0;
- (id)initWithServiceName:(id)a0;
- (id)_messageTypeToString:(int)a0;
- (void)_connect;
- (void)_scheduleReconnect;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (void)removeListener:(id)a0;
- (void)stop;
- (void)requestConnectionToPairedDeviceWithPriority:(long long)a0;
- (void)socket:(id)a0 hasDataAvailable:(const char *)a1 length:(long long)a2;
- (BOOL)start;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)_cancelPendingConnectionRequests;
- (BOOL)hasPairedDevice;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 hasBeenDeliveredWithContext:(id)a3;
- (id)deviceForId:(id)a0;
- (void).cxx_destruct;
- (void)_scheduleConnectWithPriority:(long long)a0;
- (void)socketDidClose:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)setPreferWifi:(BOOL)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)_sendWakeup;

@end
