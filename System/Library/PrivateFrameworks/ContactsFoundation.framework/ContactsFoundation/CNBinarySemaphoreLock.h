@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNBinarySemaphoreLock : NSObject <NSLocking> {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (copy) NSString *name;

- (id)init;
- (void)unlock;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (void)lock;
- (void)dealloc;

@end
