@class NSAttributedString, NSString, NSArray, NSData, PDFPagePrivate, PDFDocument, NSObject;
@protocol OS_dispatch_queue;

@interface PDFPage : NSObject <NSCopying> {
    PDFPagePrivate *_private;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *displayListCreationQueue;
@property (class, readonly, nonatomic) BOOL useLegacyImageHandling;

@property (readonly, weak, nonatomic) PDFDocument *document;
@property (readonly, nonatomic) struct CGPDFPage { } *pageRef;
@property (readonly, nonatomic) NSString *label;
@property (nonatomic) long long rotation;
@property (readonly, nonatomic) NSArray *annotations;
@property (nonatomic) BOOL displaysAnnotations;
@property (readonly, nonatomic) unsigned long long numberOfCharacters;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (struct CGPDFPage { } *)_createPageRefFromImage:(struct CGImage { } *)a0 andOptions:(id)a1;
+ (BOOL)_getBooleanProperty:(id)a0 forKey:(id)a1 withDefault:(BOOL)a2;
+ (id)fontWithPDFFont:(struct CGPDFFont { } *)a0 size:(float)a1;
+ (BOOL)isExcludingAKAnnotationRenderingForThisThread;
+ (BOOL)isNativeRotationDrawingEnabledForThisThread;
+ (void)setExcludingAKAnnotationRenderingForThisThread:(BOOL)a0;
+ (void)setNativeRotationDrawingEnabledForThisThread:(BOOL)a0;
+ (void)setShouldHideAnnotationsForThisThread:(BOOL)a0;
+ (BOOL)shouldHideAnnotationsForThisThread;

- (BOOL)columnAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)init;
- (id)view;
- (id)debugQuickLookObject;
- (id)allAnnotations;
- (id)initWithImage:(id)a0;
- (void)_commonInit;
- (void)addAnnotation:(id)a0;
- (void)removeAnnotation:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)purgeAll;
- (void)setDocument:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setView:(id)a0;
- (void)replaceAnnotation:(id)a0 withAnnotation:(id)a1;
- (id)initWithCGImage:(struct CGImage { } *)a0 options:(id)a1;
- (void)dealloc;
- (id)initWithImage:(id)a0 options:(id)a1;
- (id)layoutText;
- (id)initWithImageSource:(struct CGImageSource { } *)a0;
- (BOOL)isBookmarked;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForBox:(long long)a0;
- (void)drawWithBox:(long long)a0 toContext:(struct CGContext { } *)a1;
- (unsigned long long)_documentIndex;
- (id)thumbnailOfSize:(struct CGSize { double x0; double x1; })a0 forBox:(long long)a1;
- (struct CGDisplayList { } *)displayList;
- (id)_rvItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)imageOfSize:(struct CGSize { double x0; double x1; })a0 forBox:(long long)a1 withOptions:(id)a2;
- (void)purgePageLayout;
- (id)annotationForDetectedFormField:(id)a0;
- (id)detectedFormFieldForAnnotation:(id)a0;
- (BOOL)didChangeBounds;
- (id)selectionForAll;
- (void)_addBox:(int)a0 toDictionary:(struct __CFDictionary { } *)a1 offset:(struct CGPoint { double x0; double x1; })a2;
- (void)_addWidgetAnnotationToLookupDictionary:(id)a0;
- (void)_buildPageLayout;
- (id)_createAttributedString;
- (struct CGDisplayList { } *)_createDisplayListTrackingGlyphs:(BOOL)a0;
- (void)_createRetainedDisplayList;
- (void)_drawAnnotationsWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (void)_drawBookmarkInContext:(struct CGContext { } *)a0;
- (struct CGImage { } *)_newCGImageWithBox:(long long)a0 bitmapSize:(struct PDFSizeIntegral { unsigned long long x0; unsigned long long x1; })a1 scale:(double)a2 offset:(struct CGPoint { double x0; double x1; })a3 colorSpace:(struct CGColorSpace { } *)a4 backgroundColor:(id)a5 withRotation:(BOOL)a6 withAntialiasing:(BOOL)a7 withAnnotations:(BOOL)a8 withBookmark:(BOOL)a9 withDelegate:(id)a10;
- (void)_postAnnotationsChangedNotificationCoalesced;
- (void)_releaseDisplayList;
- (void)_removeWidgetAnnotationFromLookupDictionary:(id)a0;
- (void)_scanData:(id)a0;
- (BOOL)_writeToConsumer:(struct CGDataConsumer { } *)a0;
- (void)addAnnotation:(id)a0 withUndo:(BOOL)a1;
- (void)addAnnotationFormField:(id)a0;
- (void)addRedactionFromRectangularSelectionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addScannedAnnotation:(id)a0;
- (void)addedAnnotation:(id)a0 forFormField:(id)a1;
- (BOOL)akDidSetupRealPageModelController;
- (id)akPageAdaptor;
- (id)annotationAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)annotationAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)annotationChanges;
- (id)annotationWithUUID:(id)a0;
- (id)annotationsForFieldName:(id)a0;
- (id)annotationsIfAvail;
- (void)changedAnnotation:(id)a0;
- (id)changedAnnotations;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })characterBoundsAtIndex:(long long)a0;
- (long long)characterIndexAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)clearAnnotationChanges;
- (BOOL)colorWidgetBackgrounds;
- (BOOL)columnAtPointIfAvailable:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })columnFrameAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGDisplayList { } *)createDisplayListForFormDetection;
- (const struct CGPath { } *)createRedactionPath;
- (id)ddScannerResults;
- (id)detectedForm;
- (BOOL)disableUndoManagerForAK;
- (void)drawAnnotationsWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 passingTest:(id /* block */)a2;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 isThumbnail:(BOOL)a2;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1 withOptions:(id)a2;
- (void)enableUndoManagerForAK:(BOOL)a0;
- (void)fetchAnnotationsWithCompletion:(id /* block */)a0 deliveredOnQueue:(id)a1;
- (void)fetchPageLayoutWithCompletion:(id /* block */)a0 deliveredOnQueue:(id)a1;
- (id)firstDetectedFormField;
- (id)firstTextField;
- (struct __CFDictionary { } *)gcCreateBoxDictionary;
- (void)getAnnotations;
- (struct CGDisplayList { } *)getDisplayListSynchronously;
- (void)getDisplayListWithCompletion:(id /* block */)a0 onQueue:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })getDrawingTransformForBox:(long long)a0;
- (BOOL)hasArtBox;
- (BOOL)hasBleedBox;
- (BOOL)hasCropBox;
- (BOOL)hasFormFieldsFromOCR;
- (BOOL)hasPopups;
- (BOOL)hasTrimBox;
- (void)initFirstTextFieldOrDetectedFormField;
- (id)initWithPageRef:(struct CGPDFPage { } *)a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andRotation:(long long)a1;
- (void)insertAnnotation:(id)a0 atIndex:(long long)a1;
- (char)isCandidateForOCR;
- (BOOL)isTextFromOCR;
- (id)lastAnnotationChange;
- (void)lazilyLoadAnnotations;
- (struct CGColor { } *)pageBackgroundColorHint;
- (struct CGPDFLayout { } *)pageLayout;
- (struct CGPDFLayout { } *)pageLayoutIfAvail;
- (BOOL)pathIntersectsWithRedactionPath:(struct CGPath { } *)a0;
- (id)pdfScannerResultAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)pdfScannerResultAtPoint:(struct CGPoint { double x0; double x1; })a0 onPageLayer:(id)a1;
- (void)postAnnotationsChangedNotification;
- (void)postPageDidChangeBoundsNotification;
- (void)postPageDidRotateNotification;
- (void)printActivePageAnnotations;
- (BOOL)rectIntersectsWithRedactionPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeAnnotation:(id)a0 atIndex:(long long)a1;
- (void)removeAnnotation:(id)a0 withUndo:(BOOL)a1;
- (BOOL)requestedOCR;
- (void)resetChangedAnnotations;
- (id)rvItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)rvItemAtPoint:(struct CGPoint { double x0; double x1; })a0 onPageLayer:(id)a1;
- (id)rvItemWithPDFScannerResult:(id)a0;
- (id)scannedAnnotationAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)scannedAnnotations;
- (id)selectionForCharacterAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)selectionForCodeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)selectionForLineAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)selectionForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)selectionForRangeCommon:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 isCodeRange:(BOOL)a1;
- (id)selectionForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)selectionForWordAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)selectionFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)selectionFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 type:(int)a2;
- (id)selectionFromPointToBottom:(struct CGPoint { double x0; double x1; })a0 type:(int)a1;
- (id)selectionFromTopToPoint:(struct CGPoint { double x0; double x1; })a0 type:(int)a1;
- (void)setAKDidSetupRealPageModelController:(BOOL)a0;
- (void)setBookmarked:(BOOL)a0;
- (void)setBookmarked:(BOOL)a0 updateBookmarks:(BOOL)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forBox:(long long)a1;
- (void)setCandidateForOCR:(char)a0;
- (void)setColorWidgetBackgrounds:(BOOL)a0;
- (void)setDetectedForm:(id)a0;
- (void)setDisplaysMarkupAnnotations:(BOOL)a0;
- (void)setExtraContentStream:(struct CGPDFStream { } *)a0 steamDocument:(struct CGPDFDocument { } *)a1;
- (BOOL)setPageRef:(struct CGPDFPage { } *)a0;
- (void)setupAKPageAdaptorIfNecessary;
- (id)thumbnailOfSize:(struct CGSize { double x0; double x1; })a0 forBox:(long long)a1 withBookmark:(BOOL)a2;
- (id)thumbnailOfSize:(struct CGSize { double x0; double x1; })a0 forBox:(long long)a1 withBookmark:(BOOL)a2 withAnnotations:(BOOL)a3;
- (void)transformContext:(struct CGContext { } *)a0 forBox:(long long)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForBox:(long long)a0;

@end