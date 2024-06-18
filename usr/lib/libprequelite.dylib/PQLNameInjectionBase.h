@class NSData;

@interface PQLNameInjectionBase : NSData {
    unsigned long long _length;
    char *_bytes;
}

@property (readonly, nonatomic) NSData *sql;

- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;

@end
