@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSRankingFeedbackHandler : NSObject

@property (retain) NSMutableDictionary *mapProtectionClassToBundleIdToItem;
@property (retain) NSMutableArray *sectionCSItems;
@property (retain) NSObject<OS_dispatch_queue> *countQueue;
@property (retain) NSObject<OS_dispatch_queue> *fetchQueue;

+ (id)sharedInstance;
+ (id)copyRenderEngagementCounts;

- (id)init;
- (void)testCountsUptoWeek;
- (void)testCountsMovingDaysInPast;
- (id)fetchResults;
- (void)testCountsUptoQuarter;
- (void)testCountsUptoYear;
- (id)getSyntheticTestRankingItemsForStressTest;
- (void)resetResultWithRankingItems:(id)a0;
- (void)stressTestCounts;
- (void)_indexItemWithIdentifier:(id)a0 bundleID:(id)a1 startDate:(id)a2 pc:(id)a3;
- (void)testCountsMovingCoupleOfYearsInPast;
- (void)writeRenderAndEngagementInfo;
- (void)resultsWithRankingItemsDidBecomeVisible:(id)a0 date:(id)a1 protectionClassMapping:(id)a2;
- (void)testForDurationWithIntervals:(int *)a0 maxIndex:(int)a1 duration:(long long)a2 counts:(id)a3;
- (void).cxx_destruct;
- (void)testCountsUptoMonth;
- (void)testCountsUptoHalfYear;
- (void)testCountsMovingYearInPast;
- (void)testCountsAfterYear;
- (void)testForDummyEntry;
- (void)fetchBundleRenderAndEngagementInfo:(id)a0;
- (void)testCountsAfterCoupleYears;
- (void)didEngageResultWithRankingItem:(id)a0 startDate:(id)a1 protectionClass:(id)a2;
- (void)testCountsUptoOneDay;
- (id)getSyntheticTestRankingItem;
- (void)testCountsForRegularEngagement;
- (void)fetchBundleRenderAndEngagementInfo;

@end
