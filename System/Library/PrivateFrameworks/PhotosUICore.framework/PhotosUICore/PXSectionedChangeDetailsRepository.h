@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXSectionedChangeDetailsRepository : NSObject {
    NSMutableArray *_allChangeDetails;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) long long historyLimit;

- (void)addChangeDetails:(id)a0;
- (id)init;
- (id)initWithChangeHistoryLimit:(long long)a0;
- (void).cxx_destruct;
- (id)coalescedChangeDetailsFromDataSourceIdentifier:(long long)a0 toDataSourceIdentifier:(long long)a1;
- (id)changeDetailsFromDataSourceIdentifier:(long long)a0 toDataSourceIdentifier:(long long)a1;

@end
