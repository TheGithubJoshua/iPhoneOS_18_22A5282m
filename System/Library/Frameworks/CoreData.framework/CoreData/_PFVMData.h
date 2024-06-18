@interface _PFVMData : NSData {
    int _cd_rc;
    unsigned long long _length;
    void *_payload;
}

+ (Class)classForKeyedUnarchiver;

- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_tryRetain;
- (oneway void)release;
- (Class)classForCoder;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (unsigned long long)length;
- (const void *)bytes;

@end
