@class BRCAccountSession, NSMutableDictionary, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface BRCItemTransmogrifier : NSObject {
    BRCAccountSession *_session;
    NSObject<OS_dispatch_source> *_pendingRenamesTimer;
    NSMutableArray *_pendingRenames;
    NSOperationQueue *_queue;
    NSMutableDictionary *_pendingTransmogirifcations;
}

- (double)_renameItem:(id)a0;
- (double)_renameDelayForZone:(id)a0;
- (BOOL)addOperation:(id)a0 forItem:(id)a1;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)scheduleDirectoryToPackageTransmogrification:(id)a0 absolutePath:(id)a1;
- (void)_finishDirectoryToPackageTransmogrification:(id)a0 relpath:(id)a1;
- (void)_renameItems;
- (void)scheduleBouncedDirectoryRename:(id)a0;
- (id)queue;
- (void)removeOperationsForItemGlobalID:(id)a0;
- (void)_scheduleRenameAfter:(double)a0 onQueue:(id)a1;

@end
