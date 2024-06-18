@class NSMapTable, NSMutableDictionary, NSHashTable, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ATStatusMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_statusQueue;
    NSHashTable *_statusObservers;
    NSMapTable *_observerDataClasses;
    NSMutableSet *_statuses;
    NSMutableDictionary *_statusDictionary;
}

+ (id)sharedMonitor;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)updateStatusValuesWithDictionary:(id)a0;
- (void)updateStatus:(id)a0;
- (void).cxx_destruct;
- (id)allStatus;
- (void)updateStatusWithValue:(id)a0 forKey:(id)a1;
- (void)setDataClasses:(id)a0 forObserver:(id)a1;
- (void)addObserver:(id)a0;
- (void)updateAssets:(id)a0;

@end
