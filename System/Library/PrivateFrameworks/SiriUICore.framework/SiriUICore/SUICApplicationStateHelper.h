@class FBSDisplayLayoutMonitor, NSMutableDictionary, BKSApplicationStateMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface SUICApplicationStateHelper : NSObject {
    BKSApplicationStateMonitor *_appStateMonitor;
    FBSDisplayLayoutMonitor *_displayLayoutMonitor;
    FBSDisplayLayoutMonitor *_carplayDisplayLayoutMonitor;
    NSMutableDictionary *_foregroundAppInfos;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)_appInfoDictionariesForDisplayLayout:(id)a0 completion:(id /* block */)a1;
- (void)_updateForAppInfoDictionaries:(id)a0 displayType:(id)a1;
- (id)foregroundAppInfosForCarPlay;
- (void).cxx_destruct;
- (id)foregroundAppInfos;
- (void)dealloc;
- (void)_updateForAppInfoDictionaries:(id)a0;
- (void)_handleApplicationStateUpdate:(id)a0;
- (id)_foregroundAppInfosFor:(long long)a0;

@end
