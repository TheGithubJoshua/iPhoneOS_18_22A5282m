@class CHRecognitionSession, PKRecognitionSessionManager, NSArray, NSUUID, NSString, NSMutableArray, PKVisualizationManager, NSMapTable;

@interface PKDrawing : NSObject <CHQueryDelegate, NSCopying, NSSecureCoding> {
    BOOL _recognitionEnabled;
    NSArray *_forcedRecognitionLocales;
    NSUUID *_listenerID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long _orientation;
@property (retain, nonatomic) PKRecognitionSessionManager *recognitionManager;
@property (retain, nonatomic) CHRecognitionSession *recognitionSession;
@property (retain, nonatomic) NSMapTable *ongoingQueries;
@property (retain, nonatomic) PKVisualizationManager *visualizationManager;
@property (retain, nonatomic, setter=_setUUID:) NSUUID *uuid;
@property (retain, nonatomic) NSMutableArray *_cachedVisibleStrokes;
@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fileType;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_upgradeDrawingData:(id)a0 queue:(id)a1 completionBlock:(id /* block */)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingBoxForStrokeArray:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingBoxForStrokes:(id)a0;
+ (long long)_currentSerializationVersion;
+ (id)_findLeftmostStrokes:(id)a0;
+ (id)_findRightmostStrokes:(id)a0;
+ (id)_otherStrokesCloseToLeft:(BOOL)a0 forStrokes:(id)a1 withClosestStroke:(id)a2;
+ (id)_uuidDescriptionForStrokes:(id)a0;
+ (Class)drawingClassForPaper;
+ (id)drawingStrokesFromStrokes:(id)a0 inDrawing:(id)a1;
+ (id)drawingWithData:(id)a0;
+ (void)sortStrokes:(id)a0;
+ (id)visibleStrokesFromStrokes:(id)a0 inDrawing:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)data;
- (id)init;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)debugQuickLookObject;
- (id)dataRepresentation;
- (Class)classForCoder;
- (BOOL)_isEmpty;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)didUpdate;
- (id)version;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_bounds;
- (id)_strokes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_canvasBounds;
- (long long)_minimumSerializationVersion;
- (void)cancelOngoingRecognitionRequests;
- (id)indexableContent;
- (id)initWithDrawing:(id)a0;
- (unsigned long long)mergeWithDrawing:(id)a0;
- (BOOL)recognitionEnabled;
- (void)setRecognitionEnabled:(BOOL)a0;
- (void)set_canvasBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_visibleStrokes;
- (id)CHDrawing;
- (void)_setAllStrokes:(id)a0;
- (id)_addStroke:(id)a0;
- (id)_allStrokes;
- (id)_ascii;
- (id)_clipAgainstLegacyCanvas:(id)a0;
- (id)_clipStroke:(id)a0 againstPaths:(const void *)a1;
- (id)_clipStroke:(id)a0 newRootStroke:(id *)a1;
- (id)_copyAndAddStroke:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)_copyAndAddStroke:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 ink:(id)a2 newParent:(id *)a3;
- (void)_copyAndAddStrokes:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_eraserStrokeBounds;
- (void)_imageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 completionHandler:(id /* block */)a2;
- (BOOL *)_newAsciiBitfield;
- (struct CGSize { double x0; double x1; })_orientedDrawingSize;
- (void)_removeStroke:(id)a0;
- (id)_rootStrokes;
- (long long)_rootStrokesCount;
- (id)_strokeForIdentifier:(id)a0;
- (id)_strokesIntersectedByPoint:(struct CGPoint { double x0; double x1; })a0 prevPoint:(struct CGPoint { double x0; double x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (void)_teardownRecognitionObjects;
- (void)_transformAllStrokes:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)_unclippedStroke:(id)a0;
- (void)_updateRecognitionSession;
- (void)_upgradeLegacyPenInks;
- (id)_visibleStrokeForIdentifier:(id)a0;
- (void)addNewStroke:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateStrokeBounds;
- (id)clipStroke:(id)a0 onPlane:(id)a1 renderMask:(id)a2;
- (void)clipStrokesIfNeededOnQueue:(id)a0 completion:(id /* block */)a1;
- (BOOL)containsInternalStrokes;
- (id)copyAndAddStroke:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)copyWithoutInternalStrokes;
- (void)deleteStrokes:(id)a0;
- (id)drawingByAppendingDrawing:(id)a0;
- (id)drawingByAppendingStrokes:(id)a0;
- (id)drawingByApplyingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)fetchIntersectedStrokesBetweenPoint:(struct CGPoint { double x0; double x1; })a0 otherPoint:(struct CGPoint { double x0; double x1; })a1 visibleOnscreenStrokes:(id)a2 completion:(id /* block */)a3;
- (id)forcedRecognitionLocales;
- (id)imageFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1;
- (id)initWithData:(id)a0 loadNonInkingStrokes:(BOOL)a1 error:(id *)a2;
- (id)initWithStrokes:(id)a0;
- (id)initWithStrokes:(id)a0 fromDrawing:(id)a1;
- (id)insertNewTestStroke;
- (id)intersectedStrokesAtPoint:(struct CGPoint { double x0; double x1; })a0 selectionType:(long long)a1 inputType:(long long)a2 visibleOnscreenStrokes:(id)a3;
- (id)intersectedStrokesFromStroke:(id)a0 visibleOnscreenStrokes:(id)a1;
- (void)invalidateVisibleStrokes;
- (id)newStroke;
- (void)performSearchQuery:(id)a0 fullWordsOnly:(BOOL)a1 caseMatchingOnly:(BOOL)a2 withBlock:(id /* block */)a3;
- (void)performSearchQuery:(id)a0 withBlock:(id /* block */)a1;
- (void)queryDidUpdateResult:(id)a0;
- (void)setForcedRecognitionLocales:(id)a0;
- (void)setNeedsRecognitionUpdate;
- (id)setStroke:(id)a0 hidden:(BOOL)a1;
- (id)setStroke:(id)a0 ink:(id)a1;
- (id)setStroke:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 concat:(BOOL)a2;
- (void)setStrokeSubstrokes:(id)a0;
- (void)setStrokes:(id)a0 groupID:(id)a1;
- (void)setStrokes:(id)a0 hidden:(BOOL)a1;
- (void)setStrokes:(id)a0 inks:(id)a1;
- (void)setStrokes:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 concat:(BOOL)a2;
- (BOOL)shouldClearSelectionAfterStraightening;
- (id)sliceWithEraseStroke:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })strokeBounds;
- (Class)strokeClass;
- (Class)strokeSelectionClass;
- (id)strokesIntersectedByPoint:(struct CGPoint { double x0; double x1; })a0 prevPoint:(struct CGPoint { double x0; double x1; })a1 minThreshold:(double)a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 onscreenVisibleStrokes:(id)a4;
- (id)strokesIntersectedByPoint:(struct CGPoint { double x0; double x1; })a0 prevPoint:(struct CGPoint { double x0; double x1; })a1 onscreenVisibleStrokes:(id)a2;
- (id)transformStrokes:(id)a0 paths:(id)a1 masks:(id)a2;
- (void)transformStrokes:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 concat:(BOOL)a2;
- (void)transformStrokes:(id)a0 withTransforms:(id)a1 concat:(BOOL)a2;
- (id)undoableAddNewStrokes:(id)a0;
- (id)undoableDeleteStrokes:(id)a0;
- (id)undoableSetStrokes:(id)a0 groupID:(id)a1 actionName:(id)a2;
- (id)undoableSetStrokes:(id)a0 inks:(id)a1;
- (id)undoableTransformStrokes:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 concat:(BOOL)a2;
- (id)updateFromSlicedIntersectingIndexes:(long long *)a0 resultNewRoots:(const id *)a1 resultUpdatedStrokes:(const id *)a2 count:(long long)a3;
- (void)updateStroke:(id)a0 indexHint:(unsigned long long)a1;
- (id)updateStroke:(id)a0 updater:(id /* block */)a1;
- (void)updateStrokes:(id /* block */)a0;
- (id)visibleStrokeForInsertingStroke:(id)a0;
- (id)visibleStrokes;

@end