@class _DPPrivacyBudgetRecord, _DPPrivacyBudgetProperties, NSString;

@interface _DPPrivacyBudget : NSObject

@property (readonly, nonatomic) _DPPrivacyBudgetProperties *budgetProperties;
@property (retain) _DPPrivacyBudgetRecord *budgetRecord;
@property (readonly, copy, nonatomic) NSString *name;

+ (void)resetLastUpdateDateForName:(id)a0;
+ (BOOL)isMultiDayIntervalBudgetWithName:(id)a0;
+ (id)fetchBudgetKeyNamesFrom:(id)a0;
+ (BOOL)credit:(unsigned long long)a0 budgetWithName:(id)a1;
+ (BOOL)createDatabaseRecordIfMissingIn:(id)a0 key:(id)a1 balance:(long long)a2 cohortAggregateBalance:(double)a3;
+ (void)updateAllBudgetsIn:(id)a0;
+ (void)initialize;
+ (void)resetAllBudgetRecordsIn:(id)a0;
+ (void)updateBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;
+ (id)fetchBudgetRecordFrom:(id)a0 key:(id)a1;
+ (double)balanceForCohortAggregateBudgetWithName:(id)a0;
+ (BOOL)debit:(unsigned long long)a0 budgetWithName:(id)a1;
+ (id)enforceBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;
+ (id)budgetWithName:(id)a0;
+ (BOOL)creditCohortAggregate:(double)a0 budgetWithName:(id)a1;
+ (void)createBudgetRecordsIn:(id)a0;
+ (void)updateEnhancedBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;
+ (void)updateAllBudgetsUnsafeIn:(id)a0;
+ (id)enforceSimpleBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;
+ (long long)balanceForBudgetWithName:(id)a0;
+ (id)enforceEnhancedBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;
+ (void)removeBudgetWithName:(id)a0;
+ (BOOL)debitCohortAggregate:(double)a0 budgetWithName:(id)a1;
+ (void)updateSimpleBudgetForRecords:(id)a0 withKey:(id)a1 inDatabase:(id)a2;

- (id)init;
- (id)initWithName:(id)a0 budgetProperties:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)initializeBudgetRecordFrom:(id)a0;

@end
