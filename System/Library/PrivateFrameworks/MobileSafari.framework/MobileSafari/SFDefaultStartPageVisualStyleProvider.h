@class NSString, UIFont;

@interface SFDefaultStartPageVisualStyleProvider : NSObject <SFStartPageVisualStyleProviding>

@property (class, readonly, nonatomic) SFDefaultStartPageVisualStyleProvider *sharedProvider;

@property (readonly, nonatomic) double defaultRowSpacing;
@property (readonly, nonatomic) double sectionHeaderBottomGap;
@property (readonly, nonatomic) UIFont *sectionHeaderLargeTitleFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)overrideTraitCollectionFromProposedTraits:(id)a0 isShowingWallpaper:(BOOL)a1;
- (id)tintColorForSupplementaryActions;
- (long long)numberOfColumnsForSectionItemType:(long long)a0 sectionWidth:(double)a1 traitCollection:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionViewContentInsetsWithNavigationBarPosition:(long long)a0;
- (id)backgroundEffectForSupplementaryActions;
- (double)siteIconSizeForContainerSize:(struct CGSize { double x0; double x1; })a0;
- (double)rowSpacingForSectionItemType:(long long)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInsetsWithViewLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
