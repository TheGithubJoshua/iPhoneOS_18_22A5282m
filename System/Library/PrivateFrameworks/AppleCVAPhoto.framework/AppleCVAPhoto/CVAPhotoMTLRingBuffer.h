@protocol MTLBuffer;

@interface CVAPhotoMTLRingBuffer : NSObject {
    struct array<id<MTLBuffer>, 5UL> { id<MTLBuffer> __elems_[5]; } _buffers;
    unsigned long long _index;
}

- (id)getBufferAt:(unsigned long long)a0;
- (id)advancedBuffer;
- (id)initWithLength:(unsigned long long)a0 options:(unsigned long long)a1 device:(id)a2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)currentBuffer;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 options:(unsigned long long)a2 device:(id)a3;

@end
