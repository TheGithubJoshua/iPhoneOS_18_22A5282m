@class NSURL;

@interface _PFEvanescentData : NSData {
    unsigned long long _length;
    NSURL *_fileURL;
    int _openfd;
    const void *_activeMap;
    int _mapRefCount;
}

+ (Class)classForKeyedUnarchiver;

- (id)initWithURL:(id)a0;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithPath:(id)a0;
- (BOOL)isEqualToData:(id)a0;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;
- (Class)classForCoder;
- (unsigned long long)hash;
- (void)invalidate;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (void)getBytes:(void *)a0;
- (const void *)bytes;

@end
