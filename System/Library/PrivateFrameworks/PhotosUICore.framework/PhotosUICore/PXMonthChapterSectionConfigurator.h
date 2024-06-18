@class PXCuratedLibraryChapterHeaderLayoutSpec, PXMonthCardSectionBodyLayoutSpec;

@interface PXMonthChapterSectionConfigurator : PXAssetsSectionConfigurator

@property (readonly, nonatomic) PXCuratedLibraryChapterHeaderLayoutSpec *chapterHeaderSpec;
@property (readonly, nonatomic) PXMonthCardSectionBodyLayoutSpec *cardBodySpec;

- (id)headerSpecForHeaderStyle:(long long)a0 assetSectionLayout:(id)a1;
- (id)updatedHeaderLayout:(id)a0 withHeaderStyle:(long long)a1 forAssetSectionLayout:(id)a2;
- (void)configureAssetSectionLayout:(id)a0;
- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 assetsSectionLayoutSpec:(id)a1;

@end
