@interface CAMTimelapseSettings : NSObject

@property (readonly, nonatomic) double initialCaptureTimeInterval;
@property (readonly, nonatomic) double maxOutputFPS;
@property (readonly, nonatomic) double maxOutputLength;
@property (readonly, nonatomic) long long maxOutputFrames;
@property (readonly, nonatomic) long long maxMovieWriteAttempts;
@property (readonly, nonatomic) long long maxFailedStateReadAttempts;

+ (id)sharedInstance;

- (id)init;
- (long long)maxMovieFileLengthForWidth:(long long)a0 height:(long long)a1 useHEVC:(BOOL)a2;
- (double)outputFPSForFrameCount:(long long)a0;
- (id)outputSettingsForWidth:(long long)a0 height:(long long)a1 videoFormatDescription:(struct opaqueCMFormatDescription { } *)a2 framesPerSecond:(long long)a3 frameCount:(long long)a4 useHEVC:(BOOL)a5;
- (id)_outputSettingsPresetForWidth:(long long)a0 height:(long long)a1;
- (long long)_averageMovieBitrateForWidth:(long long)a0 height:(long long)a1 useHEVC:(BOOL)a2;
- (double)waitTimeBeforeNextWriteForNumberOfPreviousAttempts:(long long)a0;
- (long long)minAvailableBytesNeededForCaptureForWidth:(long long)a0 height:(long long)a1 useHEVC:(BOOL)a2;

@end
