@class NSData, NSURL, PHAssetResource;

@interface PHMediaResourceResult : PHCompositeMediaResult {
    PHAssetResource *_assetResource;
}

@property (retain, nonatomic) NSData *assetResourceData;
@property (copy, nonatomic) NSURL *assetResourceFileURL;

- (id)exifOrientation;
- (id)videoURL;
- (id)uniformTypeIdentifier;
- (id)sanitizedInfoDictionary;
- (BOOL)containsValidData;
- (id)imageURL;
- (id)allowedInfoKeys;
- (void).cxx_destruct;
- (id)adjustmentData;
- (id)initWithRequestID:(int)a0 assetResource:(id)a1;
- (id)mediaMetadata;

@end
