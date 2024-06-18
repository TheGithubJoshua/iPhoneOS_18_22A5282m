@class NSString, NSDictionary, _PASSimpleCoalescingTimer, ATXSigtermListener, NSObject, _PASLock;
@protocol OS_os_transaction, OS_dispatch_queue;

@interface ATXStackStateTracker : NSObject <ATXSigtermObserver> {
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedPersistInternalStateOperation;
    _PASLock *_internalStateLock;
    NSString *_path;
    ATXSigtermListener *_sigtermListener;
}

@property (retain, nonatomic) NSDictionary *currentSuggestionsWidgetLayouts;
@property (retain, nonatomic) NSDictionary *currentAppPredictionPanelLayouts;

+ (id)sharedInstance;

- (id)init;
- (id)topWidgetUniqueIdOfStack:(id)a0;
- (id)lastStackShownEvent:(id)a0;
- (void)setLayoutForLastStalenessRotation:(id)a0 stackId:(id)a1 date:(id)a2;
- (id)lastStackRotationEvent:(id)a0;
- (id)layoutForLastStalenessRotation:(id)a0;
- (id)stackStateForStackId:(id)a0;
- (id)lastUserScrollStackRotationEvent:(id)a0;
- (void)cleanupOldDataWithHomeScreenPages:(id)a0;
- (void)coalescedPersistInternalState;
- (id)dataFromDisk;
- (BOOL)stackWasCreatedALongTimeAgo:(id)a0;
- (BOOL)lastStalenessRotationWasALongTimeAgoForStackId:(id)a0;
- (id)initTrackerInDirectory:(id)a0;
- (void).cxx_destruct;
- (void)updateStackRotationEventsByQueryingBiome;
- (BOOL)mostRecentRotationOfStackIsSystemInitiated:(id)a0;
- (BOOL)loadInternalState;
- (BOOL)persistInternalState;
- (id)stackCreationEvent:(id)a0;
- (id)lastThreeUserVisitDatesOfPage:(unsigned long long)a0;
- (BOOL)stackIsStale:(id)a0;
- (void)handleSigterm;
- (void)_persistInternalStateImmediatelyOnSigterm;
- (BOOL)lastStackRotationWasALongTimeAgoForStackId:(id)a0;
- (id)jsonRepresentation;
- (BOOL)lastUserScrollWasALongTimeAgoForStackId:(id)a0;
- (void)updateStackRotationEvents;
- (id)_blendingCacheIdToStackIdMap:(id)a0;

@end
