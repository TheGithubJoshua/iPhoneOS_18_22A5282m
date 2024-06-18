@class NSString, AVOutputDeviceCommunicationChannel;

@interface AVAPSyncOutputDeviceCommunicationChannelImpl : NSObject <AVOutputDeviceCommunicationChannelImpl> {
    NSString *_deviceID;
    struct __CFString { } *_commChannelUUID;
    struct OpaqueAPSyncController { } *_syncController;
}

@property (weak) AVOutputDeviceCommunicationChannel *parentChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)close;
- (id)initWithDeviceID:(id)a0 channelUUID:(struct __CFString { } *)a1 syncController:(struct OpaqueAPSyncController { } *)a2;
- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;

@end
