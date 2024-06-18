@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
}

@property (retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) struct OpaqueFigPlaybackItem { } *playbackItem;

- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (long long)trackCount;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)lyrics;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 trackIDs:(id)a1;
- (BOOL)providesPreciseDurationAndTiming;
- (unsigned long long)hash;
- (id)availableMetadataFormats;
- (id)trackIDs;
- (BOOL)isEqual:(id)a0;
- (id)compatibleTrackForCompositionTrack:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)dealloc;

@end
