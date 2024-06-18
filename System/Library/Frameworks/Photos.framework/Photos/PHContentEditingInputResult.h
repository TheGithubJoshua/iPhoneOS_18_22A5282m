@class PHImageResult, PHCompositeMediaResult, NSMutableDictionary, NSURL, NSNumber, PHAdjustmentData;

@interface PHContentEditingInputResult : PHCompositeMediaResult {
    PHAdjustmentData *_adjustmentData;
    PHImageResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    NSMutableDictionary *_flipImageURLs;
    NSMutableDictionary *_flipVideoURLs;
}

@property (nonatomic) BOOL canHandleAdjustmentData;
@property (retain, nonatomic) NSNumber *baseVersionNeeded;
@property (retain, nonatomic) NSURL *overCapturePhotoURL;
@property (retain, nonatomic) NSURL *overCaptureVideoURL;
@property (copy, nonatomic) NSURL *frontSwappingImageRenderURL;
@property (copy, nonatomic) NSURL *backSwappingImageRenderURL;
@property (copy, nonatomic) NSURL *frontSwappingVideoRenderURL;
@property (copy, nonatomic) NSURL *backSwappingVideoRenderURL;
@property (retain, nonatomic) PHAdjustmentData *originalAdjustmentData;

- (id)exifOrientation;
- (id)imageData;
- (id)videoURL;
- (id)uniformTypeIdentifier;
- (struct CGImage { } *)imageRef;
- (BOOL)containsValidData;
- (id)imageURL;
- (void).cxx_destruct;
- (id)description;
- (id)error;
- (void)setError:(id)a0;
- (void)addVideoResult:(id)a0;
- (void)addImageResult:(id)a0;
- (void)addAdjustmentDataResult:(id)a0;
- (void)addFlipImageURL:(id)a0 forAssetResourceType:(long long)a1;
- (void)addFlipVideoURL:(id)a0 forAssetResourceType:(long long)a1;
- (id)adjustmentData;
- (id)cancelledInfoKey;
- (void)clearAdjustmentData;
- (id)errorInfoKey;
- (id)flipImageURLs;
- (id)flipVideoURLs;
- (id)imagePropertiesLoadIfNeeded:(BOOL)a0;
- (id)imageSandboxExtensionToken;
- (id)inCloudInfoKey;
- (void)mergeInfoDictionaryFromResult:(id)a0;
- (id)videoAdjustmentData;
- (id)videoSandboxExtensionToken;

@end
