@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput {
    AVCaptureDeviceInputInternal *_internal;
}

@property (readonly, nonatomic) AVCaptureDevice *device;
@property (nonatomic) BOOL unifiedAutoExposureDefaultsEnabled;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoMinFrameDurationOverride;

+ (id)deviceInputWithDevice:(id)a0 error:(id *)a1;
+ (void)initialize;

- (id)notReadyError;
- (id)init;
- (BOOL)isVisionDataDeliveryEnabled;
- (void)setSession:(id)a0;
- (void)_applyVideoMinFrameDurationOverride;
- (void)_resetPortraitLightingEffectStrength;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setCenterStageAllowed:(BOOL)a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)_resetVideoMinFrameDurationOverride;
- (void)setCameraCalibrationDataDeliveryEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)portsWithMediaType:(id)a0 sourceDeviceType:(id)a1 sourceDevicePosition:(long long)a2;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (id)videoDevice;
- (float)portraitLightingEffectStrength;
- (BOOL)isBackgroundBlurAllowed;
- (BOOL)isStudioLightingAllowed;
- (float)maxGainOverride;
- (void)setSimulatedAperture:(float)a0;
- (void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(BOOL)a0;
- (void)_sourceFormatDidChange:(struct opaqueCMFormatDescription { } *)a0;
- (void)setMaxGainOverride:(float)a0;
- (BOOL)isBuiltInMicrophoneStereoAudioCaptureEnabled;
- (void)setBackgroundBlurAllowed:(BOOL)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (struct OpaqueCMClock { } *)clock;
- (void)setPortraitLightingEffectStrength:(float)a0;
- (id)ports;
- (void)setVisionDataDeliveryEnabled:(BOOL)a0;
- (id)description;
- (void)setStudioLightingAllowed:(BOOL)a0;
- (float)simulatedAperture;
- (void)dealloc;
- (id)initWithDevice:(id)a0 error:(id *)a1;
- (void)_resetSimulatedAperture;
- (BOOL)isCameraCalibrationDataDeliveryEnabled;
- (void)_bumpChangeSeedForFirstPortWithMediaType:(id)a0;
- (BOOL)isBuiltInMicrophoneStereoAudioCaptureSupported;
- (BOOL)isCenterStageAllowed;
- (BOOL)isMaxGainOverrideSupported;
- (BOOL)_authorizedToUseDeviceAndRequestIfNecessary:(id)a0;
- (id)multiCamPorts;

@end
