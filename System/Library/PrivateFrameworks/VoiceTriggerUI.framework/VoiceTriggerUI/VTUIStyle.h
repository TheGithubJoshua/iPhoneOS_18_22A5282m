@class NSArray, NSString, UIFontMetrics, MGWrapper;

@interface VTUIStyle : NSObject {
    NSArray *_deviceStringSuffixes;
    NSString *_deviceClass;
    BOOL _isIpad;
    BOOL _isLargeIpad;
    BOOL _needMoreLineSpacing;
    BOOL _supportsSideButtonActivation;
    UIFontMetrics *_bodyMetricsForScaling;
    MGWrapper *_mgWrapper;
}

@property (nonatomic) long long enrollmentMode;
@property (nonatomic) BOOL isBuddyOrFollowUp;
@property (nonatomic) BOOL isHeySiriAlwaysOn;
@property (nonatomic) BOOL bluetoothDeviceSupportsHeySiri;
@property (nonatomic) BOOL supportSideButtonActivation;
@property (nonatomic) BOOL isFloatingWithReducedWidth;
@property (nonatomic) long long audioProductID;

+ (id)sharedStyle;

- (id)init;
- (double)horizontalPadding;
- (id)buttonTextColor;
- (void).cxx_destruct;
- (void)dealloc;
- (id)subtitleFont;
- (id)dynamicColorWithLightColor:(id)a0 darkColor:(id)a1;
- (id)footerFont;
- (id)paneBackgroundColor;
- (id)footerButtonFont;
- (id)primaryButtonFont;
- (double)PRXdismissButtonDefaultMargin;
- (double)PRXdismissButtonMargin;
- (id)PRXheaderFont;
- (double)PRXtitleTopPadding;
- (id)footerTextColor;
- (double)orbImagePadding;
- (id)proxHeaderColor;
- (id)PRXcancelFont;
- (double)PRXdismissButtonEdgeToEdgeMargin;
- (id)PRXheaderColor;
- (id)PRXpageFont;
- (id)ProxCardKitTitleFontDescriptor;
- (id)deviceSpecificString:(id)a0 siriVoice:(id)a1;
- (id)footerLabelFont;
- (double)orbImageOffsetFromTopEnrollment;
- (id)VTUIDeviceSpecificAudioHintFileName:(id)a0;
- (id)VTUIDeviceSpecificString:(id)a0;
- (id)_appendDeviceSpecificStrings:(id)a0;
- (void)_createStringSuffixesForDevice;
- (double)bottomOfContinueToNotNowFirstBaseline;
- (double)continueButtonFromBottom;
- (double)continueButtonOffset;
- (double)continueButtonPaddingTop;
- (id)educationAssetNameForTraitCollection:(id)a0;
- (struct CGSize { double x0; double x1; })educationAssetSize;
- (float)educationAssetTopPadding;
- (id)educationViewDetailText;
- (id)educationViewTitleText;
- (double)finishEnrollmentFromBottom;
- (double)footerButtonMaximumWidth;
- (double)footerHorizontalPadding;
- (double)footerSkipButtonBaselineFromBottom;
- (double)footerTextBaselineFromTop;
- (double)footerTextBottomPadding;
- (double)headerTitleLinespacing;
- (id)homeAppTintColor;
- (double)horizontalPaddingLandscape;
- (double)horizontalPaddingPortrait;
- (double)horizontalTextPadding;
- (double)imageViewTopOffsetLandscape;
- (double)imageViewTopOffsetPortrait;
- (id)instructionLabelFont;
- (BOOL)isEdgeToEdgePhone;
- (BOOL)isGreenTeaCapableDevice;
- (BOOL)isSmallestOnboardingDeviceInBuddy;
- (double)laterButtonBaselinePadding;
- (double)minimumImageViewHeight;
- (double)orbImageLength;
- (double)orbLength;
- (double)orbOffsetFromTopEnrollment;
- (double)orbOffsetFromTopTraining;
- (double)paddingFromTop;
- (double)primaryButtonHeight;
- (double)primaryButtonHorizontalInset;
- (double)proxAboutLinkFirstBaselineFromTop;
- (double)proxBottomPaddingVoiceSelectionOptions;
- (id)proxCancelFont;
- (double)proxChooseForMeTopPaddingFromContinueButton;
- (double)proxContainerCornerRadius;
- (double)proxContainerHorizontalVerticalPadding;
- (id)proxFooterFont;
- (id)proxHSDescription:(id)a0;
- (id)proxHeaderFont;
- (double)proxIntroOrbFromTopLandscape;
- (double)proxIntroOrbImageFromTopLandscape;
- (double)proxIntroTitleFromTop;
- (double)proxIntroTitleFromTopLandscape;
- (double)proxLeading;
- (double)proxLeadingLandscape;
- (double)proxPaddingDataSharingSubtitle;
- (double)proxPaddingFootnoteButton;
- (double)proxPaddingFromBottom;
- (double)proxPaddingFromTop;
- (double)proxPaddingIntroSubtitle;
- (double)proxPaddingIntroSubtitleLandscape;
- (double)proxPaddingSkipButtonPageLabel;
- (double)proxPaddingSuccessFromBottom;
- (double)proxPaddingSuccessFromBottomLandscape;
- (double)proxPaddingSuccessSubtitle;
- (double)proxPaddingSuccessTitleLandscape;
- (double)proxPaddingTrainingTitle;
- (double)proxPaddingTrainingTitleLandscape;
- (double)proxPaddingTryAgainTitleLandscape;
- (double)proxPageFirstBaselineBottom;
- (id)proxPageFont;
- (id)proxPageLabelColor;
- (id)proxPrimaryButtonColor;
- (id)proxPrimaryButtonFont;
- (double)proxPrimaryButtonHeight;
- (double)proxSettingsLabelBottomMargin;
- (double)proxSiriLogoHeightWidth;
- (double)proxSiriLogoHeightWidthSmall;
- (double)proxSkipButtonBaselineBottomMargin;
- (double)proxStatusLabelMaxHeight;
- (id)proxSubtitleColor;
- (id)proxSubtitleFont;
- (double)proxTitleFirstBaselineFromTop;
- (double)proxTitleTrailingLandscape;
- (double)proxTopPaddingVoiceSelectionOptions;
- (double)proxTrailing;
- (double)proxTrailingLandscape;
- (double)proxTrainingDismissButtonHorizontalPadding;
- (double)proxTrainingDismissButtonPhoneLandscapeHorizontalPadding;
- (double)proxTrainingDismissButtonVerticalPaddingBottom;
- (double)proxTrainingDismissButtonVerticalPaddingTop;
- (double)proxTrainingDismissButtonWidthOrHeight;
- (double)proxTrainingInstructionLabelHoriztonalOffset;
- (double)proxViewHeight;
- (double)proxViewHeightPhoneLandscape;
- (double)proxViewLanguageOptionsHeight;
- (double)proxViewLanguageOptionsHeightPhoneLandscape;
- (double)proxViewMaxWidth;
- (double)proxViewMaxWidthPhoneLandscape;
- (double)radarBtnHorizontalPadding;
- (double)radarBtnVerticalPadding;
- (double)secondaryButtonBaselinePadding;
- (id)secondaryButtonFont;
- (BOOL)shouldPresentEducationView;
- (double)skipButtonBaselineBottomMarginLandscape;
- (double)skipButtonBaselineBottomMarginPortrait;
- (id)smallestDeviceOnboardingAsset;
- (double)statusLabelMinHeight;
- (double)statusLabelVerticalOffsetFromCenter;
- (double)subtitle1BaselineOffset;
- (double)subtitle2BaselineOffset;
- (BOOL)supportsSideButtonActivation;
- (double)textOverlayLabelWidth;
- (double)textOverlayOffsetFromTop;
- (double)titleBaselineOffsetFromTop;
- (double)titleOffsetFromOrb;
- (double)titleOffsetFromOrbImage;
- (id)turnOnSiriContinueButtonFont;
- (double)turnOnSiriContinueButtonHeight;
- (double)turnOnSiriContinueButtonWidth;
- (double)turnOnSiriFooterOffset;
- (double)turnOnSiriHorizontalPaddingLandscape;
- (double)turnOnSiriHorizontalPaddingPortrait;
- (double)turnOnSiriImageOffsetFromTopLandscape;
- (double)turnOnSiriImageOffsetFromTopPortrait;
- (double)turnOnSiriImageViewTopOffset;
- (double)turnOnSiriSubtitle1BaselineOffset;
- (double)turnOnSiriSubtitle2BaselineOffset;

@end