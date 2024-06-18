@class NSURL;

@interface PFAppleArchiveStream : NSObject {
    struct AAByteStream_impl { } *_inputStream;
    struct AAByteStream_impl { } *_outputStream;
    struct AAByteStream_impl { } *_compressionStream;
}

@property (readonly) NSURL *archiveURL;
@property long long compression;
@property BOOL appendToExistingArchive;
@property unsigned long long blockSize;

- (id)init;
- (BOOL)close:(id *)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (BOOL)openForWriting:(id *)a0;
- (id)initWithArchiveURL:(id)a0;
- (BOOL)openForReading:(id *)a0;

@end
