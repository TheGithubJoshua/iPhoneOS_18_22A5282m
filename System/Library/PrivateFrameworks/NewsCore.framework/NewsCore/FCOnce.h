@class NFUnfairLock;

@interface FCOnce : NSObject {
    BOOL _finished;
    NFUnfairLock *_lock;
}

- (id)init;
- (BOOL)hasBeenTriggered;
- (BOOL)trigger;
- (void).cxx_destruct;
- (void)executeOnce:(id /* block */)a0;
- (id)initWithOptions:(unsigned long long)a0;

@end
