@class NSString;

@interface ESDataHandler : NSObject

@property (copy, nonatomic) NSString *changeTrackingID;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) void *container;

+ (id)newDataHandlerForDataclass:(long long)a0 container:(void *)a1 changeTrackingID:(id)a2 accountID:(id)a3;

- (long long)dataclass;
- (void).cxx_destruct;
- (void)dealloc;
- (void)openDB;
- (BOOL)closeDBAndSave:(BOOL)a0;
- (void *)copyLocalObjectFromId:(int)a0;
- (id)copyOfAllLocalObjectsInContainer;
- (void)drainContainer;
- (void)drainSuperfluousChanges;
- (id)getDAExceptionObjectWithLocalItem:(void *)a0 originalEvent:(id)a1 account:(id)a2;
- (id)getDAObjectWithLocalItem:(void *)a0 serverId:(id)a1 account:(id)a2;
- (int)getIdFromLocalObject:(void *)a0;
- (BOOL)saveContainer;
- (BOOL)wipeServerIds;
- (id)initWithContainer:(void *)a0 changeTrackingID:(id)a1 accountID:(id)a2;

@end
