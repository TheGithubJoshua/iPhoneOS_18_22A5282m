@class NSData;

@interface PBDataReader : NSObject {
    BOOL _error;
    const char *_bytes;
    NSData *_data;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long position;

- (BOOL)hasError;
- (id)data;
- (BOOL)readBOOL;
- (id)readString;
- (long long)readSfixed64;
- (long long)readInt64;
- (int)readSfixed32;
- (BOOL)isAtEnd;
- (unsigned long long)readBigEndianFixed64;
- (id)readData;
- (int)readInt32;
- (BOOL)skipValueWithTag:(unsigned int)a0 type:(unsigned char)a1;
- (unsigned long long)readFixed64;
- (unsigned int)readUint32;
- (unsigned long long)offset;
- (id)readBigEndianShortThenString;
- (long long)readSint64;
- (double)readDouble;
- (BOOL)seekToOffset:(unsigned long long)a0;
- (void).cxx_destruct;
- (long long)readVarInt;
- (unsigned int)readBigEndianFixed32;
- (id)readProtoBuffer;
- (void)readTag:(unsigned short *)a0 andType:(char *)a1;
- (id)readBytes:(unsigned int)a0;
- (unsigned short)readBigEndianFixed16;
- (unsigned int)readFixed32;
- (BOOL)hasMoreData;
- (unsigned long long)readUint64;
- (id)initWithData:(id)a0;
- (void)recall:(const struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)updateData:(id)a0;
- (BOOL)mark:(struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (char)readInt8;
- (BOOL)skipValueWithTag:(unsigned short)a0 andType:(unsigned char)a1;
- (float)readFloat;
- (int)readSint32;
- (void)readTag:(unsigned int *)a0 type:(char *)a1;

@end
