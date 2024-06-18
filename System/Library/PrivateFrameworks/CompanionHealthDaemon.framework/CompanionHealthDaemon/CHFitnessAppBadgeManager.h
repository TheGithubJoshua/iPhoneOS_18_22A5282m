@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface CHFitnessAppBadgeManager : NSObject {
    NSHashTable *_providers;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (id)init;
- (long long)_badgeCount;
- (void)_launchFitnessApp;
- (void)_storeBadgeCount:(long long)a0;
- (void).cxx_destruct;
- (void)registerProvider:(id)a0;
- (void)requestBadgeUpdate;
- (long long)_loadBadgeCount;
- (void)unregisterProvider:(id)a0;

@end
