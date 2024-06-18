@class NSData, NSString;

@interface MFData : NSData <NSCopying, NSMutableCopying> {
    NSData *_internal;
    NSString *_path;
    NSData *_parent;
    BOOL _subdata;
}

+ (void)setDefaultMappingThresholdInBytes:(unsigned long long)a0;

- (id)initWithContentsOfFile:(id)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)data;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)init;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithImmutableData:(id)a0;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithData:(id)a0;
- (id)_initWithData:(id)a0 maybeMutable:(BOOL)a1;
- (BOOL)mf_immutable;
- (id)_initWithFile:(id)a0;
- (void)dealloc;
- (id)_initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 from:(id)a1 retainingParent:(BOOL)a2;
- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
