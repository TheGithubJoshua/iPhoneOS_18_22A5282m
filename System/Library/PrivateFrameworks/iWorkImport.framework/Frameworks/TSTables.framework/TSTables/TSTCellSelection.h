@class NSString, TSTCellRegion, TSTTableInfo, TSTCellUIDRegion;

@interface TSTCellSelection : TSKSelection <TSDTextSelection>

@property (weak, nonatomic) TSTTableInfo *tableInfo;
@property (retain, nonatomic) TSTCellUIDRegion *cellUIDRegion;
@property (nonatomic) struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _column; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _row; } anchorCellUID;
@property (nonatomic) struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _column; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _row; } cursorCellUID;
@property (retain, nonatomic) TSTCellUIDRegion *baseCellUIDRegion;
@property (retain, nonatomic) TSTCellRegion *cachedCellRegion;
@property (nonatomic) unsigned long long cachedCellRegionVersionCounter;
@property (retain, nonatomic) TSTCellRegion *cachedBaseRegion;
@property (nonatomic) unsigned long long cachedBaseRegionVersionCounter;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) TSTCellRegion *cellRegion;
@property (readonly, nonatomic) long long selectionType;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } anchorCellID;
@property (readonly, nonatomic) TSTCellRegion *baseRegion;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } cursorCellID;
@property (readonly, nonatomic) unsigned long long cellCount;
@property (readonly, nonatomic) BOOL beginImplicitEditing;
@property (readonly, nonatomic) unsigned long long sizeClass;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } searchReferenceRange;
@property (readonly, nonatomic) BOOL containsHeaderColumns;
@property (readonly, nonatomic) BOOL containsHeaderRows;
@property (readonly, nonatomic) BOOL containsBodyRows;
@property (readonly, nonatomic) BOOL containsBodyColumns;
@property (readonly, nonatomic) BOOL containsFooterRows;
@property (readonly, nonatomic) BOOL containsCellsInCategoryColumn;
@property (readonly, nonatomic) BOOL containsCellsInSummaryRow;
@property (readonly, nonatomic) BOOL containsCellsInLabelRow;
@property (readonly, nonatomic) BOOL containsCellsInSummaryOrLabelRows;
@property (readonly, nonatomic) BOOL containsGroupValueCells;
@property (readonly, nonatomic) BOOL containsCellsInCategoryGroupingColumn;
@property (readonly, nonatomic) BOOL containsCellsInCategoryColumnsOrRows;
@property (readonly, nonatomic) BOOL containsOnlyCellsInCategoryColumn;
@property (readonly, nonatomic) BOOL containsOnlyCellsInSummaryRow;
@property (readonly, nonatomic) BOOL containsOnlyCellsInSummaryAndLabelRows;
@property (readonly, nonatomic) BOOL containsOnlyGroupValueCells;
@property (readonly, nonatomic) BOOL containsOnlySpecialCategoryOrPivotCells;
@property (readonly, nonatomic) BOOL containsOnlySpecialCategoryCells;
@property (readonly, nonatomic) BOOL containsOnlySpecialPivotCells;
@property (readonly, nonatomic) NSString *cellSelectionNameForContextAndActionMenus;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) BOOL isAtEndOfLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)archivedSelectionClass;
+ (id)selectionWithTableInfo:(id)a0 cellUID:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1;
+ (id)selectionWithTableInfo:(id)a0 cellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
+ (id)selectionWithTableInfo:(id)a0 cellRegion:(id)a1;
+ (id)selectionWithTableInfo:(id)a0 columnIndices:(id)a1;
+ (id)selectionWithTableInfo:(id)a0 rowIndices:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)briefDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToSelection:(id)a0;
- (BOOL)areCellsInTheSameRegionInTable:(id)a0;
- (BOOL)containsCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (BOOL)containsSelection:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)insert:(long long)a0 atIndex:(unsigned int)a1 count:(unsigned int)a2;
- (BOOL)intersectsPartialMergeRangeInTable:(id)a0;
- (void)remove:(long long)a0 atIndex:(unsigned int)a1 count:(unsigned int)a2;
- (id)selectionByAddingCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 inTable:(id)a1 withAnchor:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 cursor:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a3 selectionType:(long long)a4;
- (id)selectionByExtendingWithCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 inTable:(id)a1 selectionType:(long long)a2 cursorCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a3;
- (id)selectionByRemovingCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 inTable:(id)a1 withAnchor:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 cursor:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a3 selectionType:(long long)a4;
- (void)setCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithTableInfo:(id)a0 andCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
- (BOOL)canEditWithCellSubselectionInTable:(id)a0;
- (BOOL)canEditWithControlCellSubselectionInTable:(id)a0;
- (BOOL)canEditWithStockCellSubselectionInTable:(id)a0;
- (BOOL)containsSingleCellOrMergeInTable:(id)a0;
- (BOOL)getAggregateType:(out unsigned char *)a0;
- (id)initForUpgradeWithTableInfo:(id)a0 cellRegion:(id)a1 anchorCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 cursorCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a3 baseRegion:(id)a4 selectionType:(long long)a5;
- (id)initWithRdar39989167Archive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithTableInfo:(id)a0 andCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (id)initWithTableInfo:(id)a0 andPreviousSelection:(id)a1 offsetBy:(struct TSUColumnRowOffset { int x0; int x1; })a2;
- (id)initWithTableInfo:(id)a0 cellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 selectionType:(long long)a2;
- (id)initWithTableInfo:(id)a0 cellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1 type:(long long)a2 anchorCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a3 cursorCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a4;
- (id)initWithTableInfo:(id)a0 cellRegion:(id)a1;
- (id)initWithTableInfo:(id)a0 cellRegion:(id)a1 anchorCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 cursorCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a3;
- (id)initWithTableInfo:(id)a0 cellRegion:(id)a1 anchorCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 cursorCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a3 baseRegion:(id)a4;
- (id)initWithTableInfo:(id)a0 cellRegion:(id)a1 anchorCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 cursorCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a3 baseRegion:(id)a4 selectionType:(long long)a5;
- (id)initWithTableInfo:(id)a0 cellRegion:(id)a1 anchorCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 cursorCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a3 baseRegion:(id)a4 selectionType:(long long)a5 searchReferenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 beginImplicitEditing:(BOOL)a7;
- (id)initWithTableInfo:(id)a0 cellRegion:(id)a1 anchorCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 cursorCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a3 selectionType:(long long)a4;
- (id)initWithTableInfo:(id)a0 cellUIDRegion:(id)a1 anchorCellUID:(struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a2 cursorCellUID:(struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a3 baseCellUIDRegion:(id)a4 selectionType:(long long)a5 searchReferenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 beginImplicitEditing:(BOOL)a7;
- (id)initWithTableInfo:(id)a0 columnIndices:(id)a1;
- (id)initWithTableInfo:(id)a0 rowIndices:(id)a1;
- (id)initWithTableInfo:(id)a0 rowOrColumn:(long long)a1 index:(unsigned int)a2 count:(unsigned int)a3;
- (id)initWithTableInfo:(id)a0 selectionType:(long long)a1;
- (id)initWithTableInfo:(id)a0 startingColumnIndex:(unsigned short)a1 numberOfColumns:(unsigned int)a2;
- (id)initWithTableInfo:(id)a0 startingRowIndex:(unsigned int)a1 numberOfRows:(unsigned int)a2;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })logicalCellIDInTable:(id)a0;
- (void)p_cacheBaseRegion:(id)a0;
- (void)p_cacheCellRegion:(id)a0;
- (id)p_selectionRemovingHiddenColumnsInTableInfo:(id)a0;
- (id)p_selectionRemovingHiddenRowsInTableInfo:(id)a0;
- (id)selectionAdjustedForGeometryInTableInfo:(id)a0;
- (id)selectionAdjustedForVisibilityInTableInfo:(id)a0;
- (id)selectionAdjustedForVisibilityInTableInfo:(id)a0 alwaysCheckColumns:(BOOL)a1;
- (id)selectionExpandedToCoverCollapsedRows;
- (id)selectionToBeginImplicitEditingInTableInfo:(id)a0;
- (BOOL)selectsSingleControlCellWithInteractionUIInTable:(id)a0;

@end