@class MTBaseQueryObserver, MTDefaultsChangeNotifier, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface MTBaseProcessor : NSObject {
    BOOL _isStopping;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) MTDefaultsChangeNotifier *defaultsNotifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject *isStoppingLock;
@property (nonatomic) BOOL isStopping;
@property (retain, nonatomic) MTBaseQueryObserver *queryObserver;

+ (id)sharedInstance;
+ (void)initialize;

- (id)init;
- (BOOL)isRunning;
- (id)entityName;
- (void)stop;
- (BOOL)start;
- (id)predicate;
- (void).cxx_destruct;
- (void)results:(id /* block */)a0;
- (void)enqueueWorkBlock:(id /* block */)a0;
- (void)updatePredicate;
- (id)createQueryObserver;
- (id)defaultPropertiesThatAffectPredicate;
- (void)resultsChangedWithDeletedIds:(id)a0 insertIds:(id)a1 updatedIds:(id)a2;
- (double)updatePredicateDuration;

@end
