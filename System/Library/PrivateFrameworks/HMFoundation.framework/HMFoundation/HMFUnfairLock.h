@interface HMFUnfairLock : HMFObject <HMFLocking>

@property (readonly) unsigned long long options;

+ (id)lock;
+ (id)lockWithOptions:(unsigned long long)a0;

- (id)init;
- (void)assertNotOwner;
- (void)performBlock:(id /* block */)a0;
- (void)unlock;
- (void)lock;
- (void)assertOwner;
- (id)initWithOptions:(unsigned long long)a0;

@end
