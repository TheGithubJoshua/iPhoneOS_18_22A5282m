@class NSString, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SBSSwitcherDemoCommands : NSObject <SBSSwitcherDemoCommandsServerToClientInterface> {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)stashSwitcherModelToPath:(id)a0;
- (BOOL)loadStashedSwitcherModelFromPath:(id)a0;
- (void)_connectionQueue_invalidate;
- (void)_connectionQueue_setupAndActivate;
- (id)_standardizedAbsolutePathForPath:(id)a0;
- (BOOL)setShouldDisableSwitcherModelUpdates:(BOOL)a0;
- (BOOL)updateHiddenApplicationBundleIDs:(id)a0;

@end
