@protocol MTLIOScratchBufferAllocator;

@interface MTLIOCommandQueueDescriptor : NSObject <NSCopying> {
    unsigned long long _maxWorkerThreads;
}

@property unsigned long long maxWorkerThreads;
@property (nonatomic) unsigned long long maxCommandBufferCount;
@property (nonatomic) long long priority;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long maxCommandsInFlight;
@property (retain) id<MTLIOScratchBufferAllocator> scratchBufferAllocator;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;

@end
