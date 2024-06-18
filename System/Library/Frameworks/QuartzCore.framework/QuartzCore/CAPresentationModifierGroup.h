@interface CAPresentationModifierGroup : NSObject {
    void *_shmem;
    unsigned long long _capacity;
    unsigned long long _count;
    unsigned long long _totalSize;
    unsigned int _localId;
}

@property (readonly) unsigned long long capacity;
@property (readonly) unsigned long long count;
@property (nonatomic) BOOL updatesAsynchronously;

+ (id)groupWithCapacity:(unsigned long long)a0;

- (void)flush;
- (void *)shmem;
- (id)initWithCapacity:(unsigned long long)a0;
- (void *)_renderShmem;
- (unsigned long long)nextSlotWithPayloadSize:(unsigned long long)a0;
- (void)resetBitMask;
- (void)_setLocalContextId:(unsigned int)a0;
- (void)flushLocally;
- (void)dealloc;
- (void)markWritten:(unsigned long long)a0;
- (void)flushWithTransaction;

@end
