@class NSDictionary;

@interface PXRemoveAssetsFromAssetCollectionAction : PXAssetsSelectionAction {
    NSDictionary *_removedAssetIdentifiers;
    NSDictionary *_removedAssetIndexes;
}

- (id)actionIdentifier;
- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (void)performUndo:(id /* block */)a0;

@end
