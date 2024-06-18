@class NSMapTable;

@interface SGCuratedChangeNotificationsBaseListener : NSObject {
    NSMapTable *_liveObserversMap;
}

- (void)startListening;
- (id)init;
- (void)stopListening;
- (void)fire;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObserver:(id /* block */)a0 forObjectLifetime:(id)a1;

@end
