@class NSString, _PASLock;

@interface TRIReferenceManagedDirReaderLock : NSObject {
    NSString *_dir;
    _PASLock *_lock;
}

- (id)init;
- (void)unlock;
- (void).cxx_destruct;
- (id)initWithDir:(id)a0;
- (void)dealloc;

@end
