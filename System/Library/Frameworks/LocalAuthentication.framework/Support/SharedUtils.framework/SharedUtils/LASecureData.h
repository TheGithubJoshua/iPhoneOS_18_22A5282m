@interface LASecureData : NSObject {
    unsigned long long _allocatedLength;
    void *_bytes;
    unsigned long long _bytesLength;
}

+ (void)resetBytes:(void *)a0 length:(unsigned long long)a1;
+ (id)secureDataWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)secureDataWithData:(id)a0;
+ (id)secureDataWithString:(id)a0;

- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)data;
- (id)init;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)appendData:(id)a0;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (void)appendString:(id)a0;
- (void)reset;
- (unsigned long long)length;
- (const void *)bytes;
- (void)resize:(unsigned long long)a0;
- (id)nullTerminatedCopy;
- (void)prepareBuffer:(unsigned long long)a0;
- (BOOL)removeLastCharacter;

@end
