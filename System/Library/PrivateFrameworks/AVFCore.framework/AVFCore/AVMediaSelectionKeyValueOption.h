@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (BOOL)isPlayable;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (id)group;
- (id)locale;
- (id)mediaType;
- (unsigned long long)hash;
- (id)availableMetadataFormats;
- (BOOL)isEqual:(id)a0;
- (id)_groupMediaType;
- (void)dealloc;
- (id)_groupID;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (id)dictionary;

@end
