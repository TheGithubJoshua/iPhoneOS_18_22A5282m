@class NSString, NSMutableArray;

@interface MRVirtualOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
}

- (id)predictedOutputDevice;
- (BOOL)isVolumeControlAvailable;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)a0 block:(id /* block */)a1;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (float)volume;
- (void)setVolume:(float)a0;
- (void)resetPredictedOutputDevice;
- (id)outputDevices;
- (id)contextID;
- (BOOL)supportsVolumeControl;
- (id)initWithUID:(id)a0;
- (void).cxx_destruct;
- (void)setOutputDevices:(id)a0 withPassword:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (id)uniqueIdentifier;
- (unsigned int)type;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;

@end
