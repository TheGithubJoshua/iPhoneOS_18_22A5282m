@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {
    NSString *_path;
    int _fd;
}

- (id)initWithPath:(id)a0;
- (BOOL)tryLock;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (BOOL)_lockBlocking:(BOOL)a0;

@end
