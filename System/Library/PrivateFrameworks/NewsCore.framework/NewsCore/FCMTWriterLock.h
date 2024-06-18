@protocol NFLocking;

@interface FCMTWriterLock : NSObject <NFLocking> {
    id<NFLocking> _underlyingLock;
}

- (id)init;
- (void)performReadSync:(id /* block */)a0;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (id)initWithUnderlyingLock:(id)a0;
- (void)performWriteSync:(id /* block */)a0;

@end
