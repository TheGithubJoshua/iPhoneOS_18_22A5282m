@class NSXPCListener, NSString, WGWidgetDiscoveryController, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WGWidgetPersistentStateController : NSObject <_NCWidgetController_Host_IPC, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    WGWidgetDiscoveryController *_discoveryController;
    NSMutableDictionary *_widgetIdentifiersToCachedState;
    BOOL _canCacheState;
    struct _MKBEvent { } *_keybagEvent;
    NSObject<OS_dispatch_queue> *_keybagQueue;
    NSObject<OS_dispatch_queue> *_diskWriteQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)largestAvailableDisplayModeForWidgetWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (BOOL)setLargestAvailableDisplayMode:(long long)a0 forWidgetWithIdentifier:(id)a1;
- (void)__requestRefreshAfterDate:(id)a0 forWidgetWithBundleIdentifier:(id)a1;
- (void)__setHasContent:(BOOL)a0 forWidgetWithBundleIdentifier:(id)a1;
- (id)_persistentStateForWidgetWithIdentifier:(id)a0 containingBundleIdentifier:(id)a1;
- (BOOL)_setHasContent:(BOOL)a0 forWidgetWithIdentifier:(id)a1;
- (void)_setValue:(id)a0 forKey:(id)a1 forWidgetWithIdentifier:(id)a2 containingBundleID:(id)a3;
- (void)_synchronizePersistentStateForWidgetWithIdentifier:(id)a0;
- (id)_updateCachedStateForWidgetWithIdentifier:(id)a0 containingBundleID:(id)a1;
- (id)_valueForKey:(id)a0 forWidgetWithIdentifier:(id)a1;
- (BOOL)doesWidgetWithIdentifierHaveContent:(id)a0;
- (id)initWithDiscoveryController:(id)a0;

@end
