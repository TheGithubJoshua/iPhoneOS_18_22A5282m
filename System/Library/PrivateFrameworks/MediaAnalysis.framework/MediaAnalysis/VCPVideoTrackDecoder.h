@class AVAssetTrack;

@interface VCPVideoTrackDecoder : NSObject {
    AVAssetTrack *_track;
}

+ (struct { int x0; int x1; })decodeDimensionsForTrack:(id)a0;

- (id)init;
- (id)settings;
- (void).cxx_destruct;
- (long long)status;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (id)initWithTrack:(id)a0;
- (struct opaqueCMSampleBuffer { } *)getNextCaptureSampleBuffer;
- (BOOL)validateDecodedFrame:(struct __CVBuffer { } *)a0 withSettings:(id)a1;

@end
