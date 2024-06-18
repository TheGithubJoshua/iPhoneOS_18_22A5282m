@class NSData;

@interface AFBBufRef : NSObject {
    NSData *_data;
    struct __CFAllocator { } *_cfReleaseBackingDataDeallocator;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) const struct __CFAllocator { } *deallocator;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (void)releaseBuf;
- (void)retainBuf;

@end
