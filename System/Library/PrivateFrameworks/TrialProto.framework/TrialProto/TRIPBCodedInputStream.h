@class NSData;

@interface TRIPBCodedInputStream : NSObject {
    struct TRIPBCodedInputStreamState { char *bytes; unsigned long long bufferSize; unsigned long long bufferPos; unsigned long long currentLimit; int lastTag; unsigned long long recursionDepth; } state_;
    NSData *buffer_;
}

+ (id)streamWithData:(id)a0;

- (id)readString;
- (void)skipMessage;
- (long long)readSInt64;
- (void)popLimit:(unsigned long long)a0;
- (long long)readInt64;
- (BOOL)isAtEnd;
- (int)readTag;
- (BOOL)readBool;
- (int)readInt32;
- (void)readGroup:(int)a0 message:(id)a1 extensionRegistry:(id)a2;
- (unsigned long long)readFixed64;
- (void)readMessage:(id)a0 extensionRegistry:(id)a1;
- (void)readUnknownGroup:(int)a0 message:(id)a1;
- (unsigned int)readUInt32;
- (double)readDouble;
- (unsigned long long)readUInt64;
- (int)readEnum;
- (void)checkLastTagWas:(int)a0;
- (unsigned int)readFixed32;
- (int)readSFixed32;
- (id)initWithData:(id)a0;
- (void)readMapEntry:(id)a0 extensionRegistry:(id)a1 field:(id)a2 parentMessage:(id)a3;
- (BOOL)skipField:(int)a0;
- (void)dealloc;
- (float)readFloat;
- (unsigned long long)position;
- (unsigned long long)pushLimit:(unsigned long long)a0;
- (int)readSInt32;
- (long long)readSFixed64;
- (id)readBytes;

@end
