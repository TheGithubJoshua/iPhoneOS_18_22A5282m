@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSMapTable;

@interface ARTechniqueParallelGatherContext : ARTechniqueGatherContext {
    ARTechniqueParallelGatherContext *_previousContext;
    NSIndexSet *_requiredTechniqueIndices;
    NSIndexSet *_deterministicTechniqueIndices;
    NSMutableDictionary *_gatheredDataByTechniqueIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _gatherLock;
    NSMutableIndexSet *_lateResultTechniqueIndices;
    NSMapTable *_techniquesByIndex;
    BOOL _resultsCaptured;
}

@property BOOL requiredTimeIntervalComplete;
@property (readonly, nonatomic) unsigned long long techniqueCount;

- (void).cxx_destruct;
- (id)description;
- (id)_allGatheredDataByTechniqueIndex;
- (id)addResultData:(id)a0 forTechniqueAtIndex:(unsigned long long)a1;
- (id)captureGatheredData;
- (BOOL)deterministicResultsCaptured;
- (id)gatheredData;
- (unsigned long long)indexForTechnique:(id)a0;
- (id)initWithParentContext:(id)a0 previousContext:(id)a1 requiredTechniqueIndices:(id)a2 deterministicTechniqueIndices:(id)a3 techniques:(id)a4;
- (id)lateResultDataForTechniqueAtIndex:(unsigned long long)a0;

@end
