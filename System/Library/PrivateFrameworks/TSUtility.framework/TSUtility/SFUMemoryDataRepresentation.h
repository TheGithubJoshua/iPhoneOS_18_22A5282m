@class NSData;

@interface SFUMemoryDataRepresentation : SFUDataRepresentation {
    NSData *mData;
}

- (id)data;
- (long long)dataLength;
- (id)inputStream;
- (id)initWithDataRepresentation:(id)a0;
- (BOOL)isReadable;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)initWithDataNoCopy:(id)a0;
- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)a0;
- (BOOL)hasSameLocationAs:(id)a0;
- (unsigned long long)readIntoData:(id)a0;

@end
