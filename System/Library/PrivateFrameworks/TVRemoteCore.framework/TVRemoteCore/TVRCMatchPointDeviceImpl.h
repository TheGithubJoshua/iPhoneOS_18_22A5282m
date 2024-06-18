@class TVRXDevice, NSString, TVRCHMServiceWrapper;

@interface TVRCMatchPointDeviceImpl : NSObject <TVRCHMServiceWrapperDelegate, _TVRCDeviceImpl>

@property (retain, nonatomic) TVRCHMServiceWrapper *service;
@property (weak, nonatomic) TVRXDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithService:(id)a0;

- (id)keyboardController;
- (id)initWithService:(id)a0;
- (void)disconnect;
- (id)name;
- (void)connect;
- (id)model;
- (void).cxx_destruct;
- (id)identifier;
- (long long)connectionType;
- (void)sendButtonEvent:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (id)supportedButtons;
- (void)sendTouchEvent:(id)a0;
- (id)alternateIdentifiers;
- (void)connectedToService:(id)a0;
- (void)disconnectedFromService:(id)a0 error:(id)a1;
- (unsigned long long)pairingCapability;
- (void)service:(id)a0 updatedName:(id)a1;
- (void)setAuthenticationSupported:(BOOL)a0;
- (BOOL)supportsTouchEvents;
- (id)voiceRecorder;

@end
