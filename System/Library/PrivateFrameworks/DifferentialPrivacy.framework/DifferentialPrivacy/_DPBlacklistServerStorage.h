@class NSString, NSObject, NSDate;
@protocol OS_xpc_object;

@interface _DPBlacklistServerStorage : NSObject <_DPMaintenance>

@property (retain, nonatomic) NSString *storePath;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (weak, nonatomic) NSObject<OS_xpc_object> *activity;

- (id)init;
- (id)_queryOperationFromCursor:(id)a0;
- (BOOL)updateRuntimeBlacklistsFromServer;
- (id)_predicateForFetchQuery;
- (id)lastUpdateDate;
- (id)_publicDatabaseForBlacklists;
- (void)_executeQueryOperation:(id)a0 onOperationQueue:(id)a1 onCompletion:(id /* block */)a2;
- (void)_requestLatestBlacklists:(id /* block */)a0;
- (void)_attributeQueryOperation:(id)a0;
- (id)saveBlacklistsToRuntimeFolder:(id)a0;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;
- (void).cxx_destruct;
- (id)initWithCustomStorePath:(id)a0;
- (void)setLastUpdateDate:(id)a0;
- (BOOL)prepareRuntimeBlacklistFolder:(id *)a0;
- (BOOL)requestLatestBlacklistsSynchronously:(id *)a0 error:(id *)a1 lastRecordModifiedAt:(id *)a2;
- (id)_blacklistURLByKeyFrom:(id)a0;

@end
