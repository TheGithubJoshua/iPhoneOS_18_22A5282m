@class NSMutableDictionary, NSArray, TSCHChartInfo, NSDictionary, NSMutableArray, TSCHChartGrid;

@interface TSCHChartModel : NSObject <TSCHNotifyOnModify, TSDMixing, NSCopying> {
    BOOL _modelInvalid;
    NSDictionary *_axisIDToDataFormatterPersistableStyleObjectsMap;
    NSDictionary *_seriesIndexToDataFormatterPersistableStyleObjectsMap;
    BOOL _disableCachingMediatorData;
    int _cachedChartMediatorGridDirection;
    NSMutableDictionary *_modelManagedCaches;
}

@property (readonly, nonatomic) BOOL isTransient;
@property (retain, nonatomic) NSMutableDictionary *seriesDimensionsByGridIndex;
@property (retain, nonatomic) NSMutableDictionary *gridIndexesBySeriesDimension;
@property (weak, nonatomic) TSCHChartInfo *chart;
@property (weak, nonatomic) TSCHChartInfo *chartInfo;
@property (retain, nonatomic) TSCHChartGrid *grid;
@property (nonatomic) int scatterFormat;
@property (nonatomic) unsigned long long multiDataSetIndex;
@property (readonly, nonatomic) BOOL isMultiData;
@property (readonly, nonatomic) unsigned long long numberOfMultiDataSets;
@property (readonly, nonatomic) unsigned long long numberOfMultiDataSetCategories;
@property (readonly, nonatomic) unsigned long long numberOfChunkableMultiDataSets;
@property (readonly, nonatomic) unsigned long long numberOfSeries;
@property (readonly, nonatomic) unsigned long long numberOfSeriesForCalculatingBarWidth;
@property (readonly, nonatomic) unsigned long long numberOfValues;
@property (readonly, nonatomic) unsigned long long maxNumberOfReferenceLines;
@property (readonly, nonatomic) unsigned long long numberOfGroupsInAllSeries;
@property (readonly, nonatomic) unsigned long long analyticsDataSize;
@property (readonly, copy, nonatomic) NSMutableArray *seriesList;
@property (readonly, copy, nonatomic) NSMutableArray *axisList;
@property (readonly, copy, nonatomic) NSArray *valueAxisList;
@property (readonly, copy, nonatomic) NSArray *categoryAxisList;
@property (readonly, copy, nonatomic) NSDictionary *referenceLinesMap;
@property (readonly, nonatomic) id syncRoot;

- (void)invalidateCaches;
- (id)init;
- (id)cachedObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)validateIfNeeded;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)willModify;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)invalidateModel;
- (void)forceLoadDefaultData;
- (unsigned long long)gridIndexForSeriesDimension:(id)a0;
- (id)initWithChartInfo:(id)a0;
- (id)seriesDimensionForGridIndex:(unsigned long long)a0;
- (id)nameForCategory:(unsigned long long)a0;
- (unsigned long long)styleSwapIndexForReferenceLine:(id)a0;
- (id)initWithChartInfo:(id)a0 dataSetIndex:(unsigned long long)a1;
- (id)referenceLineForStyleSwapIndex:(unsigned long long)a0;
- (id)addAxisOfClass:(Class)a0 forIDForPresetImport:(id)a1;
- (id)addSeriesAtIndexForPresetImport:(unsigned long long)a0;
- (id)allGroupsIndexSetForSeries:(id)a0;
- (unsigned long long)archivedMultiDataSetIndex;
- (id)axisForID:(id)a0;
- (id)barModelCacheForSeries:(unsigned long long)a0;
- (int)cachedChartMediatorGridDirection;
- (id)cachedDataFormatterPersistableStyleObjectAtSeriesIndex:(unsigned long long)a0;
- (id)cachedDataFormatterPersistableStyleObjectForID:(id)a0;
- (unsigned long long)categoryForMultiDataSetCategoryIndex:(unsigned long long)a0;
- (void)clearTextEditingSelectionPath;
- (id)dataSetNameForMultiDataModel;
- (unsigned long long)defaultOrdinalForAxisType:(int)a0 seriesIndex:(unsigned long long)a1;
- (void)disableCachingMediatorDataDuringBlock:(id /* block */)a0;
- (void)enumerateMultiDataModelsUsingBlock:(id /* block */)a0;
- (BOOL)hasReferenceLines;
- (id)initForPresetImportWithChartInfo:(id)a0;
- (id)legendModelCacheForStyleProvidingSource:(id)a0;
- (id)lineAreaModelCacheForSeries:(unsigned long long)a0;
- (void)loadDefaultDataIfNotDirty;
- (void)loadDefaultDataIfNotDirtyWithGridRowIds:(id)a0 gridColumnIds:(id)a1 forDocumentLocale:(id)a2;
- (void)loadFromPreUFFArchive:(const void *)a0 unarchiver:(id)a1 contextForUpgradeOnly:(id)a2;
- (void)loadFromUnityArchive:(const void *)a0 unarchiver:(id)a1 contextForUpgradeOnly:(id)a2 chartInfo:(id)a3;
- (unsigned long long)maxNumberOfReferenceLines;
- (unsigned long long)multiDataSetCategoryIndexForCategory:(unsigned long long)a0;
- (id)nameForMultiDataSetCategory:(unsigned long long)a0;
- (id)nameForSeries:(unsigned long long)a0;
- (id)noSyncAxisList;
- (id)noSyncSeriesList;
- (unsigned long long)numberOfGridValues;
- (unsigned long long)numberOfGroupsInSeries:(id)a0;
- (unsigned long long)numberOfGroupsInSeriesAtIndex:(unsigned long long)a0;
- (id)p_axisForID:(id)a0;
- (void)p_cacheAxisDataFormatters;
- (void)p_cacheMediatorChartGridDirection;
- (void)p_cacheSeriesDataFormatters;
- (BOOL)p_disableCachingMediatorData;
- (unsigned long long)p_lastMultiDataSetIndex;
- (void)p_loadDefaultData;
- (void)p_loadDefaultDataWithGridRowIds:(id)a0 gridColumnIds:(id)a1 forDocumentLocale:(id)a2;
- (unsigned long long)p_multiDataSetCategoryIndexForCategory:(unsigned long long)a0;
- (unsigned long long)p_numberOfGroupsInSeries:(id)a0;
- (void)p_postSynchronizeAxisList;
- (void)p_setBimapEntryForSeriesDimension:(id)a0 andGridIndex:(unsigned long long)a1;
- (BOOL)p_shouldLoadDefaultData;
- (void)p_synchronizeAxis:(id)a0 class:(Class)a1 axisID:(id)a2 axisIndex:(unsigned long long)a3 styleIndex:(unsigned long long)a4 usedAxes:(id)a5 unusedAxes:(id)a6;
- (void)p_synchronizeAxisList;
- (void)p_synchronizeModel;
- (void)p_synchronizeModelWithSeriesNonStyleMigration:(BOOL)a0;
- (void)p_synchronizeReferenceLines;
- (void)p_synchronizeSeriesListWithSeriesNonStyleMigration:(BOOL)a0;
- (id)pieSeriesModelCacheForSeries:(unsigned long long)a0;
- (void)resetSeriesStorage;
- (void)saveToUnityArchive:(void *)a0 forCopy:(BOOL)a1;
- (id)seriesAtIndex:(unsigned long long)a0;
- (id)seriesForHiddenDataExportAtIndex:(unsigned long long)a0;
- (void)setCacheObject:(id)a0 forKey:(id)a1;
- (void)setNameForCategory:(unsigned long long)a0 toName:(id)a1;
- (void)setNameForMultiDataSetCategory:(unsigned long long)a0 toName:(id)a1;
- (void)setNameForSeries:(unsigned long long)a0 toName:(id)a1;
- (void)setShouldCacheMediatorData:(BOOL)a0;
- (void)setTextEditingSelectionPath:(id)a0 string:(id)a1;
- (void)updateTransientModelFromInfoModel;
- (void)validateIfNeededWithSeriesNonStyleMigration:(BOOL)a0;

@end