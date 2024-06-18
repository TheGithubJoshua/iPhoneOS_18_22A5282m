@class NSString, NSObject;
@protocol OS_os_log;

@interface FLSQLiteDatabaseConnection : NSObject

@property (copy, nonatomic) NSString *storePath;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) struct sqlite3 { } *db;

- (void).cxx_destruct;
- (BOOL)open;
- (id)initWithStorePath:(id)a0;
- (void)dealloc;
- (void)close;

@end
