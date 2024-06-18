@class NSManagedObjectContext, NSXPCStoreConnectionInfo;

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
}

- (void)setNotificationManager:(id)a0;
- (id)entitlements;
- (id)managedObjectContext;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)notificationManager;
- (id)cache;
- (struct { unsigned int x0[8]; })auditToken;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (void)setUserInfo:(id)a0;
- (BOOL)_allowCoreDataFutures;
- (id)initWithConnectionInfo:(id)a0;
- (void)setManagedObjectContext:(id)a0;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)persistentStoreCoordinator;
- (id)description;
- (void)dealloc;
- (id)userInfo;

@end
