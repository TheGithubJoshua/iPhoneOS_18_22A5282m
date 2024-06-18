@class NSPersistentContainer, NSMutableDictionary, NSObject;

@interface STConcretePersistentStoreChangeHandler : NSObject <STPersistentStoreChangeHandler> {
    NSObject *_lastPersistentHistoryTokenByStoreIdentifierLock;
}

@property (readonly) NSPersistentContainer *persistentContainer;
@property (readonly) NSMutableDictionary *lastPersistentHistoryTokenByStoreIdentifier;

- (void)handleRemotePersistentStoreDidChange:(id)a0 inContext:(id)a1;
- (id)persistentHistoryTokenForStore:(id)a0;
- (void).cxx_destruct;
- (id)initWithPersistentContainer:(id)a0;
- (void)handlePersistentStoreCoordinatorStoresDidChange:(id)a0;
- (void)savePersistentHistoryToken:(id)a0 forStore:(id)a1;

@end
