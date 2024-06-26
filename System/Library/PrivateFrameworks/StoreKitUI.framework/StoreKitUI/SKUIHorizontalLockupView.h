@class SKUIPreviewProgressIndicator, SUPlayerStatus, NSMapTable, SKUILockupViewElement, SKUIHorizontalLockupLayout, UITapGestureRecognizer, NSMutableArray, UIView, SKUIPlayButton, NSString, UIColor, NSHashTable, SKUIBadgeViewElement, SKUIGradientView;

@interface SKUIHorizontalLockupView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIOfferViewDelegate, SKUIMediaPlayerObserver, SKUIToggleButtonDelegate, UIGestureRecognizerDelegate, SKUIPerspectiveView, SKUIPreviewContainerView, SKUIViewElementView> {
    NSHashTable *_artworkRelatedChildViewElementViews;
    SKUIBadgeViewElement *_badge;
    NSMapTable *_buyButtonDescriptorToButton;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    NSMapTable *_cacheKeyToImageView;
    SUPlayerStatus *_lastPlayerStatus;
    SKUIHorizontalLockupLayout *_layout;
    SKUILockupViewElement *_lockupElement;
    SKUIGradientView *_offerConfirmationGradientView;
    NSHashTable *_offerViews;
    SKUIPlayButton *_playButton;
    SKUIPreviewProgressIndicator *_previewProgressIndicator;
    long long _previewState;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_tappableViews;
    BOOL _useClearBackground;
    NSMapTable *_viewElementViews;
}

@property (retain, nonatomic) UIView *metadataBackgroundView;
@property (retain, nonatomic) UIColor *gradientColor;
@property (nonatomic) BOOL updateLayoutOnButtonConfirmation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_attributedStringForButton:(id)a0 context:(id)a1;
+ (id)_attributedStringForLabel:(id)a0 context:(id)a1;
+ (id)_attributedStringForOrdinal:(id)a0 context:(id)a1;
+ (void)_requestLayoutForViewElements:(id)a0 width:(double)a1 context:(id)a2;
+ (BOOL)_usesEditorialLayoutForLabelViewElement:(id)a0;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (void)setSemanticContentAttribute:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)preferredBackgroundColor;
- (void)setVanishingPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_columnForView:(id)a0;
- (double)_dividerHeight:(id)a0;
- (struct CGSize { double x0; double x1; })_sizeViewsForColumn:(id)a0 toFitWidth:(double)a1;
- (void)_animateButton:(id)a0;
- (void)offerViewWillAnimateTransition:(id)a0;
- (void)_addConfirmationGradientForView:(id)a0;
- (id)_addFlipContainerViewWithFrontView:(id)a0 backView:(id)a1;
- (void)_audioPlayerStatusChangeNotification:(id)a0;
- (void)_buttonAction:(id)a0;
- (void)_cancelConfirmationAction:(id)a0;
- (void)_expandEditorialForLabel:(id)a0;
- (void)_handlePlayButtonTap:(id)a0 element:(id)a1;
- (void)_layoutConfirmationGradientRelativeToItemOfferView:(id)a0 alpha:(double)a1;
- (void)_performDefaultActionForImage:(id)a0;
- (id)_previewFrontView;
- (void)_previewIndicatorAction:(id)a0;
- (id)_previewMediaURL;
- (id)_previewProgressIndicator;
- (void)_resizeMetadataRelativeToItemOfferView:(id)a0;
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)a0;
- (void)_showConfirmationAction:(id)a0;
- (void)_tapGestureAction:(id)a0;
- (BOOL)_usesBackgroundWithAlpha;
- (id)_viewElementForView:(id)a0;
- (void)hidePreviewProgressAnimated:(BOOL)a0;
- (void)itemOfferButtonDidAnimateTransition:(id)a0;
- (void)itemOfferButtonWillAnimateTransition:(id)a0;
- (void)mediaPlayer:(id)a0 itemStateChanged:(id)a1;
- (BOOL)offerViewAnimateTransition:(id)a0;
- (void)offerViewDidAnimateTransition:(id)a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (void)setContainerBackgroundImageForPlayButton:(id)a0;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (void)setPerspectiveTargetView:(id)a0;
- (void)showPreviewProgressWithStatus:(id)a0 animated:(BOOL)a1;
- (void)toggleButtonDidAnimateTransition:(id)a0;
- (void)toggleButtonWillAnimateTransition:(id)a0;
- (void)togglePreviewPlaybackAnimated:(BOOL)a0;
- (void)updateForChangedDistanceFromVanishingPoint;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;

@end
