@class NSData, NSString;

@interface OADSound : OCDDelayedMedia {
    NSData *mSoundData;
    NSString *mName;
    int mSizeInBytes;
}

- (id)name;
- (void).cxx_destruct;
- (id)description;
- (void)setName:(id)a0;
- (int)sizeInBytes;
- (BOOL)isLoaded;
- (void)setSizeInBytes:(int)a0;
- (void)setSoundData:(id)a0;
- (id)soundData;

@end
