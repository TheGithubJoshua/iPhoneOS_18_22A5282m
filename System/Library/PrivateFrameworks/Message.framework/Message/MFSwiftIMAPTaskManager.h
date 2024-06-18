@interface MFSwiftIMAPTaskManager : NSObject <MFTaskManager> {
    void /* unknown type, empty encoding */ persistenceWorkloop;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ makeEngineAndAdaptor;
    void /* unknown type, empty encoding */ _engine;
    void /* unknown type, empty encoding */ _adaptor;
    void /* unknown type, empty encoding */ engineIsolation;
    void /* unknown type, empty encoding */ bodyFetchContext;
}

- (BOOL)deleteMailbox:(id)a0;
- (void)accountDidChange:(id)a0;
- (void)addLocalAction:(id)a0;
- (void)checkForNewLocalActions;
- (BOOL)createMailbox:(id)a0;
- (void)fetchNow:(int)a0;
- (void)fetchNow:(int)a0 withMailboxes:(id)a1 completion:(id /* block */)a2;
- (id)fetchSeparatorChar;
- (void)localMailboxesDidChange;
- (BOOL)renameMailbox:(id)a0 toMailbox:(id)a1;
- (void)startBackFillingMessageBodyDownloadWithRequest:(id)a0;
- (void)stopBackFillingMessageBodyDownload;
- (id)initWithAccount:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)test_tearDown;

@end
