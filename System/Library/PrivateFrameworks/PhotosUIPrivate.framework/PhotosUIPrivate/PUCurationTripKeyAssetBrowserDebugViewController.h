@class NSString, PHFetchResult, NSDictionary, PHPhotosHighlight;

@interface PUCurationTripKeyAssetBrowserDebugViewController : PUPhotosAlbumViewController {
    NSString *_tripKeyAssetUUID;
    PHFetchResult *_childHighlights;
    NSDictionary *_iconicSceneScores;
}

@property (retain, nonatomic) PHPhotosHighlight *tripHighlight;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_update;
- (BOOL)updateSpec;

@end
