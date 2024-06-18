@class NSXPCConnection;

@interface WBSPasswordBreachHelperProxy : NSObject <WBSPasswordBreachHelperProtocol> {
    NSXPCConnection *_connection;
}

- (id)init;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearAllRecordsWithCompletionHandler:(id /* block */)a0;
- (void)addResultRecordDictionaries:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearRecentlyBreachedResultRecordsWithCompletionHandler:(id /* block */)a0;
- (void)getResultRecordDictionariesForResultQueryDictionaries:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)recentlyBreachedResultRecordDictionariesWithCompletionHandler:(id /* block */)a0;
- (void)runLookupSessionIgnoringMinimumDelay:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
