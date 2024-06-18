@class PPSQLDatabase, HKHealthStore;

@interface PPHealthKitImporter : NSObject {
    HKHealthStore *_healthStore;
    PPSQLDatabase *_db;
}

- (id)init;
- (id)initWithDatabase:(id)a0;
- (void).cxx_destruct;
- (void)importHealthKitData;
- (void)importHealthKitDataWithShouldContinueBlock:(id /* block */)a0;

@end
