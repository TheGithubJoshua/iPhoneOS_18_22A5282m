@class NSString, AVPortraitEffectsMatte;

@interface NUAuxiliaryImageAVPortraitEffectsMatte : NSObject <NUAuxiliaryImage>

@property (readonly) AVPortraitEffectsMatte *avPortraitEffectsMatte;
@property (readonly) long long auxiliaryImageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned int)pixelFormatType;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)a0;
- (struct CGImage { } *)cgImageRef;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)a0;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (struct __CVBuffer { } *)cvPixelBufferRef;
- (id)initAuxiliaryImageFromAVPortraitEffectMatte:(id)a0;
- (id)underlyingAVPortraitEffectsMatte;

@end