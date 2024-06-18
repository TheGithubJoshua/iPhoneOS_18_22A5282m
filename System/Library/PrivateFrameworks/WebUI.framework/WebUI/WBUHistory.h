@interface WBUHistory : WBSHistory

@property (nonatomic) BOOL shouldScheduleMaintenance;

- (id)init;
- (Class)_historyItemClass;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)a0;
- (void)_removeAllVisitedLinks;
- (void)_addVisitedLinkForItemIfNeeded:(id)a0 withVisitOrigin:(long long)a1;
- (id)_createHistoryStore;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)a0;
- (BOOL)historyStoreShouldScheduleMaintenance:(id)a0;

@end
