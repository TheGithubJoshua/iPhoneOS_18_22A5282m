@class PKPassBucketTemplate, NSMutableSet, UIImage, PKRemoveableAnimationTrackerStore, PKLiveRenderedCardFaceView, PKPaymentService, CAFilter, NSMutableArray, UIView, NSString, PKTransactionDataOverlayCardFaceView, PKDynamicLayerView, PKPassFaceViewRendererState, PKPassColorProfile, NSArray, PKPass, PKPassFaceTemplate, NSData, UIImageView;
@protocol PKPassFaceViewDelegate;

@interface PKPassFaceView : WLEasyToHitCustomView <PKPaymentServiceDelegate, PKForegroundActiveArbiterObserver> {
    PKPass *_pass;
    PKPassColorProfile *_colorProfile;
    NSMutableSet *_headerInvariantViews;
    NSMutableSet *_bodyInvariantViews;
    NSMutableSet *_headerContentViews;
    NSMutableSet *_bodyContentViews;
    struct { unsigned char showingHeader : 1; unsigned char showingBody : 1; unsigned char showsLiveRendering : 1; unsigned char effectiveShowsLiveRendering : 1; unsigned char showsBackgroundView : 1; unsigned char effectiveShowsBackgroundView : 1; unsigned char backgroundModeSet : 1; unsigned char cachedFaceImageLoaded : 1; unsigned char faceImageLoading : 1; unsigned char partialFaceImageLoading : 1; } _flags;
    UIView *_contentView;
    UIImageView *_backgroundPlaceholderView;
    UIImageView *_shadowBackgroundView;
    UIImage *_placeholderFaceImage;
    UIImage *_faceImage;
    UIImage *_faceShadowImage;
    UIImage *_partialFaceImage;
    CAFilter *_dimmingFilter;
    double _dimmer;
    NSMutableArray *_bodyBucketViews;
    PKRemoveableAnimationTrackerStore *_delayedAnimations;
    PKLiveRenderedCardFaceView *_liveBackgroundView;
    PKTransactionDataOverlayCardFaceView *_transactionDataOverlayView;
    PKDynamicLayerView *_dynamicCardView;
    unsigned long long _contentViewCreatedRegions;
    unsigned long long _invariantViewCreatedRegions;
    BOOL _foregroundActive;
    PKPaymentService *_paymentService;
    BOOL _paused;
}

@property (retain, nonatomic) NSMutableArray *headerBucketViews;
@property (readonly, nonatomic) PKPassFaceTemplate *faceTemplate;
@property (readonly, nonatomic) PKPassBucketTemplate *headerBucketTemplate;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (readonly, nonatomic) struct CGSize { double width; double height; } cobrandLogoSize;
@property (readonly, nonatomic) UIImageView *backgroundView;
@property (readonly, nonatomic) PKPass *pass;
@property (readonly, nonatomic) PKPassColorProfile *colorProfile;
@property (readonly, nonatomic) NSArray *buckets;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (nonatomic) long long backgroundMode;
@property (nonatomic) unsigned long long visibleRegions;
@property (nonatomic) BOOL modallyPresented;
@property (nonatomic) BOOL clipsContent;
@property (nonatomic) double clippedContentHeight;
@property (readonly, nonatomic) BOOL bodyContentCreated;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } shadowInsets;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic) BOOL showsLiveRendering;
@property (nonatomic) BOOL liveMotionEnabled;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) PKPassFaceViewRendererState *rendererState;
@property (nonatomic) BOOL viewExpanded;
@property (copy, nonatomic) NSData *dynamicBarcodeData;
@property (weak, nonatomic) id<PKPassFaceViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_faceClassForStyle:(long long)a0;
+ (id)newFrontFaceViewForStyle:(long long)a0;

- (id)initWithCoder:(id)a0;
- (void)didInvalidate;
- (id)init;
- (id)initWithStyle:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)_handleTimeOrLocaleChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didPresent;
- (void)didDismiss;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didAuthenticate;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (void)_createDimmingFilterIfNecessary;
- (void)_createBucketsIfNecessary;
- (void)_createContentViewsForRegions:(unsigned long long)a0;
- (void)_createInvariantViewsForRegions:(unsigned long long)a0;
- (void)_flushContentViewsForRegions:(unsigned long long)a0;
- (void)_loadFaceImageIfNecessary;
- (void)_presentDiffRecursivelyDiff:(id)a0 forBucketAtIndex:(unsigned long long)a1 withBuckets:(id)a2 completion:(id /* block */)a3;
- (void)_recreateFieldDerivedContent;
- (id)_relevantBuckets;
- (void)_setBalances:(id)a0;
- (void)_setContentViewsAlpha:(double)a0;
- (void)_setShowsBackgroundView:(BOOL)a0;
- (void)_setShowsBodyViews:(BOOL)a0;
- (void)_setShowsHeaderViews:(BOOL)a0;
- (void)_updateEffectiveShowsBackgroundView;
- (void)_updateForeignBalances;
- (id)_viewSetForContentViewType:(long long)a0;
- (void)createBodyContentViews;
- (void)createBodyInvariantViews;
- (void)createContentViewsWithFade:(BOOL)a0;
- (void)createHeaderContentViews;
- (void)createHeaderInvariantViews;
- (void)didTransact;
- (id)headerTemplate;
- (void)insertContentView:(id)a0 ofType:(long long)a1;
- (id)passFaceTemplate;
- (void)presentDiff:(id)a0 completion:(id /* block */)a1;
- (void)removeContentView:(id)a0 ofType:(long long)a1;
- (void)setDimmer:(double)a0 animated:(BOOL)a1;
- (void)setPass:(id)a0 colorProfile:(id)a1;
- (void)setShowsLiveRendering:(BOOL)a0 rendererState:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })shadowBackgroundInsets;
- (void)updateShadow:(double)a0 animated:(BOOL)a1 withDelay:(double)a2;

@end