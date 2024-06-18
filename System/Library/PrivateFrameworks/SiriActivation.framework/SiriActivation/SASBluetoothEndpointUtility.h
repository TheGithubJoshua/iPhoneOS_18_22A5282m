@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SASBluetoothEndpointUtility : NSObject {
    NSObject<OS_dispatch_queue> *_serialBluetoothEndpointQueue;
}

@property (retain, getter=_endpointType, setter=_setEndpointType:) NSString *endpointType;

- (id)init;
- (void)_registerListenersAndSetEndpointTypeWithNotification:(id)a0;
- (BOOL)isConnectedToBluetoothVehicle;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setEndpointTypeWithNotification:(id)a0;

@end
