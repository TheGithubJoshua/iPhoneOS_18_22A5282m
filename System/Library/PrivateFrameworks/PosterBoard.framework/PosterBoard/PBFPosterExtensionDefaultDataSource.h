@class NSArray, NSString, NSPredicate, NSObject, _EXQueryController;
@protocol OS_dispatch_queue, PBFPosterExtensionProviderDelegate;

@interface PBFPosterExtensionDefaultDataSource : NSObject <_EXQueryControllerDelegate, PBFPosterExtensionProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_queue_queries;
    _EXQueryController *_queue_queryController;
    NSArray *_queue_knownPosterExtensions;
    BOOL _queue_started;
}

@property (retain, nonatomic) NSArray *knownPosterExtensions;
@property (retain, nonatomic) NSPredicate *predicate;
@property (weak, nonatomic) id<PBFPosterExtensionProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionKitQuery;

- (void)_queue_start;
- (void)_queue_teardownQueryController;
- (id)init;
- (id)knownPosterExtensions;
- (void)queryControllerDidUpdate:(id)a0 resultDifference:(id)a1;
- (void)start;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_queue_executeQuery;
- (void)_queue_notifyDataStoreOfUpdatedExtensions:(id)a0;

@end
