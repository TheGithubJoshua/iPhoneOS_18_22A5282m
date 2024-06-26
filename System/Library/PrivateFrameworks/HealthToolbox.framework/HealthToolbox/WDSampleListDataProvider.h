@class NSString, NSPredicate, HKHealthStore, HKDisplayType, NSDictionary, WDProfile, HKSortedSampleArray, HKSampleListDataProviderFilter;

@interface WDSampleListDataProvider : NSObject <HKSampleTypeUpdateControllerObserver, WDDataListViewControllerDataProvider, HKDataMetadataViewControllerDelegate> {
    NSDictionary *_pagingContexts;
    HKSampleListDataProviderFilter *_defaultQueryPredicateFilter;
    id /* block */ _updateCallback;
    BOOL _didFetchInitialData;
}

@property (readonly, weak, nonatomic) WDProfile *profile;
@property (readonly, nonatomic) HKSortedSampleArray *samples;
@property (copy, nonatomic) NSString *profileName;
@property (readonly, nonatomic) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSPredicate *defaultQueryPredicate;
@property (readonly, nonatomic) long long cellStyle;
@property (readonly, nonatomic) unsigned long long numberOfSections;
@property (readonly, nonatomic) BOOL textAdjustsFontSizeToFitWidth;
@property (nonatomic) BOOL hasDetailViewController;
@property (readonly, nonatomic) double customCellHeight;
@property (readonly, nonatomic) double customEstimatedCellHeight;
@property (readonly) BOOL hasCompleteDataSet;
@property (readonly) BOOL calendarDateSelectorVisible;
@property (readonly, nonatomic) HKHealthStore *healthStore;

- (id)sampleTypes;
- (void).cxx_destruct;
- (void)deleteAllData;
- (id)titleForSection:(unsigned long long)a0;
- (id)accessViewControllerForSample:(id)a0 healthStore:(id)a1;
- (id)defaultPredicateForSampleType:(id)a0;
- (id)displayTypeController;
- (BOOL)shareDocumentUsingSample:(id)a0;
- (id)unitController;
- (id)viewControllerForSampleType:(id)a0 subSamplePredicate:(id)a1 title:(id)a2;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1;
- (id)textForObject:(id)a0;
- (id)viewControllerForItemAtIndexPath:(id)a0;
- (void)stopCollectingData;
- (void)_callUpdateHandler;
- (void)updateController:(id)a0 didReceiveHighFrequencyUpdateForType:(id)a1;
- (void)updateController:(id)a0 didReceiveUpdateForType:(id)a1 samplesAdded:(id)a2 objectsRemoved:(id)a3 recoveringFromError:(BOOL)a4;
- (void)_stopAllQueries;
- (void)viewControllerIsNearEndOfScreen;
- (id)_UUIDsForSamplesWithEndDate:(id)a0;
- (id)_defaultPredicateWithPredicateForType:(id)a0;
- (BOOL)_handleObjectsRemoved:(id)a0;
- (void)_handleQueryResultsForSampleType:(id)a0 results:(id)a1;
- (id)_pagingContextForSampleType:(id)a0;
- (void)_requestNextPageOfData;
- (void)_requestNextPageOfDataForSampleType:(id)a0;
- (void)_resetAllData;
- (id)_samplesSortDescriptor;
- (BOOL)canEditRowAtIndexPath:(id)a0;
- (id)createDataFetcherForSampleType:(id)a0 predicate:(id)a1 limit:(long long)a2 sortDescriptors:(id)a3 resultsHandler:(id /* block */)a4;
- (id)createQueryForSampleType:(id)a0 predicate:(id)a1 limit:(long long)a2 sortDescriptors:(id)a3 resultsHandler:(id /* block */)a4;
- (id)customCellForObject:(id)a0 indexPath:(id)a1 tableView:(id)a2;
- (void)customizeTableView:(id)a0;
- (void)deleteObjectsAtIndexPath:(id)a0 healthStore:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)a0;
- (id)predicateForType:(id)a0;
- (id)queryDateForSelectedDate:(id)a0;
- (void)refineSamplesWithCompletion:(id /* block */)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1 sectionRemoved:(BOOL *)a2;
- (id)secondaryTextForObject:(id)a0;
- (void)startCollectingDataWithUpdateHandler:(id /* block */)a0;
- (void)viewControllerWantsDataIncludingDate:(id)a0;

@end
