@class TSCECalculationEngine, TSTCellRangeCache, NSString, TSTFormulaStore, TSTTableModel, TSTMergeChangeDistributor;

@interface TSTMergeOwner : NSObject <TSCEFormulaOwning>

@property (retain, nonatomic) TSTCellRangeCache *mergeRangeCache;
@property (nonatomic) BOOL mergeCacheLoaded;
@property (readonly, weak, nonatomic) TSTTableModel *tableModel;
@property (weak, nonatomic) TSCECalculationEngine *calculationEngine;
@property (retain, nonatomic) TSTFormulaStore *formulaStore;
@property (retain, nonatomic) TSTMergeChangeDistributor *mergeChangeDistributor;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL isEmpty;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } ownerUID;
@property (readonly, nonatomic) struct unordered_map<TSUModelCellCoord, TSUModelCellCoord, std::hash<TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, std::allocator<std::pair<const TSUModelCellCoord, TSUModelCellCoord>>> { struct __hash_table<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::__unordered_map_hasher<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::hash<TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, true>, std::__unordered_map_equal<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, std::hash<TSUModelCellCoord>, true>, std::allocator<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::hash<TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, std::hash<TSUModelCellCoord>, true>> { float __value_; } __p3_; } __table_; } mergeOriginsMap;
@property (readonly, nonatomic) struct unordered_map<TSUModelCellCoord, TSUModelCellCoord, std::hash<TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, std::allocator<std::pair<const TSUModelCellCoord, TSUModelCellCoord>>> { struct __hash_table<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::__unordered_map_hasher<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::hash<TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, true>, std::__unordered_map_equal<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, std::hash<TSUModelCellCoord>, true>, std::allocator<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::hash<TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSUModelCellCoord, std::__hash_value_type<TSUModelCellCoord, TSUModelCellCoord>, std::equal_to<TSUModelCellCoord>, std::hash<TSUModelCellCoord>, true>> { float __value_; } __p3_; } __table_; } reverseOriginsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct vector<TSUCellRect, std::allocator<TSUCellRect>> { struct TSUCellRect *x0; struct TSUCellRect *x1; struct __compressed_pair<TSUCellRect *, std::allocator<TSUCellRect>> { struct TSUCellRect *x0; } x2; })mergeListFromModelMergeList:(const void *)a0;

- (BOOL)find:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)evaluationMode;
- (BOOL)hasMergeRanges;
- (id)initWithTableModel:(id)a0;
- (struct vector<TSUModelCellRect, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; struct TSUModelCellRect *x1; struct __compressed_pair<TSUModelCellRect *, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; } x2; })mergeRanges;
- (id)mergedGridIndicesForDimension:(long long)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)invalidateForCalcEngine:(id)a0;
- (id)linkedResolver;
- (struct TSCERecalculationState { unsigned char x0; })multiEvaluateFormulasAt:(const void *)a0 withCalcEngine:(id)a1 recalcOptions:(struct TSCERecalculationState { unsigned char x0; })a2;
- (unsigned short)ownerKind;
- (void)writeResultsForCalcEngine:(id)a0;
- (unsigned long long)markForRollback;
- (void)resetMergeCache;
- (void)rollbackToMark:(unsigned long long)a0;
- (id)allMergesAsString;
- (struct vector<TSUModelCellRect, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; struct TSUModelCellRect *x1; struct __compressed_pair<TSUModelCellRect *, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; } x2; })allValidMergesForMergeList:(const void *)a0;
- (void)assertCollaborationConvergence;
- (void)clearAllMergeRanges;
- (void)commitRewritingTransaction;
- (void)enumerateMergeFormulasUsingBlock:(id /* block */)a0;
- (void)enumerateMergesIntersectingBaseCellRegion:(id)a0 usingBlock:(id /* block */)a1;
- (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })expandBaseCellRectToCoverMergedCells:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (id)expandBaseCellRegionToCoverMergedCells:(id)a0;
- (BOOL)hasMergeRangeSpanningRowsForBaseCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (BOOL)hasMergeRangesIntersectingBaseCellRect:(const struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; } *)a0;
- (BOOL)hasMergeRangesIntersectingBaseCellRegion:(id)a0;
- (BOOL)hasRangeSpanningRowsForCellRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (BOOL)hasRangeSpanningRowsForCellRegion:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1 forTableModel:(id)a2;
- (id)initWithTableModel:(id)a0 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)insertBaseMergeRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (BOOL)insertBaseMergeRangeRemovingOverlaps:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (BOOL)isValidMergeRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (void)loadMergeCache;
- (id)mergeActionForBaseCellRegion:(id)a0;
- (id)mergeActionForBaseCellRegion:(id)a0 nonOriginPartialsOnly:(BOOL)a1;
- (id)mergeIndexesForBaseCellRegion:(id)a0;
- (id)mergeIndexesForRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })mergeOriginForBaseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a0;
- (struct vector<TSUModelCellRect, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; struct TSUModelCellRect *x1; struct __compressed_pair<TSUModelCellRect *, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; } x2; })mergeRangesAndCrumbsIntersectingBaseCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (struct vector<TSUModelCellRect, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; struct TSUModelCellRect *x1; struct __compressed_pair<TSUModelCellRect *, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; } x2; })mergeRangesIntersectingBaseCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (struct vector<TSUModelCellRect, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; struct TSUModelCellRect *x1; struct __compressed_pair<TSUModelCellRect *, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; } x2; })mergeRangesIntersectingBaseCellRegion:(id)a0;
- (BOOL)mergeRangesPartiallyIntersectBaseCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (BOOL)mergeRangesPartiallyIntersectBaseCellRegion:(id)a0;
- (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })mergedRangeForBaseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a0;
- (void)openRewritingTransaction;
- (void)p_dirtyCellsForMerge:(const struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; } *)a0;
- (void)p_enumerateMergesUsingBlock:(id /* block */)a0;
- (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })p_growRangeFrom:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0 toDesired:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a1;
- (id)p_growReturningInverseForAction:(id)a0 formulaReplacer:(id)a1;
- (void)p_moveCellFromCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a0 toCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1;
- (id)p_shrinkMergesAtIndexes:(id)a0 intersectedByBaseRegion:(id)a1 formulaReplacer:(id)a2;
- (id)p_shrinkReturningInverseForAction:(id)a0 formulaReplacer:(id)a1;
- (void)p_updateOriginMapWithSourceCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a0 destCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1;
- (id)performActionReturningInverse:(id)a0 formulaReplacer:(id)a1;
- (int)registerWithCalcEngine:(id)a0 baseOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)reloadMergeCacheForIndexes:(id)a0;
- (void)remapTableUIDsInFormulasWithMap:(const void *)a0 calcEngine:(id)a1;
- (void)removeBaseMergeRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (id)removeReturningInverseForBaseCellRegion:(id)a0;
- (void)resetMergeOriginMap;
- (void)rewriteMergesForInsertedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 uids:(const void *)a1 isRows:(BOOL)a2;
- (void)rewriteMergesForRemovedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 uids:(const void *)a1 isRows:(BOOL)a2;
- (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })rewroteFormula:(id)a0 atCoordinate:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1 withRewriteSpec:(id)a2 isUndo:(BOOL)a3;
- (id)shrinkReturningInverseForBaseCellRegion:(id)a0;
- (id)shrinkReturningInverseForBaseCellRegion:(id)a0 formulaReplacer:(id)a1;
- (void)unregisterFromCalcEngine;

@end