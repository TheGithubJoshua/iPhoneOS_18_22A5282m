@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    BOOL _isDegraded;
}

- (id)exifOrientation;
- (id)imageData;
- (id)videoURL;
- (id)uniformTypeIdentifier;
- (BOOL)isPlaceholder;
- (struct CGImage { } *)imageRef;
- (BOOL)isDegraded;
- (id)sanitizedInfoDictionary;
- (long long)uiOrientation;
- (void)setDegraded:(BOOL)a0;
- (BOOL)containsValidData;
- (id)imageURL;
- (id)allowedInfoKeys;
- (void).cxx_destruct;
- (void)addVideoResult:(id)a0;
- (void)_mergeInfoDictionaryFromResult:(id)a0;
- (void)addImageResult:(id)a0;
- (unsigned int)cgOrientation;
- (id)videoAdjustmentData;

@end
