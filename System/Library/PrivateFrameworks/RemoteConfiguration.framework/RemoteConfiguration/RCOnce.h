@class RCMutexLock;

@interface RCOnce : NSObject

@property (nonatomic) BOOL finished;
@property (retain, nonatomic) RCMutexLock *lock;

- (id)init;
- (BOOL)hasBeenTriggered;
- (BOOL)trigger;
- (void).cxx_destruct;
- (void)executeOnce:(id /* block */)a0;
- (id)initWithOptions:(unsigned long long)a0;

@end
