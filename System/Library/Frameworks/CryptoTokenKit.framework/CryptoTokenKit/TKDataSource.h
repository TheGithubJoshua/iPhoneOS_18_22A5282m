@class NSData;

@interface TKDataSource : NSObject {
    NSData *_data;
}

@property (readonly) const char *ptr;
@property (readonly) const char *end;
@property (readonly) NSData *data;

- (id)fetchDataWithLength:(long long)a0;
- (BOOL)bytesSafeToRead:(long long)a0;
- (void).cxx_destruct;
- (unsigned char)fetchByte;
- (id)initWithData:(id)a0;
- (id)dataFromPtr:(const char *)a0;

@end
