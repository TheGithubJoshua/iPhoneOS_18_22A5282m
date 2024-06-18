@class NSConditionLock;

@interface DMCSynchronous : NSObject {
    NSConditionLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)waitForCompletion;
- (void)complete;

@end
