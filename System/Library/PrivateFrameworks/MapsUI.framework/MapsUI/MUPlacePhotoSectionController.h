@class UIImageView, MUPlaceSectionView, MUPlacePhotoSectionControllerConfiguration, MKLookAroundView, MKLookAroundContainerView, MUPlaceSectionHeaderViewModel, UIViewController, MUUserSubmittedPhoto, MUPlacePhotoGalleryViewController, UIView, MUPunchoutViewModel, NSString, MKUGCCallToActionViewAppearance, NSArray, MUPhotoSliderTileProvider, MUPlaceSectionFooterViewModel, MUPlacePhotoSliderView;
@protocol MUPlacePhotoSectionControllerDelegate, MUUserInformationProvider, MUPlacePhotoSectionControllerLookAroundDelegate, MUInfoCardAnalyticsDelegate;

@interface MUPlacePhotoSectionController : MUPlaceSectionController <MUPlacePhotoSliderDataSource, MUPlacePhotoSliderDelegate, MUPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MUPhotoGalleryTransitionAnimator, MUScrollAnalyticActionObserving, MKLookAroundContainerViewDelegate, MUPlaceSectionControlling> {
    MUPhotoSliderTileProvider *_photoTileProvider;
    MUPlacePhotoSliderView *_photoSliderView;
    MUPlacePhotoGalleryViewController *_photoGalleryViewController;
    UIImageView *_imageViewForTransition;
    MUPunchoutViewModel *_attributionViewModel;
    MUPunchoutViewModel *_addPhotoViewModel;
    MUPlaceSectionView *_sectionView;
    MKLookAroundContainerView *_lookAroundContainerView;
    MUPlacePhotoSectionControllerConfiguration *_configuration;
}

@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) long long contentVisibility;
@property (weak, nonatomic) id<MUPlacePhotoSectionControllerLookAroundDelegate> lookAroundDelegate;
@property (weak, nonatomic) id<MUPlacePhotoSectionControllerDelegate> photoSectionControllerDelegate;
@property (weak, nonatomic) id<MUUserInformationProvider> userInfoProvider;
@property (readonly, nonatomic) MKLookAroundView *lookAroundView;
@property (retain, nonatomic) MUUserSubmittedPhoto *userSubmittedPhoto;
@property (nonatomic) long long numberOfUserSubmittedPhotos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;

- (BOOL)isFirstParty;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)_update;
- (void)_setContentVisibility:(long long)a0;
- (id)draggableContent;
- (id)infoCardChildPossibleActions;
- (void)lookAroundContainerView:(id)a0 didAddLookAroundView:(id)a1;
- (void)_routeFlatListTapWithViewModel:(id)a0;
- (BOOL)dismissPhotoGalleryIfNecessary:(id)a0;
- (void)_addPhotoButtonTappedWithEntryPoint:(long long)a0 presentationOptions:(id)a1;
- (void)_capturePhotoGallerySwipeUserAction:(int)a0 atIndex:(unsigned long long)a1;
- (void)_captureSliderInstrumentationWithAction:(int)a0;
- (void)_captureSliderInstrumentationWithAction:(int)a0 eventValue:(id)a1 actionRichProviderId:(id)a2;
- (void)_populateRevealedAnalyticsModule:(id)a0;
- (void)_routeAlbumTapWithViewModel:(id)a0;
- (void)_setupSectionView;
- (int)analyticsModuleType;
- (id)attributionViewModelsForPhotoSliderView:(id)a0;
- (id)initWithMapItem:(id)a0 configuration:(id)a1;
- (BOOL)isImpressionable;
- (unsigned long long)numberOfAttributionsForPhotoSliderView:(id)a0;
- (void)performInstrumentationForScrollLeft;
- (void)performInstrumentationForScrollRight;
- (void)photoGalleryTransitionAnimatorDidFinishAnimation;
- (void)photoSliderView:(id)a0 didTapAttribution:(id)a1;
- (void)photoSliderView:(id)a0 didTapViewModel:(id)a1;
- (id)photoSliderView:(id)a0 photoOverlayForModel:(id)a1;
- (BOOL)photoSliderView:(id)a0 shouldShowFullWidthForModel:(id)a1;
- (void)photoSliderViewDidScroll:(id)a0;
- (void)photoSliderViewDidTapHeaderView:(id)a0;
- (id)photoSliderViewHeaderViewForPhotoSlider:(id)a0;
- (id)photoSliderViewRequestsViewModels:(id)a0;
- (void)placePhotoGallery:(id)a0 attributionViewTappedAtIndex:(unsigned long long)a1;
- (void)placePhotoGallery:(id)a0 didSelectReportImageAtIndex:(unsigned long long)a1;
- (void)placePhotoGallery:(id)a0 openButtonTappedAtIndex:(unsigned long long)a1;
- (void)placePhotoGallery:(id)a0 selectedAddPhotoWithEntryPoint:(long long)a1 usingPresentationOptions:(id)a2;
- (void)placePhotoGallery:(id)a0 willCloseAtIndex:(unsigned long long)a1;
- (void)placePhotoGalleryAdditionalViewTapped:(id)a0;
- (void)placePhotoGalleryDidCloseAtIndex:(unsigned long long)a0;
- (void)placePhotoGalleryDidScrollLeftToIndex:(unsigned long long)a0;
- (void)placePhotoGalleryDidScrollRightToIndex:(unsigned long long)a0;
- (id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)a0;
- (void)updateForAttributionChange;
- (void)updateWithContentVisibility:(long long)a0;
- (void)updateWithUserSubmittedPhotos:(BOOL)a0;

@end