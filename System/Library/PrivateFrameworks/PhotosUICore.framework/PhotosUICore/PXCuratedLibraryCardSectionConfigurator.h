@class PXCuratedLibraryCardSectionBodyLayoutSpec;

@interface PXCuratedLibraryCardSectionConfigurator : PXAssetsSectionConfigurator

@property (readonly, nonatomic) PXCuratedLibraryCardSectionBodyLayoutSpec *cardSpec;

- (id)createCardSpecWithExtendedTraitCollection:(id)a0;
- (void)configureAssetSectionLayout:(id)a0;
- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 assetsSectionLayoutSpec:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerInsets;

@end
