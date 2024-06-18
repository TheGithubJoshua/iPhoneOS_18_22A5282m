@class NSURL, BRCPQLConnection;

@interface BRCSafeDBHolder : NSObject {
    NSURL *_databaseURL;
}

@property (readonly, nonatomic) BRCPQLConnection *db;

+ (id)newSafeDBHolder:(id)a0 withDatabaseURL:(id)a1;

- (void).cxx_destruct;
- (BOOL)closeWithError:(id *)a0;
- (void)dealloc;
- (void)asyncClose;
- (void)asyncCloseWithCompletionHandler:(id /* block */)a0;

@end
