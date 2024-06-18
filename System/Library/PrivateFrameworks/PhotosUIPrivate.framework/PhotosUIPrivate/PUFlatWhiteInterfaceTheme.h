@class UIColor, UIFont, NSDictionary, UIImage, NSString;

@interface PUFlatWhiteInterfaceTheme : NSObject <PUInterfaceTheme>

@property (readonly, nonatomic) NSDictionary *sectionHeaderNotTappableTextAttributes;
@property (readonly, nonatomic) NSDictionary *textBlockBelowArtTitleTextAttributes;
@property (readonly, nonatomic) NSDictionary *textBlockBelowArtTitleEmphasizedTextAttributes;
@property (readonly, nonatomic) NSDictionary *textBlockBelowArtSubTitleTextAttributes;
@property (readonly, nonatomic) long long topLevelStatusBarStyle;
@property (readonly, nonatomic) UIColor *topLevelNavigationBarButtonTintColor;
@property (readonly, nonatomic) UIColor *photoCollectionViewBackgroundColor;
@property (readonly, nonatomic) int photoCollectionViewBackgroundColorValue;
@property (readonly, nonatomic) double photoCollectionToolbarTextTitleSpacerWidth;
@property (readonly, nonatomic) double photoCollectionToolbarIconToTextSpacerWidth;
@property (readonly, nonatomic) UIColor *albumListBackgroundColor;
@property (readonly, nonatomic) UIFont *albumListTitleLabelFont;
@property (readonly, nonatomic) UIFont *albumListSubtitleLabelFont;
@property (readonly, nonatomic) UIFont *albumListSectionTitleLabelFont;
@property (readonly, nonatomic) double albumListDisabledAlbumStackViewAlpha;
@property (readonly, nonatomic) double albumListDisabledAlbumTitleAlpha;
@property (readonly, nonatomic) UIColor *folderCellBackgroundColor;
@property (readonly, nonatomic) UIColor *placeholderCellBackgroundColor;
@property (readonly, nonatomic) UIColor *badgeOverThumbnailColor;
@property (readonly, nonatomic) UIColor *albumBadgeInTitleColor;
@property (readonly, nonatomic) UIColor *albumCornersBackgroundColor;
@property (readonly, nonatomic) double padAlbumCornerRadius;
@property (readonly, nonatomic) double phoneAlbumCornerRadius;
@property (readonly, nonatomic) double bannerHeight;
@property (readonly, nonatomic) UIColor *bannerBackgroundColor;
@property (readonly, nonatomic) long long photoBrowserStatusBarStyle;
@property (readonly, nonatomic) long long photoBrowserBarStyle;
@property (readonly, nonatomic) UIColor *photoBrowserChromeVisibleBackgroundColor;
@property (readonly, nonatomic) UIColor *photoBrowserChromeHiddenBackgroundColor;
@property (readonly, nonatomic) double videoPaletteSideMargin;
@property (readonly, nonatomic) double videoPaletteBottomMargin;
@property (readonly, nonatomic) NSDictionary *contentCommentsHiddenButtonTextAttributes;
@property (readonly, nonatomic) UIColor *contentCommentsHiddenButtonImageColor;
@property (readonly, nonatomic) NSDictionary *contentCommentsShownButtonTextAttributes;
@property (readonly, nonatomic) UIColor *contentCommentsShownButtonImageColor;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentCommentsButtonImageInset;
@property (readonly, nonatomic) NSDictionary *toolbarCommentsHiddenButtonTextAttributes;
@property (readonly, nonatomic) UIColor *toolbarCommentsHiddenButtonImageColor;
@property (readonly, nonatomic) NSDictionary *toolbarCommentsShownButtonTextAttributes;
@property (readonly, nonatomic) UIColor *toolbarCommentsShownButtonImageColor;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } commentsButtonTextInset;
@property (readonly, nonatomic) UIColor *toolbarAirPlayButtonColor;
@property (readonly, nonatomic) UIColor *photoBrowserTitleViewTextColor;
@property (readonly, nonatomic) UIColor *photoBrowserTitleViewTappableTextColor;
@property (readonly, nonatomic) UIColor *photoBrowserSpotlightThemeColor;
@property (readonly, nonatomic) UIFont *photoBrowserPhotoPrimaryTitleFont;
@property (readonly, nonatomic) UIFont *photoBrowserPhotoSubtitleFont;
@property (readonly, nonatomic) UIFont *photoBrowserTimeTitleFont;
@property (readonly, nonatomic) UIColor *playheadColor;
@property (readonly, nonatomic) UIColor *playheadOutlineColor;
@property (readonly, nonatomic) UIColor *playheadBackgroundColor;
@property (readonly, nonatomic) UIColor *videoScrubberTileBackgroundColor;
@property (readonly, nonatomic) UIFont *playbackTimeLabelFont;
@property (readonly, nonatomic) UIColor *playbackTimeLabelBackgroundColor;
@property (readonly, nonatomic) UIColor *scrubberPlaceholderColor;
@property (readonly, nonatomic) UIImage *compactLoadErrorIcon;
@property (readonly, nonatomic) UIImage *regularLoadErrorIcon;
@property (readonly, nonatomic) UIImage *airPlayVideoPlaceholderIcon;
@property (readonly, nonatomic) UIColor *airPlayVideoPlaceholderIconTintColor;
@property (readonly, nonatomic) UIColor *airPlayVideoPlaceholderBackgroundColor;
@property (readonly, nonatomic) UIColor *airPlayVideoPlaceholderTitleTextColor;
@property (readonly, nonatomic) UIColor *airPlayVideoPlaceholderMessageTextColor;
@property (readonly, nonatomic) UIFont *airPlayVideoPlaceholderTitleFont;
@property (readonly, nonatomic) UIFont *airPlayVideoPlaceholderMessageFont;
@property (readonly, nonatomic) UIColor *airPlayControllerBackgroundColor;
@property (readonly, nonatomic) UIColor *photoEditingToolButtonColor;
@property (readonly, nonatomic) UIColor *photoEditingBackgroundColor;
@property (readonly, nonatomic) UIColor *photoEditingPopoverBackgroundColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarSecondaryButtonColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarMainButtonColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarDestructiveButtonColor;
@property (readonly, nonatomic) UIFont *photoEditingToolbarButtonNormalFont;
@property (readonly, nonatomic) UIFont *photoEditingToolbarButtonCompactFont;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsToolBackgroundColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarBackgroundColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsModeLabelColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarMainColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarHighlightColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarDisabledColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarCurrentPositionMarkerColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarOriginalPositionMarkerColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarSuggestedMarkerColor;
@property (readonly, nonatomic) UIFont *photoEditingAdjustmentsModeLabelFont;
@property (readonly, nonatomic) UIFont *photoEditingAdjustmentsModePickerFont;
@property (readonly, nonatomic) UIFont *photoEditingAdjustmentsModePickerValueFont;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsModePickerValueColor;
@property (readonly, nonatomic) UIColor *photoEditingAdjustmentsBarPlayheadColor;
@property (readonly, nonatomic) UIColor *photoEditingTooltipColor;
@property (readonly, nonatomic) UIFont *photoEditingTooltipFont;
@property (readonly, nonatomic) UIColor *photoEditingOverlayBadgeColor;
@property (readonly, nonatomic) UIColor *photoEditingOverlayBadgeBackgroundColor;
@property (readonly, nonatomic) UIFont *photoEditingOverlayBadgeFont;
@property (readonly, nonatomic) UIColor *photoEditingInactiveFilterTitleColor;
@property (readonly, nonatomic) UIColor *photoEditingActiveFilterTitleColor;
@property (readonly, nonatomic) UIFont *photoEditingFilterTitleFont;
@property (readonly, nonatomic) UIColor *photoEditingToolbarButtonColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarButtonSelectedColor;
@property (readonly, nonatomic) UIColor *photoEditingCropTiltWheelColor;
@property (readonly, nonatomic) UIFont *photoEditingCropTiltWheelFont;
@property (readonly, nonatomic) UIFont *photoEditingCropToggleButtonFont;
@property (readonly, nonatomic) UIColor *photoEditingCropToggleButtonColor;
@property (readonly, nonatomic) UIColor *photoEditingAutoEnhanceEnabledColor;
@property (readonly, nonatomic) UIColor *photoEditingAutoEnhanceDisabledColor;
@property (readonly, nonatomic) UIColor *photoEditingIrisEnabledColor;
@property (readonly, nonatomic) UIColor *photoEditingIrisDisabledColor;
@property (readonly, nonatomic) UIColor *photoEditingDepthButtonEnabledColor;
@property (readonly, nonatomic) UIColor *photoEditingDepthButtonDisabledColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarLightGradientStartColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarLightGradientEndColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarUltralightGradientStartColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarUltralightGradientEndColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarDarkGradientStartColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarDarkGradientEndColor;
@property (readonly, nonatomic) UIColor *photoEditingToolbarUnderlineColor;
@property (readonly, nonatomic) UIColor *photoEditingKeyPhotoSelectionNormalColor;
@property (readonly, nonatomic) UIColor *topToolbarToolLabelButtonColor;
@property (readonly, nonatomic) UIFont *topToolbarToolLabelFont;
@property (readonly, nonatomic) UIColor *videoEditingBackgroundColor;
@property (readonly, nonatomic) UIFont *videoEditingToolbarButtonNormalFont;
@property (readonly, nonatomic) UIColor *videoEditingToolbarMainButtonColor;
@property (readonly, nonatomic) UIColor *videoEditingToolbarDestructiveButtonColor;
@property (readonly, nonatomic) UIColor *videoEditingToolbarSecondaryButtonColor;
@property (readonly, nonatomic) UIColor *videoEditingToolbarToolButtonColor;
@property (readonly, nonatomic) UIColor *cloudFeedBackgroundColor;
@property (readonly, nonatomic) UIColor *cloudFeedSeparatorColor;
@property (readonly, nonatomic) double cloudFeedSeparatorHeight;
@property (readonly, nonatomic) NSDictionary *cloudFeedDefaultTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedEmphasizedTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedWhiteDefaultTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedWhiteEmphasizedTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedLargerDefaultTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedLargerEmphasizedTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedInvitationTitleTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedInvitationSubtitleTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedInteractionTextAttributes;
@property (readonly, nonatomic) NSDictionary *cloudFeedInteractionLargerTextAttributes;
@property (readonly, nonatomic) UIImage *cloudFeedSectionHeaderBackgroundImage;
@property (readonly, nonatomic) UIFont *sharedAlbumCommentCardTitleFont;
@property (readonly, nonatomic) UIFont *sharedAlbumCommentCardTextFont;
@property (readonly, nonatomic) UIFont *sharedAlbumCommentCardButtonFont;
@property (readonly, nonatomic) UIFont *sharedAlbumCommentCardAlbumTitleFont;
@property (readonly, nonatomic) UIFont *searchRecentLabelFont;
@property (readonly, nonatomic) UIColor *searchRecentLabelTextColor;
@property (readonly, nonatomic) UIFont *searchTitleLabelFont;
@property (readonly, nonatomic) UIFont *searchItalicTitleLabelFont;
@property (readonly, nonatomic) UIFont *searchSubtitleLabelFont;
@property (readonly, nonatomic) UIColor *searchSubtitleTextColor;
@property (readonly, nonatomic) UIFont *searchResultCountLabelFont;
@property (readonly, nonatomic) UIColor *searchResultCountTextColor;
@property (readonly, nonatomic) double searchSingleTitleTopBaselineDistance;
@property (readonly, nonatomic) double searchSingleTitleBottomBaselineDistance;
@property (readonly, nonatomic) double searchTitleTopBaselineDistance;
@property (readonly, nonatomic) double searchTitleSubtitleBaselineDistance;
@property (readonly, nonatomic) double searchSubtitleBottomBaselineDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_fontDescriptorWithTextStyle:(id)a0 addingSymbolicTraits:(unsigned int)a1;
- (id)searchItalicTitleAttributes;
- (id)searchTitleLabelHighlightedFont;
- (id)_commentsFont;
- (id)_themeImageWithBaseName:(id)a0;
- (id)attributedStringForCloudFeedGroupHeaderWithText:(id)a0;
- (id)commentsButtonStringForCount:(long long)a0;
- (void)configureAlbumListSectionTitleLabel:(id)a0;
- (void)configureAlbumListStackViewPhonePhotoDecoration:(id)a0;
- (void)configureAlbumListSubtitleLabel:(id)a0 asOpaque:(BOOL)a1;
- (void)configureAlbumListTitleLabel:(id)a0 asOpaque:(BOOL)a1;
- (void)configureAlbumListTitleTextField:(id)a0 asOpaque:(BOOL)a1;
- (void)configureBannerLabel:(id)a0;
- (void)configureBannerStackView:(id)a0;
- (void)configureCloudFeedCommentButton:(id)a0 withCount:(long long)a1;
- (void)configureCloudFeedGroupHeaderTextCell:(id)a0 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 withText:(id)a2;
- (void)configureCloudFeedInvitationReplyButton:(id)a0;
- (void)configureCloudFeedSectionHeaderTextCell:(id)a0 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 descriptionAttributedText:(id)a2 detailAttributedText:(id)a3;
- (void)configureCloudFeedStackView:(id)a0 withStackSize:(struct CGSize { double x0; double x1; })a1;
- (void)configureCompactProgressIndicatorMessageLabel:(id)a0;
- (void)configureEditPluginListCellLabel:(id)a0;
- (void)configureEditPluginListNavigationController:(id)a0;
- (void)configureEditPluginNavigationController:(id)a0;
- (void)configureEditPluginUserDefaultsAccessorySwitch:(id)a0;
- (void)configureEditPluginUserDefaultsCell:(id)a0 withIcon:(id)a1 title:(id)a2;
- (void)configureEditPluginUserDefaultsTableView:(id)a0;
- (void)configureMapViewAnnotationCountLabel:(id)a0;
- (void)configureProgressIndicatorMessageLabel:(id)a0;
- (void)configureSearchResultCountLabel:(id)a0;
- (void)configureSearchSubtitleLabel:(id)a0;
- (void)configureSearchTitleLabel:(id)a0;
- (id)createCloudFeedCommentButton;
- (id)photoCollectionCloudQuotaBannerBackgroundColorHighlighted:(BOOL)a0;
- (id)photoCollectionCloudQuotaBannerFont;
- (id)photoCollectionCloudQuotaBannerLinkTextColorHighlighted:(BOOL)a0;
- (id)photoCollectionCloudQuotaBannerLinkTextFont;
- (long long)photoCollectionCloudQuotaBannerTextAlignment;
- (id)photoCollectionCloudQuotaBannerTextColorHighlighted:(BOOL)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })photoCollectionCloudQuotaBannerTextMargins;
- (id)searchDefaultAttributes;
- (id)searchDimmedAttributes;
- (id)searchTitleDimmedTextColor;
- (id)searchTitleTextColor;
- (id)themeImagePrefix;
- (id)tintColorForBarStyle:(long long)a0;
- (id)topLevelNavigationBarBackButtonBackgroundImageForState:(unsigned long long)a0 barMetrics:(long long)a1;
- (id)topLevelNavigationBarButtonBackgroundImageForState:(unsigned long long)a0 barMetrics:(long long)a1;
- (struct UIOffset { double x0; double x1; })topLevelNavigationBarButtonTitlePositionAdjustmentforBarMetrics:(long long)a0;
- (id)topLevelNavigationBarButtonTitleTextAttributesForState:(unsigned long long)a0;
- (id)topLevelNavigationBarDoneButtonBackgroundImageForState:(unsigned long long)a0 barMetrics:(long long)a1;
- (id)topLevelNavigationBarDoneButtonTitleTextAttributesForState:(unsigned long long)a0;

@end