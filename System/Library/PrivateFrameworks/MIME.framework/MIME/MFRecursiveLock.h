@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject> {
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (id)init;
- (id)initWithName:(id)a0 andDelegate:(id)a1;
- (BOOL)tryLock;
- (BOOL)isLockedByMe;
- (void)unlock;
- (BOOL)lockBeforeDate:(id)a0;
- (id)description;
- (void)lock;
- (void)dealloc;

@end
