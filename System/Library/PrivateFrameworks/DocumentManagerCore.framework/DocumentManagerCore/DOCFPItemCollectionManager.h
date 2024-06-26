@class NSArray, NSCountedSet;

@interface DOCFPItemCollectionManager : NSObject {
    NSCountedSet *_activeCollections;
}

@property (readonly, copy, nonatomic) NSArray *observingCollections;
@property (readonly, nonatomic) NSArray *notificationObservances;

+ (id)sharedManager;

- (id)init;
- (void)applicationDidEnterBackground;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applicationWillEnterForegroundNotification;
- (void)collectionDidStartObserving:(id)a0;
- (void)collectionDidStopObserving:(id)a0;

@end
