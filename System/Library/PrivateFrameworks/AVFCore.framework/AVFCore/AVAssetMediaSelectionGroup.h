@class AVAsset, NSDictionary, NSArray, AVMediaSelectionOption;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_groupMediaCharacteristics;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
    BOOL _isStreamingGroup;
}

- (id)init;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1;
- (id)options;
- (id)_optionWithID:(id)a0 identifier:(id)a1 source:(id)a2 displaysNonForcedSubtitles:(BOOL)a3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_groupMediaCharacteristics;
- (id)asset;
- (BOOL)_isStreamingGroup;
- (id)initWithAsset:(id)a0 dictionary:(id)a1;
- (void)dealloc;
- (id)defaultOption;
- (id)dictionary;

@end
