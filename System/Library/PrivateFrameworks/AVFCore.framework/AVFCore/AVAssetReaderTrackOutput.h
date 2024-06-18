@class NSString, AVAssetTrack, NSDictionary, AVAssetReaderTrackOutputInternal;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;
}

@property (readonly, nonatomic, getter=_isAttachedToAdaptor) BOOL attachedToAdaptor;
@property (readonly, nonatomic) AVAssetTrack *track;
@property (readonly, nonatomic) NSDictionary *outputSettings;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;

+ (id)assetReaderTrackOutputWithTrack:(id)a0 outputSettings:(id)a1;

- (id)init;
- (id)mediaType;
- (id)_asset;
- (void)_setAttachedAdaptor:(id)a0;
- (id)description;
- (void)dealloc;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)_attachedAdaptor;
- (void)setAppliesPreferredTrackTransform:(BOOL)a0;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (struct opaqueCMSampleBuffer { } *)_copyNextSampleBufferForAdaptor;
- (unsigned int)_getUniformMediaSubtypeIfExists;
- (id)_figAssetReaderExtractionOptions;
- (id)_formatDescriptions;
- (BOOL)_trimsSampleDurations;
- (BOOL)appliesPreferredTrackTransform;
- (id)initWithTrack:(id)a0 outputSettings:(id)a1;

@end
