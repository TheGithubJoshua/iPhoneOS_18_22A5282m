@class NSDictionary, NSString;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}

@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly, nonatomic) NSString *fieldMode;

+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;

- (id)initWithTrustedPixelBufferAttributes:(id)a0;
- (BOOL)willYieldCompressedSamples;
- (int)height;
- (int)width;
- (id)initWithPixelBufferAttributes:(id)a0 exceptionReason:(id *)a1;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (id)cleanApertureDictionary;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (void)dealloc;
- (id)pixelAspectRatioDictionary;

@end
