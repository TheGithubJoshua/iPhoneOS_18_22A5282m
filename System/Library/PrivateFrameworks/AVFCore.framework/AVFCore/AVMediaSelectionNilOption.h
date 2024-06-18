@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (BOOL)isPlayable;
- (id)group;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_groupMediaType;
- (void)dealloc;
- (id)_groupID;
- (id)dictionary;
- (id)initWithGroup:(id)a0;
- (BOOL)_representsNilSelection;

@end
