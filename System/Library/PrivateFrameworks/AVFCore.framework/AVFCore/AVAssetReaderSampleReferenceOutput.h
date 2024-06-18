@class AVAssetTrack, AVAssetReaderSampleReferenceOutputInternal;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput {
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}

@property (readonly, nonatomic) AVAssetTrack *track;

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)a0;

- (id)init;
- (id)mediaType;
- (id)_asset;
- (id)description;
- (void)dealloc;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (BOOL)_trimsSampleDurations;
- (id)initWithTrack:(id)a0;

@end
