@protocol PUInterfaceTheme;

@interface PUInterfaceManager : NSObject

@property (class, readonly) id<PUInterfaceTheme> currentTheme;

+ (void)_handleInteractionDisablingTimeoutForPhotoEditorSwitchingSource;
+ (void)_handleInteractionDisablingTimeoutForAlbumStackTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorToPhotoBrowserTransition;
+ (void)_handleInteractionDisablingTimeoutForOneUpToPhotoEditorTransition;
+ (BOOL)shouldUsePhoneLayoutWithTraitCollection:(id)a0;
+ (void)endDisablingUserInteraction:(id)a0;
+ (BOOL)shouldUseAccessibilityLargeTextLayoutWithTraitCollecton:(id)a0;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorSavingChanges;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectSuggestion;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectResult;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorWaitingToDismiss;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserZoomTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorRevertingChanges;
+ (void)_handleInteractionDisablingTimeoutForBurningInTrim;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorComputingAutoEnhance;
+ (id)beginDisablingUserInteractionForReason:(long long)a0;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeoutForOverOneUpTransition;
+ (void)_handleInteractionDisablingTimeoutForStartSlideshowFromGrid;
+ (void)_disabledUserInteractionRequestDidTimeOut:(id)a0;
+ (void)_handleInteractionDisablingTimeoutForBannerViewImagesJump;
+ (void)_handleInteractionDisablingTimeout;
+ (id)beginDisablingUserInteractionForReason:(long long)a0 withExpectedTimeout:(double)a1;

@end
