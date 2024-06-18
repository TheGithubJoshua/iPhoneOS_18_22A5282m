@class AVAssetTrack, NSDictionary, AVWeakReference;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
    id _groupID;
    AVAssetTrack *_track;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (int)trackID;
- (BOOL)isPlayable;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (id)group;
- (id)locale;
- (id)mediaType;
- (unsigned long long)hash;
- (id)availableMetadataFormats;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)_groupID;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (id)dictionary;
- (id)_track;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (BOOL)displaysNonForcedSubtitles;
- (id)mediaSubTypes;
- (id)track;

@end
