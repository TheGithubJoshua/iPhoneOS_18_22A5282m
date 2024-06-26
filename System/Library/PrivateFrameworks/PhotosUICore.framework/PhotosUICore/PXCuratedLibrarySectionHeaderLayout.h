@class PXCuratedLibraryFilterActionPerformer, PXAssetCollectionReference, NSDictionary, NSObject, NSMutableIndexSet, PXCuratedLibraryEllipsisButtonActionPerformer, PXCuratedLibrarySectionHeaderLayoutSpec, PXCuratedLibraryActionPerformer, NSString, PXGLayoutGuide, NSSet, NSAttributedString, PXTitleSubtitleLabelSpec, PXNumberAnimator, NSArray;
@protocol OS_dispatch_queue;

@interface PXCuratedLibrarySectionHeaderLayout : PXGLayout <PXGTitleSubtitleSource, PXGViewSource, PXGNamedImageSource, PXChangeObserver, PXLibrarySummaryOutputPresenter> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned short _textVersion;
    unsigned short _ellipsisButtonVersion;
    unsigned short _filterButtonVersion;
    unsigned short _filterIndicatorButtonVersion;
    unsigned short _selectionTitleVersion;
    unsigned short _selectButtonVersion;
    unsigned short _cancelButtonVersion;
    unsigned short _toggleAspectFitButtonVersion;
    unsigned short _zoomInButtonVersion;
    unsigned short _zoomOutButtonVersion;
    unsigned short _controlStackButtonVersion;
    unsigned short _showSidebarButtonVersion;
    NSArray *_itemIdentifierBySpriteIndex;
    BOOL _presentedVisibility;
    BOOL _presentedTitleVisibility;
    NSMutableIndexSet *_axSpriteIndexes;
    unsigned short _gradientResizableCapInsetsIndex;
    struct CGSize { double width; double height; } _cachedSizeByButtonIdentifier[11];
    struct CGSize { double width; double height; } _cachedExternalTrailingButtonsSize;
    struct CGSize { double width; double height; } _cachedExternalLeadingButtonsSize;
    struct CGSize { double width; double height; } _cachedExternalTopButtonsSize;
    struct CGSize { double width; double height; } _cachedLongestPossibleSelectionTitleSize;
    long long _asyncDateGeneration;
    NSObject<OS_dispatch_queue> *_asyncDateQueue;
}

@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *effectiveSpec;
@property (readonly, nonatomic) PXTitleSubtitleLabelSpec *effectiveTitleSubtitleLabelSpec;
@property (readonly, nonatomic) PXTitleSubtitleLabelSpec *effectiveOverBackgroundTitleSubtitleLabelSpec;
@property (nonatomic) BOOL controlStackButtonSelected;
@property (nonatomic) BOOL usesCompactToggleAspectFitButton;
@property (readonly, nonatomic) unsigned long long toggleAspectFitButton;
@property (nonatomic) double buttonsMaxY;
@property (nonatomic) double titleSubtitleTopSpacing;
@property (nonatomic) double titleSubtitleLastBaseline;
@property (nonatomic) double gradientAlpha;
@property (readonly, nonatomic) PXNumberAnimator *alternateAppearanceMixAnimator;
@property (retain, nonatomic) PXGLayoutGuide *leadingButtonsLayoutGuide;
@property (retain, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *spec;
@property (nonatomic) double lateralMargin;
@property (nonatomic) double maxPossibleHeight;
@property (nonatomic) double alpha;
@property (nonatomic) double titleAlpha;
@property (nonatomic) double buttonsAlpha;
@property (nonatomic) BOOL wantsOverBackgroundAppearance;
@property (nonatomic) BOOL showsBackgroundGradient;
@property (nonatomic) BOOL showsDebugDescription;
@property (nonatomic) float buttonsZIndex;
@property (retain, nonatomic) PXCuratedLibraryEllipsisButtonActionPerformer *ellipsisButtonActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryFilterActionPerformer *filterActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *selectButtonActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *cancelButtonActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *zoomInButtonActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *zoomOutButtonActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *toggleAspectFitButtonActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *showSidebarButtonActionPerformer;
@property (copy, nonatomic) NSString *selectButtonTitle;
@property (copy, nonatomic) NSString *filterButtonCaption;
@property (copy, nonatomic) NSString *filterButtonTitle;
@property (nonatomic) BOOL ellipsisButtonHighlighted;
@property (nonatomic) BOOL filterButtonHighlighted;
@property (nonatomic) BOOL filterIndicatorButtonHighlighted;
@property (copy, nonatomic) NSString *selectionTitle;
@property (copy, nonatomic) NSString *longestPossibleSelectionTitle;
@property (copy, nonatomic) NSString *toggleAspectFitButtonTitle;
@property (copy, nonatomic) NSSet *toggleAspectFitButtonPossibleTitles;
@property (nonatomic) long long toggleAspectFitCompactButtonSymbol;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleSubtitleFrame;
@property (nonatomic) long long safeAreaBehavior;
@property (copy, nonatomic) NSArray *externalTrailingButtonConfigurations;
@property (copy, nonatomic) NSArray *externalLeadingButtonConfigurations;
@property (copy, nonatomic) NSArray *externalTopButtonConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL wantsDisclosureIndicator;
@property (readonly, nonatomic) NSDictionary *defaultAttributes;
@property (readonly, nonatomic) NSDictionary *emphasizedAttributes;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsWithCurrentBehavior;
- (struct CGSize { double x0; double x1; })_sizeOfButton:(unsigned long long)a0;
- (id)init;
- (id)imageConfigurationAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)configurationForButton:(unsigned long long)a0 spec:(id)a1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSpriteTags;
- (id)objectReferenceForSpriteIndex:(unsigned int)a0;
- (void)_updateLastBaseline;
- (void)_updateTitleAndSubtitle;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_selectionTitleLabelConfigurationWithTitle:(id)a0 spec:(id)a1;
- (void)referenceSizeDidChange;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (void)_invalidateFilterButton;
- (void)didRenderTitleAndSubtitleSpriteAtIndex:(unsigned int)a0 layoutVersion:(long long)a1 withLastBaseline:(double)a2;
- (void)alphaDidChange;
- (id)_configurationForButton:(unsigned long long)a0;
- (void)referenceOptionsDidChange;
- (id)_effectiveTitleSubtitleLabelSpec:(id)a0;
- (void)safeAreaInsetsDidChange;
- (id)subtitleForSpriteAtIndex:(unsigned int)a0;
- (id)titleSubtitleSpecForSpriteAtIndex:(unsigned int)a0;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (void)_updateButtonActionPerformers;
- (void)_updateSpritesAlpha;
- (id)_titleSubtitleSpecForItemIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_configurationForButton:(unsigned long long)a0 overBackgroundVariant:(BOOL)a1;
- (void)_updateEffectiveSpec;
- (void)_updateSprites;
- (void)visibleRectDidChange;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_invalidateEllipsisButton;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)titleForSpriteAtIndex:(unsigned int)a0;
- (unsigned int)spriteIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)_invalidateFilterIndicatorButton;
- (void)screenScaleDidChange;
- (void)_discardAllCachedButtonSizes;
- (void)_handleAsyncDateDescription:(id)a0 placement:(long long)a1 generation:(long long)a2;
- (void)update;
- (id)axSpriteIndexes;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
