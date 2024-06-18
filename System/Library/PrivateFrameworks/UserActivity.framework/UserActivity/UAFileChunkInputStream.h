@class NSNumber, NSFileHandle;

@interface UAFileChunkInputStream : NSInputStream

@property (retain) NSFileHandle *file;
@property (retain) NSNumber *chunkOffset;
@property long long chunkSize;
@property (retain) NSNumber *currentOffset;
@property long long readSize;
@property unsigned long long status;

- (id)streamError;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (unsigned long long)streamStatus;
- (void).cxx_destruct;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)open;
- (BOOL)hasBytesAvailable;
- (id)propertyForKey:(id)a0;
- (void)close;
- (id)initWithFileHandle:(id)a0 offsetInFile:(id)a1 size:(long long)a2;

@end
