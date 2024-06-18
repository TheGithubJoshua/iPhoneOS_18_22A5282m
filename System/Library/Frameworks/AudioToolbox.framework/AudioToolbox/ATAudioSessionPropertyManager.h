@class ATAudioSessionClientImpl;

@interface ATAudioSessionPropertyManager : NSObject {
    ATAudioSessionClientImpl *mAsClientImpl;
}

- (id)initWithATAudioSessionClientImpl:(id)a0;
- (void).cxx_destruct;
- (int)GetProperty:(unsigned int)a0 size:(unsigned int *)a1 data:(void *)a2;
- (int)SetProperty:(unsigned int)a0 size:(unsigned int)a1 data:(const void *)a2;

@end
