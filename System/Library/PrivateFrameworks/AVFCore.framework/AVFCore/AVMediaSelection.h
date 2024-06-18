@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal *_mediaSelection;
}

@property (readonly, weak, nonatomic) AVAsset *asset;

- (id)propertyList;
- (id)_internal;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_groupDictionaries;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)a0;
- (unsigned long long)hash;
- (id)_initWithAsset:(id)a0 selectedMediaArray:(id)a1;
- (void)_loadiVarsIfNeeded;
- (id)_selectedMediaArray;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_initWithAssetWithoutGroupDictionaries:(id)a0;
- (id)_dictionaryGroupsWithSelectedOption;
- (id)_initWithAsset:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)a0;
- (void)dealloc;
- (id)_initWithDeferredLoadingOfAsset:(id)a0 selectedMediaArray:(id)a1;
- (void)_createDefaultMediaSelectionOptions;
- (id)initWithAsset:(id)a0 propertyList:(id)a1;

@end
