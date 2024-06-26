@class NSMutableDictionary;
@protocol IDSXPCAdapter;

@interface _IDSXPCCheckinManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *connectionInfoByServiceIdentifier;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } checkinLock;
@property (retain, nonatomic) id<IDSXPCAdapter> XPCAdapter;

+ (id)sharedInstance;

- (id)init;
- (void)_temporarilyStoreMessage:(id)a0 forServiceIdentifier:(id)a1;
- (void)teardownAll;
- (void)noteCreatedService:(id)a0;
- (void).cxx_destruct;
- (void)noteFinishedTransactionForService:(id)a0;
- (void)teardownService:(id)a0;
- (id)initWithXPCAdapter:(id)a0;
- (void)_performLockedAccess:(id /* block */)a0;

@end
