@class SXScrollView, SXTangierTextRenderCollector, UIView, SXTangierRepDirectLayerHostProvider, TSWPSelection, SXTextTangierInteractiveCanvasController, NSString, NSMutableSet, SXViewport, SXTextTangierCanvasViewController, SXTextTangierDocumentRoot;
@protocol SXTangierDragItemProvider, SXDOMObjectProviding, SXComponentInteractionManager, SXTangierControllerDelegate, SXComponentActionHandler, SXComponentController;

@interface SXTangierController : NSObject <SXTextTangierInteractiveCanvasControllerDelegate, SXTextTangierInteractiveCanvasControllerDataSource, SXViewportChangeListener, TSDiOSCanvasViewControllerDelegate, SXTextComponentLayoutHosting, SXTextSelecting>

@property (retain, nonatomic) SXViewport *viewport;
@property (retain, nonatomic) SXScrollView *scrollView;
@property (readonly, nonatomic) id<SXComponentActionHandler> componentActionHandler;
@property (readonly, nonatomic) id<SXTangierDragItemProvider> dragItemProvider;
@property (readonly, weak, nonatomic) id<SXComponentController> componentController;
@property (readonly, weak, nonatomic) id<SXComponentInteractionManager> componentInteractionManager;
@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly, nonatomic) SXTangierTextRenderCollector *textRenderCollector;
@property (readonly, nonatomic) SXTangierRepDirectLayerHostProvider *directLayerHostProvider;
@property (readonly, nonatomic) UIView *underRepsHost;
@property (readonly, nonatomic) UIView *aboveRepsHost;
@property (readonly, nonatomic) UIView *overlayRepsHost;
@property (nonatomic) BOOL preventScrollViewDidScrollReentrance;
@property (nonatomic) BOOL disableClippingForTiles;
@property (retain, nonatomic) TSWPSelection *storedSelection;
@property (nonatomic) BOOL performedInitialLayoutAndRender;
@property (readonly, nonatomic) NSMutableSet *presentedTextViews;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } unfairLock;
@property (nonatomic, getter=isEnclosingCanvasScrolling) BOOL enclosingCanvasScrolling;
@property (weak, nonatomic) id<SXTangierControllerDelegate> delegate;
@property (readonly, nonatomic) SXTextTangierCanvasViewController *cvc;
@property (readonly, nonatomic) SXTextTangierInteractiveCanvasController *icc;
@property (nonatomic) BOOL selectionEnabled;
@property (nonatomic) BOOL rebuildFlows;
@property (nonatomic) unsigned long long initialSubviewCount;
@property (readonly, nonatomic) BOOL interactiveCanvasControllerAllowsHyperlinkInteraction;
@property (readonly, retain, nonatomic) SXTextTangierDocumentRoot *documentRoot;
@property (readonly, nonatomic) BOOL isCanvasInteractive;
@property (readonly, nonatomic) BOOL isPrintingCanvas;
@property (readonly, nonatomic) BOOL spellCheckingSupported;
@property (readonly, nonatomic) BOOL spellCheckingSuppressed;
@property (readonly, nonatomic) BOOL shouldResizeCanvasToScrollView;
@property (readonly, nonatomic) BOOL shouldClipToScrollViewBoundsInVisibleBounds;
@property (readonly, nonatomic) BOOL shouldShowTextOverflowGlyphs;
@property (readonly, nonatomic) BOOL shouldShowInstructionalText;
@property (readonly, nonatomic) BOOL shouldPopKnobsOutsideEnclosingScrollView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeOfScrollViewEnclosingCanvas;
@property (readonly, nonatomic) BOOL allowEditMenuToAppear;
@property (readonly, nonatomic) BOOL allowTextEditingToBegin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearSelection;
- (void)endSelection;
- (void)teardown;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleBounds;
- (id)backgroundColorForDragUIPlatter;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })interactiveCanvasController:(id)a0 expandVisibleBoundsForClippingReps:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_fixLayoutOffsets;
- (void)didStartPresentingTextView:(id)a0;
- (void)didStopPresentingTextView:(id)a0;
- (void)didTransitionToPresented;
- (id)initWithViewport:(id)a0 scrollView:(id)a1 componentActionHandler:(id)a2 dragItemProvider:(id)a3 componentController:(id)a4 componentInteractionManager:(id)a5 DOMObjectProvider:(id)a6 adIgnorableViewFactory:(id)a7;
- (id)interactiveCanvasController:(id)a0 delegateConformingToProtocol:(id)a1 forRep:(id)a2;
- (id)interactiveCanvasController:(id)a0 dragItemForSmartField:(id)a1 interaction:(id)a2 session:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })interactiveCanvasController:(id)a0 expandVisibleBoundsForTiling:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)interactiveCanvasController:(id)a0 infoForModel:(id)a1 withSelection:(id)a2;
- (void)interactiveCanvasController:(id)a0 interactedWithHyperlink:(id)a1 info:(id)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 touchPoint:(struct CGPoint { double x0; double x1; })a4 touchAndHold:(BOOL)a5;
- (void)interactiveCanvasController:(id)a0 scrollViewDidEndDragging:(id)a1 willDecelerate:(BOOL)a2;
- (void)interactiveCanvasController:(id)a0 scrollViewWillBeginDragging:(id)a1;
- (void)interactiveCanvasController:(id)a0 scrollViewWillEndDragging:(id)a1 withVelocity:(struct CGPoint { double x0; double x1; })a2 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a3;
- (BOOL)interactiveCanvasController:(id)a0 shouldBeginInteraction:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)interactiveCanvasControllerDidLayoutAndRenderOnBackgroundThread:(id)a0;
- (void)interactiveCanvasControllerDidScroll:(id)a0;
- (void)interactiveCanvasControllerDidStopScrolling:(id)a0;
- (BOOL)interactiveCanvasControllerIsRelatedCanvasScrolling:(id)a0;
- (void)interactiveCanvasControllerWillStartInteraction:(id)a0;
- (id)layoutDescriptionForComponent:(id)a0;
- (struct CGPoint { double x0; double x1; })pointForCharacterAtIndex:(unsigned long long)a0 inComponentWithIdentifier:(id)a1;
- (id)scrollPositionForVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 canvasWidth:(double)a1;
- (void)setUnscaledCanvasRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)topLevelLayersForInteractiveCanvasController:(id)a0;
- (id)topLevelRepsForInteractiveCanvasController:(id)a0;
- (void)updateCanvasSize:(struct CGSize { double x0; double x1; })a0 forComponentViews:(id)a1;
- (void)updateInfosWithBlock:(id /* block */)a0;
- (void)updatePresentationState;
- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;
- (id)visibleBoundsClipViewForInteractiveCanvasController:(id)a0;
- (void)willTransitionToPresented;

@end