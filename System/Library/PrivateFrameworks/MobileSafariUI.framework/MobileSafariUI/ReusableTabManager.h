@interface ReusableTabManager : WBReusableTabManager

- (id)tabGroupManager;
- (id)reusableTabDocumentWithUUID:(id)a0;
- (id)faviconForUUID:(id)a0;
- (void)enumerateReusableTabDocuments:(id /* block */)a0;
- (id)windowStates;

@end
