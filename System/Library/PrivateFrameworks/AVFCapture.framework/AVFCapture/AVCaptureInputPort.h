@class AVCaptureInput, NSString, AVCaptureInputPortInternal;

@interface AVCaptureInputPort : NSObject {
    AVCaptureInputPortInternal *_internal;
}

@property (readonly, nonatomic) AVCaptureInput *input;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) const struct opaqueCMFormatDescription { } *formatDescription;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;
@property (readonly, nonatomic) NSString *sourceDeviceType;
@property (readonly, nonatomic) long long sourceDevicePosition;

+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversOfClock;
+ (id)portWithInput:(id)a0 mediaType:(id)a1 formatDescription:(struct opaqueCMFormatDescription { } *)a2 enabled:(BOOL)a3 sourceDeviceType:(id)a4 sourceDevicePosition:(long long)a5;

- (id)sourceID;
- (void)_setClock:(struct OpaqueCMClock { } *)a0;
- (void)setOwner:(id)a0;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (void)_updateBackgroundBlurUnavailableReasonsWithDevice:(id)a0 deviceInput:(id)a1;
- (id)figCaptureSourceConfigurationForSessionPreset:(id)a0;
- (id)_initWithInput:(id)a0 mediaType:(id)a1 formatDescription:(struct opaqueCMFormatDescription { } *)a2 enabled:(BOOL)a3 sourceDeviceType:(id)a4 sourceDevicePosition:(long long)a5;
- (void)bumpChangeSeed;
- (int)changeSeed;
- (void)_updateCenterStageUnavailableReasonsWithDevice:(id)a0 deviceInput:(id)a1;
- (BOOL)sourcesFromConstituentDevice;
- (id)description;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (void)_updateStudioLightingUnavailableReasonsWithDevice:(id)a0 deviceInput:(id)a1;

@end
