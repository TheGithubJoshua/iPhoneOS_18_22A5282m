@class NSString;

@interface OISFUGZipFileOutputStream : NSObject <SFUOutputStream> {
    struct gzFile_s { unsigned int x0; char *x1; long long x2; } *_file;
    long long _offset;
    NSString *_path;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gzipExtension;

- (id)inputStream;
- (id)initWithPath:(id)a0;
- (id)path;
- (long long)offset;
- (BOOL)canSeek;
- (void)dealloc;
- (void)close;
- (id)closeLocalStream;
- (BOOL)canCreateInputStream;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
