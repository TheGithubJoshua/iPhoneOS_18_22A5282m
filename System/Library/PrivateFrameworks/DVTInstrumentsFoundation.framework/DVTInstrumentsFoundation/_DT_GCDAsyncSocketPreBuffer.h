@interface _DT_GCDAsyncSocketPreBuffer : NSObject {
    char *preBuffer;
    unsigned long long preBufferSize;
    char *readPointer;
    char *writePointer;
}

- (unsigned long long)availableSpace;
- (id)initWithCapacity:(unsigned long long)a0;
- (char *)readBuffer;
- (void)dealloc;
- (unsigned long long)availableBytes;
- (void)reset;
- (void)didRead:(unsigned long long)a0;
- (void)didWrite:(unsigned long long)a0;
- (void)ensureCapacityForWrite:(unsigned long long)a0;
- (void)getReadBuffer:(char **)a0 availableBytes:(unsigned long long *)a1;
- (void)getWriteBuffer:(char **)a0 availableSpace:(unsigned long long *)a1;
- (char *)writeBuffer;

@end
