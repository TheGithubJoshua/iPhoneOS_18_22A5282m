@class NSString, NSDictionary, AVWeakReference, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {
    NSObject<OS_dispatch_queue> *_fcsQueue;
    struct OpaqueFigCaptureSource { } *_fcs;
    NSDictionary *_attributes;
    BOOL _levelMeteringEnabled;
    BOOL _isConnected;
    NSString *_localizedName;
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_semaphore> *_serverConnectionDiedSemaphore;
    NSString *_clientAudioClockDeviceUID;
}

+ (void)_reconnectDevices:(id)a0;
+ (void)initialize;
+ (id)_devices;

- (id)deviceType;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)a0;
- (id)init;
- (id)_copyFigCaptureSourceProperty:(struct __CFString { } *)a0;
- (void)stopUsingDevice;
- (void)_handleNotification:(struct __CFString { } *)a0 payload:(id)a1;
- (id)uniqueID;
- (struct OpaqueFigCaptureSource { } *)figCaptureSource;
- (BOOL)isConnected;
- (BOOL)isBuiltInStereoAudioCaptureSupported;
- (BOOL)startUsingDevice:(id *)a0;
- (id)localizedName;
- (id)modelID;
- (id)clientAudioClockDeviceUID;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (void)audioInputDevicesDidChangeHandler:(id)a0;
- (struct OpaqueCMClock { } *)deviceClock;
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)a0;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (void)dealloc;
- (BOOL)supportsAVCaptureSessionPreset:(id)a0;
- (void)setClientAudioClockDeviceUID:(id)a0;
- (BOOL)hasMediaType:(id)a0;

@end
