@class EQKitEnvironment, TPFloatingDrawables, TPBookmarkController, TSDThumbnailController, NSMutableArray, NSMutableSet, NSString, TSPData, NSArray, NSMutableDictionary, TPUIState, TPTheme, TPDrawablesZOrder, TSWPChangeSession, TPDocumentSettings, TSWPStorage, TPSection, TSWPFlowInfoContainer, TPDocumentViewController, TSSStylesheet;
@protocol TSWPTOCController;

@interface TPDocumentRoot : TSADocumentRoot <TSDInfoUUIDPathPrefixComponentsProvider, TSWPDrawableOLC, TSWPStorageParent, TSWPChangeSessionManager, TSWPChangeVisibility, TSTResolverContainerNameProvider, TSCEResolverContainer, TPPageControllerDelegate> {
    NSArray *_citationRecords;
    BOOL _shouldUniquifyTableNames;
    NSArray *_obsoleteTOCStyles;
    TPTheme *_theme;
    TPDocumentSettings *_settings;
    BOOL _usesSingleHeaderFooter;
    BOOL _needsInitialization;
    struct CGSize { double width; double height; } _pageSize;
    double _pageScale;
    double _leftMargin;
    double _rightMargin;
    double _topMargin;
    double _bottomMargin;
    double _headerMargin;
    double _footerMargin;
    BOOL _laysOutBodyVertically;
    struct __CFLocale { } *_hyphenationLocale;
    BOOL _changeTrackingEnabled;
    BOOL _viewDidAppear;
    BOOL _isTornDown;
    TPDocumentViewController *_viewController;
    unsigned int _tableNameCounter;
    NSMutableDictionary *_tablesWithUniqueNames;
    NSMutableSet *_remappedTableNames;
    TSPData *_equationEnvironmentData;
    EQKitEnvironment *_equationEnvironment;
    NSMutableArray *_pageTemplates;
    BOOL _shouldUseAnchoredDrawableWrapSlop;
    id<TSWPTOCController> _tocInfoController;
}

@property (readonly, weak, nonatomic) TPDocumentViewController *viewController;
@property (readonly, nonatomic) BOOL hasTrackedChanges;
@property (retain, nonatomic) TPTheme *theme;
@property (retain, nonatomic) TSSStylesheet *stylesheet;
@property (retain, nonatomic) TPDrawablesZOrder *drawablesZOrder;
@property (retain, nonatomic) TPFloatingDrawables *floatingDrawables;
@property (retain, nonatomic) TSWPFlowInfoContainer *flowInfoContainer;
@property (retain, nonatomic) NSMutableArray *changeSessionHistory;
@property (retain, nonatomic) TSWPChangeSession *mostRecentChangeSession;
@property (retain, nonatomic) TSWPChangeSession *activeChangeSession;
@property (readonly, nonatomic) TSDThumbnailController *thumbnailController;
@property (readonly, nonatomic) TPBookmarkController *bookmarkController;
@property (readonly, nonatomic) BOOL isNewDocument;
@property (readonly, nonatomic) TPDocumentSettings *settings;
@property (readonly, nonatomic) TPSection *firstSection;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSArray *nonHiddenSections;
@property (readonly, nonatomic) TSWPStorage *bodyStorage;
@property (nonatomic) BOOL forceChangeTrackingMarkupHidden;
@property (nonatomic) BOOL usesSingleHeaderFooter;
@property (nonatomic) struct CGSize { double x0; double x1; } pageSize;
@property (nonatomic) double pageScale;
@property (copy, nonatomic) NSString *printerID;
@property (copy, nonatomic) NSString *paperID;
@property (nonatomic) long long orientation;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double headerMargin;
@property (nonatomic) double footerMargin;
@property (nonatomic, getter=isChangeTrackingEnabled) BOOL changeTrackingEnabled;
@property (readonly, nonatomic, getter=isTrackingChanges) BOOL trackingChanges;
@property (readonly, nonatomic) BOOL canTrackChanges;
@property (nonatomic) BOOL suppressViewStateCapture;
@property (copy, nonatomic) TPUIState *uiState;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } paperSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } unrotatedPaperSize;
@property (readonly, nonatomic) NSArray *pageTemplates;
@property (readonly, nonatomic) NSString *blankPageTemplateName;
@property (readonly, nonatomic) BOOL autoListRecognition;
@property (readonly, nonatomic) BOOL autoListTermination;
@property (readonly, nonatomic) BOOL textIsLinked;
@property (readonly, nonatomic) BOOL preventsComments;
@property (readonly, nonatomic) BOOL preventsChangeTracking;
@property (readonly, nonatomic) BOOL supportsMultipleColumns;
@property (readonly, nonatomic) long long contentWritingDirection;
@property (readonly, nonatomic) BOOL storageChangesInvalidateWrap;
@property (readonly, nonatomic) BOOL supportsVerticalTextLayoutInChildStorages;
@property (readonly, nonatomic) BOOL supportsDropCapsInChildStorages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isTrackingChanges;
@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot;
@property (readonly, nonatomic) long long pageViewState;

+ (void)localizeModelObject:(id)a0 withTemplateBundle:(id)a1 andLocale:(id)a2;
+ (struct CGSize { double x0; double x1; })previewImageSizeForType:(unsigned long long)a0;
+ (void)localizeTextStorage:(id)a0 withTemplateBundle:(id)a1 andLocale:(id)a2;
+ (struct CGSize { double x0; double x1; })pageSizeFromPaperSize:(struct CGSize { double x0; double x1; })a0 pageScale:(double)a1 orientation:(long long)a2;

- (id)initWithContext:(id)a0;
- (void)willClose;
- (void)tearDown;
- (unsigned long long)applicationType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (BOOL)hasViewState;
- (double)bodyWidth;
- (id)childEnumerator;
- (BOOL)shouldHyphenate;
- (void)documentDidLoad;
- (const struct __CFLocale { } *)hyphenationLocale;
- (id)modelPathComponentForChild:(id)a0;
- (void)didAddDrawable:(id)a0;
- (id)changeSessionManagerForModel:(id)a0;
- (id)changeVisibility;
- (BOOL)documentDisallowsHighlightsOnStorage:(id)a0;
- (id)equationEnvironment;
- (BOOL)exportToPath:(id)a0 exporter:(id)a1 delegate:(id)a2 error:(id *)a3;
- (BOOL)isMultiPageForQuickLook;
- (void)setThemeForTemplateImport:(id)a0;
- (BOOL)shouldShowChangeKind:(int)a0 date:(id)a1;
- (BOOL)shouldShowMarkupForChangeKind:(int)a0 date:(id)a1;
- (BOOL)textIsVerticalAtCharIndex:(unsigned long long)a0;
- (void)updateWritingDirection:(unsigned long long)a0;
- (BOOL)useLigatures;
- (void)willRemoveDrawable:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)UIStateForChart:(id)a0;
- (void)addRemappedTableName:(id)a0;
- (void)clearRemappedTableNames;
- (id)freehandDrawingToolkitUIState;
- (void)invalidateViewState;
- (BOOL)isPendingTableNameUniquification;
- (void)loadFromUnarchiver:(id)a0;
- (id)nameForResolverContainer:(id)a0;
- (unsigned int)nextUntitledResolverIndex;
- (id)remappedTableNames;
- (id)resolverContainerForName:(id)a0 caseSensitive:(BOOL)a1;
- (id)resolverContainerNameForResolver:(id)a0;
- (id)resolverContainerNamesMatchingPrefix:(id)a0;
- (id)resolverMatchingName:(id)a0;
- (id)resolverMatchingName:(id)a0 contextContainerName:(id)a1;
- (id)resolverMatchingName:(id)a0 contextResolver:(id)a1;
- (BOOL)resolverNameIsUsed:(id)a0;
- (id)resolversMatchingPrefix:(id)a0;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)a0;
- (unsigned int)saveNextUntitledResolverIndex;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)a0;
- (void)setUIState:(id)a0 forChart:(id)a1;
- (id)citationRecords;
- (int)indexForObject:(id)a0;
- (BOOL)isSectionModel:(id)a0;
- (id)sectionTemplatePageOwningModel:(id)a0;
- (BOOL)cellCommentsAllowedOnInfo:(id)a0;
- (BOOL)containsVerticalText;
- (BOOL)documentAllowsPencilAnnotationsOnModel:(id)a0;
- (BOOL)isDrawableOnSectionTemplatePage:(id)a0;
- (BOOL)isSectionInfo:(id)a0;
- (BOOL)isSectionTemplateInfo:(id)a0;
- (BOOL)laysOutBodyVertically;
- (long long)naturalAlignmentAtCharIndex:(unsigned long long)a0 inTextStorage:(id)a1;
- (unsigned long long)rootIndexForObject:(id)a0;
- (id)sectionTemplatePageOwningInfo:(id)a0;
- (void)setIndex:(int)a0 forObject:(id)a1;
- (void)setLaysOutBodyVertically:(BOOL)a0;
- (BOOL)shouldUseAnchoredDrawableWrapSlop;
- (BOOL)supportHeaderFooterParagraphAlignmentInInspectors;
- (BOOL)textIsVerticalInStorage:(id)a0 atCharIndex:(unsigned long long)a1;
- (id)tocInfoController;
- (int)verticalAlignmentForTextStorage:(id)a0;
- (void)prepareNewDocumentWithTemplateIdentifier:(id)a0 bundle:(id)a1 documentLocale:(id)a2;
- (id)p_previewImageWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)prepareAndValidateSidecarViewStateRootWithVersionUUIDMismatch:(id)a0 sidecarDocumentRevision:(id)a1 originalDocumentViewStateRoot:(id)a2;
- (id)previewImageForSize:(struct CGSize { double x0; double x1; })a0;
- (void)setStylesheet:(id)a0 andThemeForImport:(id)a1;
- (void)willHide;
- (double)currentDesiredPencilAnnotationDrawingScale;
- (BOOL)hasPencilAnnotations;
- (id)modelEnumeratorWithFlags:(unsigned long long)a0 forObjectsPassingTest:(id /* block */)a1;
- (id)pencilAnnotationUIState;
- (id)pageTemplateWithName:(id)a0;
- (BOOL)footnotesShouldAffectBodyLayout;
- (void)setExportViewModeForCTMarkup:(BOOL)a0 deletions:(BOOL)a1 paginatedPageController:(id)a2;
- (double)valueForMargin:(long long)a0;
- (double)footnoteGap;
- (long long)footnoteKind;
- (BOOL)freehandDrawingsRequireSpacerShape;
- (BOOL)hasPageBackgroundsForSections;
- (void)i_assignBlankPageTemplateToAllSections;
- (void)i_removeAllPageTemplates;
- (void)i_upgradeSectionsForPageTemplates;
- (unsigned long long)inheritedSectionIndexForSectionIndex:(unsigned long long)a0;
- (id)initForThemeImportWithContext:(id)a0;
- (id)initUsingDefaultThemeWithContext:(id)a0;
- (void)invalidateThumbnailForPageIndex:(unsigned long long)a0;
- (BOOL)needsToExplainEnablingChangeTracking;
- (id)pBlankPageTemplate;
- (void)pCommonInitialization;
- (id)pCreateBlankPageTemplate;
- (void)pCreateBodyStorage;
- (void)pCreateDrawablesZOrderBodyStorage:(id)a0 addAnchoredDrawables:(BOOL)a1;
- (void)pCreateFloatingDrawables;
- (void)pCreateFlowInfoContainer;
- (void)pFinishInitialization;
- (void)pUpgradeSection:(id)a0 documentVersion:(unsigned long long)a1;
- (BOOL)p_drawableInfoIsOwnedByATPPageTemplate:(id)a0;
- (void)p_initializeShowInBookmarksListParagraphStylesProperty;
- (BOOL)p_isUniquePageTemplateName:(id)a0;
- (id)p_realTOCEntryStyleFromFakeTOCEntryStyle:(id)a0 context:(id)a1;
- (void)p_uniquifyTableNames;
- (void)p_upgradeBodyTOC;
- (void)p_upgradeTOCModelForUnity20;
- (void)p_upgradeTOCStyles;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageBoundsWithinMargins;
- (unsigned long long)pageIndexForThumbnailIdentifier:(id)a0;
- (unsigned long long)pageTemplateIndexForModelObject:(id)a0;
- (void)readViewState;
- (BOOL)sectionTemplatePagesAllowDrawable:(id)a0;
- (id)selectionPathForSearchReference:(id)a0;
- (void)setBodyStorage:(id)a0 dolcContext:(id)a1;
- (void)setValue:(double)a0 forMargin:(long long)a1;
- (id)storagesWithChanges;
- (id)thumbnailIdentifierForPageIndex:(unsigned long long)a0;
- (Class)thumbnailImagerClass;
- (id)uniquePageTemplateNameWithProposedPageTemplateName:(id)a0;
- (void)upgradeFromOldSectionWithPageSize:(struct CGSize { double x0; double x1; })a0 leftMargin:(double)a1 rightMargin:(double)a2 topMargin:(double)a3 bottomMargin:(double)a4 headerMargin:(double)a5 footerMargin:(double)a6;
- (void)upgradeParagraphStylesForTOCNavigator;
- (id)uuidPathPrefixComponentsForInfo:(id)a0;

@end