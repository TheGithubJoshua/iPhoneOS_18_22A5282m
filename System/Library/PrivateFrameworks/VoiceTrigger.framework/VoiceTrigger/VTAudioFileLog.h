@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface VTAudioFileLog : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct OpaqueExtAudioFile { } *_audioFile;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
    NSURL *_url;
    unsigned int _audioLength;
}

+ (id)sharedInstance;

- (id)init;
- (void)startRecording;
- (void)stopRecording;
- (void).cxx_destruct;
- (void)dealloc;
- (void)appendAudioData:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })a0;
- (void)_closeAudioFile;

@end
