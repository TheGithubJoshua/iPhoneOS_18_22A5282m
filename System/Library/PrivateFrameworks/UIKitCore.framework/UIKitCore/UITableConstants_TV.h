@class NSString;

@interface UITableConstants_TV : NSObject <UITableConstants>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConstants;

- (long long)defaultHeaderFooterPinningBehaviorForTableStyle:(long long)a0;
- (struct _UITableConstantsBackgroundProperties { BOOL x0; id x1; id x2; BOOL x3; long long x4; long long x5; double x6; double x7; BOOL x8; id x9; long long x10; double x11; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x12; })defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)a0 cellConfigurationState:(id)a1 traitCollection:(id)a2 floating:(BOOL)a3;
- (id)defaultCheckmarkImageForCell:(id)a0;
- (BOOL)useChromelessSectionHeadersAndFootersForTableStyle:(long long)a0;
- (id)_defaultDisclosureImageForCell:(id)a0;
- (double)defaultMarginWidthForTableView:(id)a0;
- (double)defaultSidebarPaddingAboveSectionHeadersWithFallbackTableStyle:(long long)a0;
- (id)_defaultCheckmarkImageForCell:(id)a0 forUserInterfaceStyle:(long long)a1;
- (id)_defaultInsertImageForUserInterfaceStyle:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_defaultLayoutMargins;
- (id)_defaultMultiSelectNotSelectedImageForUserInterfaceStyle:(long long)a0;
- (id)_defaultMultiSelectSelectedImageForUserInterfaceStyle:(long long)a0;
- (double)_defaultNeighborPadding;
- (id)_defaultReorderControlImageForUserInterfaceStyle:(long long)a0;
- (id)_kitImageNamed:(id)a0 withTint:(id)a1 flippedForRightToLeftLayoutDirection:(BOOL)a2;
- (double)_symbolImageLayoutSizeForTraitCollection:(id)a0;
- (id)_symbolImageNamed:(id)a0 font:(id)a1 cell:(id)a2;
- (id)defaultAccessoryBackgroundColorForAccessorySystemType:(long long)a0 header:(BOOL)a1 sidebarStyle:(BOOL)a2 cellConfigurationState:(id)a3 traitCollection:(id)a4;
- (id)defaultAccessoryTintColorForAccessorySystemType:(long long)a0 header:(BOOL)a1 sidebarStyle:(BOOL)a2 cellConfigurationState:(id)a3 traitCollection:(id)a4 inheritedTintColor:(id)a5;
- (double)defaultAlphaForDraggingCell:(id)a0 inTableView:(id)a1;
- (double)defaultAlphaForReorderingCell;
- (id)defaultBackgroundColorForTableViewStyle:(long long)a0;
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)a0;
- (struct _UITableConstantsBackgroundProperties { BOOL x0; id x1; id x2; BOOL x3; long long x4; long long x5; double x6; double x7; BOOL x8; id x9; long long x10; double x11; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x12; })defaultCellBackgroundPropertiesForTableViewStyle:(long long)a0 state:(id)a1;
- (double)defaultCellContentLeadingPaddingForSidebar:(BOOL)a0;
- (double)defaultCellContentTrailingPadding;
- (double)defaultCellCornerRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultCellLayoutMarginsForStyle:(long long)a0 textLabelFont:(id)a1 rawLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (double)defaultContentAccessoryPadding;
- (double)defaultContentEditPaddingForCell:(id)a0 inTableView:(id)a1;
- (double)defaultContentReorderPaddingForCell:(id)a0 inTableView:(id)a1;
- (id)defaultDeleteImageForCell:(id)a0;
- (id)defaultDeleteImageForUserInterfaceStyle:(long long)a0;
- (id)defaultDeleteImageWithTintColor:(id)a0 backgroundColor:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultDeleteMinusRectForCell:(id)a0 inTableView:(id)a1;
- (id)defaultDetailTextColorForCellStyle:(long long)a0 traitCollection:(id)a1 state:(id)a2;
- (id)defaultDetailTextColorForUserInterfaceStyle:(long long)a0;
- (id)defaultDetailTextFontForCellStyle:(long long)a0;
- (double)defaultDetailTextLabelFontSizeForCellStyle:(long long)a0;
- (id)defaultDisclosureImageForCell:(id)a0 withAccessoryBaseColor:(id)a1;
- (double)defaultDisclosureLayoutWidthForView:(id)a0;
- (double)defaultEditAndUpdateAnimationDuration;
- (double)defaultEditControlPaddingForCell:(id)a0 inTableView:(id)a1;
- (struct CGSize { double x0; double x1; })defaultEditControlSizeForCell:(id)a0 inTableView:(id)a1;
- (id)defaultFocusedCheckmarkImageForCell:(id)a0 inTableView:(id)a1;
- (id)defaultFocusedDeleteImageForCell:(id)a0 inTableView:(id)a1;
- (id)defaultFocusedDetailTextColorForCell:(id)a0 inTableView:(id)a1;
- (id)defaultFocusedDisclosureImageForCell:(id)a0 inTableView:(id)a1;
- (double)defaultFocusedHorizontalOutsetForTableView:(id)a0;
- (id)defaultFocusedInsertImageForCell:(id)a0 inTableView:(id)a1;
- (id)defaultFocusedMultiSelectNotSelectedImageForCell:(id)a0 inTableView:(id)a1;
- (id)defaultFocusedMultiSelectSelectedImageForCell:(id)a0 inTableView:(id)a1;
- (id)defaultFocusedReorderControlImageForCell:(id)a0 inTableView:(id)a1;
- (double)defaultFocusedShadowRadiusForTableView:(id)a0;
- (id)defaultFocusedTextColorForCell:(id)a0 inTableView:(id)a1;
- (id)defaultFooterFontForTableViewStyle:(long long)a0;
- (id)defaultFooterTextColorForTableViewStyle:(long long)a0 focused:(BOOL)a1;
- (id)defaultHeaderFontForTableViewStyle:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultHeaderFooterLayoutMarginsForTableViewStyle:(long long)a0 isHeader:(BOOL)a1 isFirstSection:(BOOL)a2;
- (id)defaultHeaderTextColorForTableViewStyle:(long long)a0 focused:(BOOL)a1;
- (id)defaultImageSymbolConfigurationForTraitCollection:(id)a0;
- (id)defaultImageTintColorForState:(id)a0;
- (double)defaultImageToTextPaddingForSidebar:(BOOL)a0;
- (double)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(BOOL)a0 traitCollection:(id)a1;
- (double)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(id)a0;
- (double)defaultIndentationWidthForSidebarStyle:(BOOL)a0;
- (id)defaultInsertImageForCell:(id)a0;
- (id)defaultInsertImageWithTintColor:(id)a0 backgroundColor:(id)a1;
- (double)defaultInterAccessoryPaddingForCell:(id)a0 trailingAccessoryGroup:(BOOL)a1;
- (BOOL)defaultLabelAllowsTighteningForTruncationForSidebar:(BOOL)a0 traitCollection:(id)a1;
- (double)defaultLabelMinimumScaleFactorForSidebar:(BOOL)a0 traitCollection:(id)a1;
- (long long)defaultLabelNumberOfLinesForSidebar:(BOOL)a0 traitCollection:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultLayoutMarginsForCell:(id)a0 inTableView:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultLayoutMarginsForTableView:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultLayoutMarginsInsideSectionForSize:(struct CGSize { double x0; double x1; })a0 tableStyle:(long long)a1;
- (double)defaultLeadingCellMarginWidthForTableView:(id)a0;
- (double)defaultMaskGradientHeightForTableView:(id)a0;
- (id)defaultMultiSelectBackgroundColorForCell:(id)a0 inTableView:(id)a1;
- (id)defaultMultiSelectNotSelectedImageForCellStyle:(long long)a0 traitCollection:(id)a1 accessoryBaseColor:(id)a2;
- (id)defaultMultiSelectSelectedImageForCellStyle:(long long)a0 traitCollection:(id)a1 checkmarkColor:(id)a2 backgroundColor:(id)a3;
- (double)defaultPaddingAboveFirstSectionWithoutHeaderTableStyle:(long long)a0;
- (double)defaultPaddingAboveSectionHeadersForTableStyle:(long long)a0;
- (double)defaultPaddingBetweenHeaderAndRows;
- (double)defaultPaddingBetweenRows;
- (double)defaultPaddingBetweenRowsForTableStyle:(long long)a0;
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)a0;
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)a0 headerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 textRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 isHeader:(BOOL)a3;
- (id)defaultReorderControlImageForTraitCollection:(id)a0 withAccessoryBaseColor:(id)a1;
- (struct CGSize { double x0; double x1; })defaultReorderControlSizeForCell:(id)a0 withAccessoryBaseColor:(id)a1;
- (BOOL)defaultRowHeightDependsOnCellStyle;
- (double)defaultRowHeightForTableView:(id)a0;
- (double)defaultRowHeightForTableView:(id)a0 cellStyle:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultSectionContentInsetsForTableStyle:(long long)a0;
- (double)defaultSectionFooterHeightForTableView:(id)a0;
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)a0 screen:(id)a1;
- (double)defaultSectionHeaderHeightForTableView:(id)a0;
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)a0 screen:(id)a1;
- (id)defaultSeparatorColorForTableViewStyle:(long long)a0;
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)a0;
- (struct _UITableConstantsBackgroundProperties { BOOL x0; id x1; id x2; BOOL x3; long long x4; long long x5; double x6; double x7; BOOL x8; id x9; long long x10; double x11; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x12; })defaultSidebarCellBackgroundPropertiesWithState:(id)a0 traitCollection:(id)a1 isAccompanied:(BOOL)a2;
- (struct _UITableConstantsBackgroundProperties { BOOL x0; id x1; id x2; BOOL x3; long long x4; long long x5; double x6; double x7; BOOL x8; id x9; long long x10; double x11; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x12; })defaultSidebarHeaderBackgroundPropertiesWithState:(id)a0 traitCollection:(id)a1;
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)a0 inTableView:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultTableLayoutMarginsForScreen:(id)a0 size:(struct CGSize { double x0; double x1; })a1 tableStyle:(long long)a2;
- (id)defaultTextColorForCellStyle:(long long)a0 traitCollection:(id)a1 tintColor:(id)a2 state:(id)a3;
- (id)defaultTextColorForUserInterfaceStyle:(long long)a0;
- (id)defaultTextLabelFontForCellStyle:(long long)a0;
- (double)defaultTextLabelFontSizeForCellStyle:(long long)a0;
- (double)defaultTextToSubtitlePaddingForCellStyle:(long long)a0;
- (double)defaultTrailingCellMarginWidthForTableView:(id)a0;
- (id)fallbackHeaderTextColorForTableViewStyle:(long long)a0 userInterfaceStyle:(long long)a1;
- (BOOL)imageViewOffsetByLayoutMarginsForCell:(id)a0 inTableView:(id)a1;
- (double)interspaceBetweenInnerAccessoryIdentifier:(id)a0 outerAccessoryIdentifier:(id)a1 forCell:(id)a2 trailingAccessoryGroup:(BOOL)a3;
- (double)minimumContentViewHeightForFont:(id)a0 traitCollection:(id)a1;
- (BOOL)reorderingCellWantsShadows;
- (BOOL)shouldAnimatePropertyInContentViewWithKey:(id)a0;
- (BOOL)shouldUppercaseHeaderFooterTextForTableStyle:(long long)a0 isHeader:(BOOL)a1;
- (BOOL)shouldUseDefaultTableLayoutMarginsAsContentInsets;
- (BOOL)shouldUseRoundedGroupsForTableViewStyle:(long long)a0 backgroundInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)sidebarVariant;
- (BOOL)supportsUserInterfaceStyles;
- (id)variantForActive:(BOOL)a0;

@end