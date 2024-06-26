@class VMUScanOverlay, NSMapTable, VMUClassInfoMap, VMURangeArray, NSDictionary, NSMutableDictionary, VMUObjectIdentifier, NSMutableArray, VMUProcessObjectGraph, VMUVMRegionIdentifier, NSString, VMUDebugTimer, VMUTaskMemoryCache, VMUTaskThreadStates;

@interface VMUTaskMemoryScanner : NSObject <VMUCommonGraphInterface> {
    unsigned long long _suspendTime;
    unsigned int _suspensionToken;
    VMUVMRegionIdentifier *_regionIdentifier;
    unsigned int _blocksSize;
    struct _VMURegionMap { struct _VMUBlockNode *x0; unsigned int x1; unsigned long long x2; void *x3; struct _VMURegionNode *x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned int x8[0]; } *_regionMap;
    BOOL _initializedRegionMallocBlockCounts;
    id /* block */ _regionInfoBlock;
    VMURangeArray *_stackRanges;
    NSMutableArray *_zoneNames;
    struct _VMURange { unsigned long long location; unsigned long long length; } _dataSegmentsRangeInSharedCache;
    struct _VMURange { unsigned long long location; unsigned long long length; } _dataSegmentsRangeOutsideSharedCache;
    VMURangeArray *_dataSegmentsRangeArrayOutsideSharedCache;
    BOOL _targetProcessHasObjCPatches;
    NSMutableDictionary *_addressToRuntimeMetadataChunkInfoDict;
    struct _VMUZoneNode { unsigned long long x0; id x1; struct malloc_introspection_t *x2; } *_zones;
    unsigned int _zonesSize;
    VMUTaskThreadStates *_threadStates;
    unsigned int _threadsCount;
    struct _VMUInstanceValues { unsigned long long x0; id x1; } *_instanceValues;
    unsigned int _instanceValuesCount;
    unsigned int _instanceValuesSize;
    id *_classInfos;
    unsigned int _classInfosCount;
    VMUClassInfoMap *_classInfoIndexer;
    struct _VMUScanLocationCache **_scanCaches;
    void *_applySwiftMaskingToIsa;
    unsigned int _autoreleasePoolBoundaryNode;
    unsigned int _recordAutoreleasePoolBoundaries;
    NSMutableDictionary *_mappedFileNameToLengthDict;
    NSMapTable *_classStructureAddressToDestinationMapTable;
    unsigned int _objcClassStructureClassInfoIndex;
    unsigned int _classDataMethodsClassInfoIndex;
    unsigned int _swiftClassStructureClassInfoIndex;
    unsigned int _swiftMetadataClassInfoIndex;
    unsigned int _swiftHeapGenericLocalVariableClassInfoIndex;
    unsigned int _swiftMetadataMinBlockIndex;
    unsigned int _swiftMetadataMaxBlockIndex;
    unsigned long long _regionDescriptionOptions;
    id /* block */ _referenceLogger;
    id /* block */ _nodeLogger;
    VMUProcessObjectGraph *_processObjectGraph;
    void *_userMarkedAbandoned;
    NSMutableDictionary *_variantCachesByIsaIndex;
    NSMutableDictionary *_srcAddressToExtraAutoreleaseCountDict;
    unsigned long long _cfPasteboardReservedBase;
}

@property (readonly, nonatomic) unsigned long long suspendTimeContinuous;
@property (readonly, nonatomic) VMUTaskMemoryCache *memoryCache;
@property (readonly, nonatomic) VMUObjectIdentifier *objectIdentifier;
@property (readonly, nonatomic) VMUScanOverlay *scanOverlay;
@property (readonly, nonatomic) struct _VMURegionNode { id x0; unsigned int *x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; void *x7; struct _VMURegionNode *x8; } *regions;
@property (readonly, nonatomic) struct _VMUBlockNode { unsigned long long x0; unsigned char x1 : 3; unsigned char x2 : 2; unsigned long x3 : 36; unsigned int x4 : 23; } *blocks;
@property (nonatomic) BOOL abandonedMarkingEnabled;
@property (nonatomic) BOOL recordRuntimeMetadataChunkInfo;
@property (nonatomic) BOOL exactScanningEnabled;
@property (nonatomic) unsigned long long maxInteriorOffset;
@property (nonatomic) unsigned int scanningMask;
@property (retain, nonatomic) VMUDebugTimer *debugTimer;
@property (nonatomic) BOOL showRawClassNames;
@property (nonatomic) unsigned int objectContentLevel;
@property (readonly, nonatomic) unsigned int nodeCount;
@property (readonly, nonatomic) unsigned int zoneCount;
@property (readonly, nonatomic) unsigned int mallocNodeCount;
@property (readonly, nonatomic) VMUClassInfoMap *realizedClasses;
@property (readonly, nonatomic) unsigned int task;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BOOL is64bit;
@property (readonly, nonatomic) BOOL isTranslatedByRosetta;
@property (readonly, nonatomic) unsigned int vmPageSize;
@property (readonly, nonatomic) unsigned int kernelPageSize;
@property (readonly, nonatomic) BOOL hasClassInfosDerivedFromStackBacktraces;
@property (readonly, nonatomic) unsigned int regionCount;
@property (readonly, nonatomic) unsigned int nodeNamespaceSize;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *processDescriptionString;
@property (readonly, nonatomic) NSString *executablePath;
@property (readonly, nonatomic) NSString *binaryImagesDescription;
@property (readonly, nonatomic) unsigned long long physicalFootprint;
@property (readonly, nonatomic) unsigned long long physicalFootprintPeak;
@property (readonly, nonatomic) NSDictionary *ledger;
@property (readonly, nonatomic) unsigned int idleExitStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (BOOL)_suspend;
- (id)initWithTask:(unsigned int)a0;
- (struct { unsigned long long x0; unsigned long x1 : 60; unsigned char x2 : 4; id x3; })nodeDetails:(unsigned int)a0;
- (id)_recursivelyIdentifySwiftAsyncTaskSlabs:(unsigned long long)a0 containerRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a1 remoteBlock:(unsigned long long)a2 mappedBlock:(unsigned long long)a3 asyncTaskSlabMetadataIsa:(unsigned long long)a4 nestingLevel:(unsigned int)a5;
- (void)_findMarkedAbandonedBlocks;
- (id)_cachedVariantForGenericInfo:(id)a0 variantKey:(unsigned long long)a1;
- (id)processSnapshotGraph;
- (unsigned int)_removeFalsePositiveLeakedVMregionsFromNodes:(unsigned int *)a0 nodeCount:(unsigned int)a1 recorder:(id /* block */)a2;
- (unsigned int)enumerateMarkedObjects:(void *)a0 withBlock:(id /* block */)a1;
- (id)initWithSelfTaskAndOptions:(unsigned long long)a0;
- (BOOL)hasLabelsForNodes;
- (void)setCrashReporterInfoForMappedFileRegion:(struct _VMURegionNode { id x0; unsigned int *x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; void *x7; struct _VMURegionNode *x8; } *)a0 mappedRegionStartAddress:(unsigned long long)a1 mappedSize:(unsigned long long)a2 reason:(id)a3;
- (void)setNodeScanningLogger:(id /* block */)a0;
- (unsigned long long)_lengthOfMappedFileOfRegion:(id)a0;
- (void)_addThreadNodesFromTask;
- (unsigned int)enumerateObjectsWithBlock:(id /* block */)a0;
- (unsigned int)nodeForAddress:(unsigned long long)a0;
- (void)_identifyNonObjectsPointedToByTypedIvars:(unsigned int)a0;
- (void *)contentForNode:(unsigned int)a0;
- (void)_identifyNonObjectsPointingToSwiftMetadata:(unsigned int)a0;
- (void)_updateLinearClassInfos;
- (void)addMallocNodes:(id)a0;
- (id)initWithTask:(unsigned int)a0 options:(unsigned long long)a1;
- (id)vmuVMRegionForAddress:(unsigned long long)a0;
- (void)_fixupBlockIsas;
- (void)_identifyObjCClassStructureBlocks;
- (id)initFullyWithTask:(unsigned int)a0;
- (BOOL)addressIsInDataSegment:(unsigned long long)a0;
- (void)detachFromTask;
- (unsigned int)enumerateNodesWithBlock:(id /* block */)a0;
- (unsigned int)_indexForClassInfo:(id)a0;
- (void)_addSpecialNodesFromTask;
- (unsigned int)enumerateRegionsWithBlock:(id /* block */)a0;
- (unsigned int)enumerateReferencesWithBlock:(id /* block */)a0;
- (void)_sortAndClassifyBlocks;
- (void)addRootNodesFromTask;
- (void).cxx_destruct;
- (struct _VMURegionNode { id x0; unsigned int *x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; void *x7; struct _VMURegionNode *x8; } *)validateAddressRangeForSwiftRemoteMirror:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 allowUnusedSplitLibs:(BOOL)a1;
- (void)_callRemoteMallocEnumerators:(unsigned int)a0 block:(id /* block */)a1;
- (void)_destroyLinearClassInfos;
- (id)classInfoForObjectAtAddress:(unsigned long long)a0;
- (id)labelForNode:(unsigned int)a0;
- (void)_identifyNonObjectsUsingStackBacktrace;
- (id)shortLabelForNode:(unsigned int)a0;
- (void)_sortBlocks;
- (BOOL)doesTargetProcessHaveObjCPatches;
- (void)_shortenScannableRangeOfMappedFile:(unsigned int)a0;
- (unsigned long long)ledgerValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (id)vmuVMRegionForNode:(unsigned int)a0;
- (void)mapDyldSharedCacheFromTargetWithRegions:(id)a0;
- (void)applyTypeOverlayToMutableInfo:(id)a0;
- (void)setReferenceScanningLogger:(id /* block */)a0;
- (id)_initWithTask:(unsigned int)a0 options:(unsigned long long)a1;
- (void)_buildRegionFirstBlockIndexOnPageArrays;
- (void)addMallocNodesFromTask;
- (void)unmapAllRegions;
- (unsigned int)_nodeForAddress:(unsigned long long)a0 checkMaxInteriorOffset:(BOOL)a1;
- (void)dealloc;
- (void)refineTypesWithOverlay:(id)a0;
- (id)zoneNameForIndex:(unsigned int)a0;
- (void)_withOrderedNodeMapper:(id /* block */)a0;
- (void *)copyUserMarked;
- (void)clearCrashReporterInfoForMappedFileRegion;
- (void)_identifySwiftTypeNameCache;
- (id)zoneNameForNode:(unsigned int)a0;
- (void)scanNodesWithReferenceRecorder:(id /* block */)a0;
- (void)_registerVariant:(id)a0 forGenericInfo:(id)a1 variantKey:(unsigned long long)a2;
- (id)_readonlyRegionRanges;
- (void)_identifySwiftAsyncTaskSlabs;
- (void)printRuntimeMetadataInfo;
- (void)setClassStructureFieldScanValueAtSourceAddress:(void *)a0 toCorrectedAddress:(void *)a1;
- (id)processSnapshotGraphWithOptions:(unsigned long long)a0;
- (void)_withMemoryReaderBlock:(id /* block */)a0;

@end
