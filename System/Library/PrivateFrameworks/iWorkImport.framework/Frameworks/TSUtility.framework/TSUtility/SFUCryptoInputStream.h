@class NSString, SFUCryptor;
@protocol SFUInputStream;

@interface SFUCryptoInputStream : NSObject <SFUInputStream> {
    id<SFUInputStream> mBaseStream;
    SFUCryptor *mCryptor;
    long long mOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)offset;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)a0;
- (void)dealloc;
- (void)close;
- (id)closeLocalStream;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (id)initForDecryptionWithInputStream:(id)a0 key:(id)a1;

@end
