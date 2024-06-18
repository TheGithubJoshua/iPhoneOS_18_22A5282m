@class NSString;

@interface OISFUMoveableFileOutputStream : NSObject <SFUOutputStream> {
    int mFd;
    NSString *mPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)inputStream;
- (void)flush;
- (id)initWithPath:(id)a0;
- (id)path;
- (long long)offset;
- (BOOL)canSeek;
- (void)dealloc;
- (void)close;
- (id)initWithTemporaryFile:(id)a0;
- (id)closeLocalStream;
- (BOOL)canCreateInputStream;
- (BOOL)moveToPath:(id)a0;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (void)truncateToLength:(long long)a0;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
