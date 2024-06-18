@class WCDeviceLookup;

@interface WCCloudMigrator : NSObject

@property (readonly, nonatomic) WCDeviceLookup *deviceLookup;

- (id)init;
- (void)eraseStoreIfNeeded:(id)a0;
- (void)migrateStore:(id)a0 toStore:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)storeRequiresMigration:(id)a0;

@end
