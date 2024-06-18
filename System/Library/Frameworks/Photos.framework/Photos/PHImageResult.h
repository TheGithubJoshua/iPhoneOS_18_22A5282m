@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {
    struct CGImage { } *_imageRef;
    BOOL _isPlaceholder;
    BOOL _degraded;
}

@property (copy, nonatomic) NSNumber *exifOrientation;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (id)imageData;
- (BOOL)isPlaceholder;
- (struct CGImage { } *)imageRef;
- (void)setIsPlaceholder:(BOOL)a0;
- (BOOL)isDegraded;
- (void)setImageData:(id)a0;
- (id)sanitizedInfoDictionary;
- (long long)uiOrientation;
- (void)setDegraded:(BOOL)a0;
- (BOOL)containsValidData;
- (id)imageURL;
- (id)allowedInfoKeys;
- (void).cxx_destruct;
- (void)setImageURL:(id)a0;
- (void)dealloc;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 averagePixelLuminance:(id)a2;
- (void)setImageRef:(struct CGImage { } *)a0;

@end
