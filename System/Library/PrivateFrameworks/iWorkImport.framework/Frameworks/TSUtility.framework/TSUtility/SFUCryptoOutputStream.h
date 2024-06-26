@class NSString, SFUCryptor;
@protocol SFUOutputStream;

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream> {
    id<SFUOutputStream> mBaseStream;
    SFUCryptor *mCryptor;
    BOOL mIsClosed;
    BOOL mComputeCrc32;
    unsigned int mCrc32;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)a0 key:(id)a1;

- (id)inputStream;
- (long long)offset;
- (BOOL)canSeek;
- (void)dealloc;
- (void)close;
- (unsigned int)crc32;
- (id)closeLocalStream;
- (BOOL)canCreateInputStream;
- (id)initForEncryptionWithOutputStream:(id)a0 key:(id)a1;
- (id)initForEncryptionWithOutputStream:(id)a0 key:(id)a1 computeCrc32:(BOOL)a2;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
