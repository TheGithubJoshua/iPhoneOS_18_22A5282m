@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}

- (id)init;
- (id)initWithName:(id)a0 cachePath:(id)a1;
- (BOOL)tryLock;
- (id)name;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (void)dealloc;
- (void)setName:(id)a0;

@end
