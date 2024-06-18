@class PFAssetBundle;

@interface PHImportAssetBundleAsset : PHImportAsset

@property (retain, nonatomic) PFAssetBundle *assetBundle;

- (id)creationDate;
- (id)assetDescription;
- (void).cxx_destruct;
- (id)timeZone;
- (id)title;
- (id)accessibilityDescription;
- (id)initWithAssetBundleAtURL:(id)a0 withImportSource:(id)a1;
- (id)keywordTitles;

@end
