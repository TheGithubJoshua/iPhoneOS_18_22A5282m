@class BluetoothManager;

@interface HPSConnectedHeadphonesController : NSObject {
    BluetoothManager *_bluetoothManager;
    id /* block */ _deviceChangeHandler;
}

- (void)deviceConnectionHandler:(id)a0;
- (id)init;
- (BOOL)nicknameEnabled;
- (id)getDeviceIcon:(unsigned int)a0;
- (void).cxx_destruct;
- (void)setDeviceChangeHandler:(id /* block */)a0;
- (id)topLevelSpecifiers;
- (BOOL)boolFromBluetoothPreferences:(id)a0;
- (void)dealloc;

@end
