@interface PBMutableData : NSMutableData {
    char *p;
    char *buffer;
    char *end;
}

- (void)setLength:(unsigned long long)a0;
- (void *)mutableBytes;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;

@end
