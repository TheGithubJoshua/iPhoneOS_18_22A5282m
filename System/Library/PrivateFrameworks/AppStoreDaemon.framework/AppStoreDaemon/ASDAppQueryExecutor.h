@class ASDServiceBroker, ASDDispatchQueue, NSMutableDictionary;

@interface ASDAppQueryExecutor : NSObject {
    ASDDispatchQueue *_dispatchQueue;
    NSMutableDictionary *_queryPromises;
    ASDServiceBroker *_serviceBroker;
}

@property (nonatomic) long long queryOptions;

- (id)init;
- (id)initWithServiceBroker:(id)a0;
- (void)executeQueryWithPredicate:(id)a0 onPairedDevice:(id)a1 withResultHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
