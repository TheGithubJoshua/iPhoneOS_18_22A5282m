@class NSObject;
@protocol OS_dispatch_queue;

@interface _LSInProcessSettingsStore : LSSettingsStore

@property struct sqlite3 { } *database;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;

- (unsigned char)_internalQueue_selectUserElectionForIdentifier:(id)a0;
- (id)init;
- (unsigned char)userElectionForExtensionKey:(id)a0;
- (void)_internalQueue_loadDatabase;
- (void).cxx_destruct;
- (void)dealloc;

@end
