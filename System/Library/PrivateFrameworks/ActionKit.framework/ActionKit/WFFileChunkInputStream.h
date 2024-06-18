@class NSInputStream;

@interface WFFileChunkInputStream : NSInputStream

@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long length;

- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(const struct __CFString { } *)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)streamError;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void).cxx_destruct;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(const struct __CFString { } *)a1;
- (void)open;
- (BOOL)hasBytesAvailable;
- (id)propertyForKey:(id)a0;
- (void)close;
- (id)initWithURL:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2;

@end
