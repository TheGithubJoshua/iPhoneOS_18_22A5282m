@class HKObserverSet, HDOntologyUpdateCoordinator, NSObject;
@protocol OS_dispatch_queue, HDOntologyShardDownloaderObserver;

@interface HDOntologyShardDownloader : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet<HDOntologyShardDownloaderObserver> *_ontologyShardDownloaderObservers;
}

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;

- (id)init;
- (void)addOntologyShardDownloaderObserver:(id)a0 queue:(id)a1;
- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (void).cxx_destruct;
- (void)downloadRequiredShardFilesWithSession:(id)a0 completion:(id /* block */)a1;
- (void)removeOntologyShardDownloaderObserver:(id)a0;

@end
