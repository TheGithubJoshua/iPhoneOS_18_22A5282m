@class AKController, NSString, UIView, AKToolbarView, AKModelController, PDFDocument, PDFView, AKRectAnnotation;
@protocol PDFAKControllerDelegateProtocol;

@interface PDFAKDocumentAdaptor : NSObject <AKControllerDelegateProtocol, PKRulerHostingDelegate> {
    BOOL _isTornDown;
    PDFDocument *_pdfDocument;
    PDFView *_pdfView;
    AKController *_akController;
    id<PDFAKControllerDelegateProtocol> _pdfAKControllerDelegate;
    AKToolbarView *_akToolbarView;
    AKRectAnnotation *_editingAnnotaiton;
    struct TextAnnotationAnimationProperties { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleTextViewRectInScrollView; double animationDuration; double originDelta; } _animationProperties;
    double _modelBaseScaleFactor;
}

@property (weak, nonatomic) PDFView *pdfView;
@property (readonly, weak, nonatomic) PDFDocument *pdfDocument;
@property (readonly, nonatomic) AKController *akMainController;
@property (readonly, nonatomic) AKModelController *akDocumentModelController;
@property (readonly, nonatomic) UIView *akToolbarView;
@property (weak, nonatomic) id<PDFAKControllerDelegateProtocol> PDFAKControllerDelegate;
@property (readonly, nonatomic) BOOL supportsImageDescriptionEditing;
@property (readonly, copy, nonatomic) NSString *originalImageDescription;
@property (readonly, nonatomic) BOOL supportsFormFill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isHandlingEditDetected;
+ (void)setIsHandlingEditDetected:(BOOL)a0;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)teardown;
- (void).cxx_destruct;
- (void)_teardown;
- (void)dealloc;
- (id)controller:(id)a0 willSetToolbarItems:(id)a1;
- (BOOL)rulerHostWantsSharedRuler;
- (id)rulerHostingView;
- (BOOL)handleBackTabInTextEditorForAnnotation:(id)a0 forAnnotationController:(id)a1;
- (void)_adjustScrollViewWithAnimationProperties:(struct TextAnnotationAnimationProperties { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; double x2; })a0 delta:(double)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_compensatingAffineTransformForPage:(id)a0;
- (void)_delayedModelBaseScaleFactorCalculation;
- (void)_pdfDocumentDidUnlock:(id)a0;
- (void)_pdfViewDidChangeScale:(id)a0;
- (void)_pdfViewDidLayout:(id)a0;
- (void)_resetAnimationProperties;
- (void)_scheduleDelayedModelBaseScaleFactorCalculation;
- (id)_scrollViewRecognizersForPageAtIndex:(unsigned long long)a0;
- (void)_updatePDFScrollViewMinimumNumberOfTouches;
- (void)adjustScrollViewForKeyboardNotification:(id)a0;
- (void)annotationDidEndEditing:(id)a0;
- (void)annotationWillBeginEditing:(id)a0;
- (void)controllerDidEnterToolMode:(id)a0;
- (void)controllerDidExitToolMode:(id)a0;
- (BOOL)controllerShouldDetectFormElements:(id)a0;
- (void)controllerWillDismissSignatureCaptureView:(id)a0;
- (void)controllerWillDismissSignatureManagerView:(id)a0;
- (void)controllerWillEnterToolMode:(id)a0;
- (void)controllerWillExitToolMode:(id)a0;
- (void)controllerWillShowSignatureCaptureView:(id)a0;
- (void)controllerWillShowSignatureManagerView:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromModelToOverlayWithPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromOverlayToModelWithPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (void)editCheckpointReachedForAnnotationController:(id)a0;
- (void)editDetectedForAnnotationController:(id)a0;
- (BOOL)handleTabInTextEditorForAnnotation:(id)a0 forAnnotationController:(id)a1;
- (BOOL)hasHighlightableSelectionForAnnotationController:(id)a0;
- (id)initWithPDFDocument:(id)a0 andView:(id)a1;
- (void)installDrawingGestureRecognizer:(id)a0 forPageAtIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)a0 forAnnotationController:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxPageRectWithPageIndex:(unsigned long long)a0 forAnnotationController:(id)a1;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)a0 forAnnotationController:(id)a1;
- (id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)a0 atScale:(double)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 onOverlayAtPageIndex:(unsigned long long)a3 forAnnotationController:(id)a4;
- (unsigned long long)pageIndexForAnnotation:(id)a0;
- (void)pdfDocument:(id)a0 didExchangePage:(id)a1 atIndex:(unsigned long long)a2 withPage:(id)a3 atIndex:(unsigned long long)a4;
- (void)pdfDocument:(id)a0 didInsertPage:(id)a1 atIndex:(unsigned long long)a2;
- (void)pdfDocument:(id)a0 didRemovePage:(id)a1 atIndex:(unsigned long long)a2;
- (void)pdfDocument:(id)a0 didReplacePagePlaceholder:(id)a1 atIndex:(unsigned long long)a2 withPage:(id)a3;
- (void)pdfDocumentDidRemoveAllPagesOrPlaceholders:(id)a0;
- (void)penStrokeCompletedForAnnotationController:(id)a0;
- (id)popoverPresentingViewControllerForAnnotationController:(id)a0;
- (void)positionSketchOverlay:(id)a0 forAnnotationController:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positioningRectForCandidatePicker;
- (void)rotateLeft:(id)a0;
- (void)rotateRight:(id)a0;
- (BOOL)shouldAddTabControlsToTextEditorForAnnotation:(id)a0 forAnnotationController:(id)a1;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint { double x0; double x1; })a0 onOverlayAtPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onOverlayAtPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (id)undoManagerForAnnotationController:(id)a0;
- (void)uninstallDrawingGestureRecognizer:(id)a0 forPageAtIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (void)updateDrawingGestureRecognizer:(id)a0 forPageAtIndex:(unsigned long long)a1 withPriority:(BOOL)a2 forAnnotationController:(id)a3;

@end