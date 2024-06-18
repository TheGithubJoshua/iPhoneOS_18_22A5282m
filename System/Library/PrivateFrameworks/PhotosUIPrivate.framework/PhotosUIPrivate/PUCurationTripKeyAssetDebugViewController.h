@class PUCurationTripKeyAssetBrowserDebugViewController, PHFetchResult;

@interface PUCurationTripKeyAssetDebugViewController : PUPhotosAlbumViewController {
    PUCurationTripKeyAssetBrowserDebugViewController *_assetCollectionViewController;
    PHFetchResult *_tripHighlights;
}

- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)_fetchHighlights;
- (BOOL)updateSpec;

@end
