@class NSString, NSObject, PXAssetsDataSourceManager;
@protocol OS_dispatch_queue;

@interface PXAssetsDataSourceCountsController : PXObservable <PXMutableAssetsDataSourceCountsController, PXAssetsDataSourceManagerObserver> {
    NSObject<OS_dispatch_queue> *_prepareCountsQueue;
}

@property (nonatomic) BOOL isPreparingAssetTypeCounts;
@property (nonatomic) BOOL hasUsableCounts;
@property (nonatomic) BOOL waitingToPrepare;
@property (readonly, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager;
@property (readonly, nonatomic) struct { unsigned long long photosCount; unsigned long long videosCount; unsigned long long othersCount; } counts;
@property (readonly, nonatomic) struct { unsigned long long photosCount; unsigned long long videosCount; unsigned long long othersCount; } guestCounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithAssetsDataSourceManager:(id)a0;
- (void)_dataSourceManagerDidChange;
- (void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)a0;
- (void).cxx_destruct;
- (void)_updateCounts;
- (void)_handlePreparationCompletion;
- (void)_prepareCounts;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_prepareDataSource:(id)a0;
- (void)setGuestCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)prepareCountsIfNeeded;
- (void)setCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;

@end
