@interface AVFormatReaderInspector : AVAssetInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property (retain, nonatomic, getter=_formatReader, setter=_setFormatReader:) struct OpaqueFigFormatReader { } *formatReader;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (long long)fragmentCount;
- (BOOL)_hasQTSaveRestriction;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (long long)trackCount;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (float)preferredSoundCheckVolumeNormalization;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)lyrics;
- (struct CGSize { double x0; double x1; })naturalSize;
- (int)naturalTimeScale;
- (id)alternateTrackGroups;
- (BOOL)isReadable;
- (BOOL)providesPreciseDurationAndTiming;
- (unsigned long long)hash;
- (BOOL)canContainFragments;
- (BOOL)isComposable;
- (id)availableMetadataFormats;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsFragments;
- (long long)firstFragmentSequenceNumber;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (float)preferredVolume;
- (void)dealloc;
- (id)trackReferences;
- (BOOL)isExportable;
- (float)preferredRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0;

@end
