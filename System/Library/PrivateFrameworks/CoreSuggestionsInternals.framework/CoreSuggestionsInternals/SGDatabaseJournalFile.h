@class NSString;

@interface SGDatabaseJournalFile : NSObject {
    NSString *_path;
    unsigned long long _len;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

- (id)init;
- (void)write:(id)a0;
- (id)initWithPath:(id)a0;
- (void)clear;
- (id)read;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)destroy;
- (void)destroyAndUnlinkIfEmpty;
- (void)unlink;

@end
