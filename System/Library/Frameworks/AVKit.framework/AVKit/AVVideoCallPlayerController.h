@class AVPictureInPictureControllerContentSource;

@interface AVVideoCallPlayerController : AVPlayerController

@property (weak, nonatomic) AVPictureInPictureControllerContentSource *contentSource;
@property (nonatomic) struct CGSize { double width; double height; } contentDimensions;
@property (nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;

- (double)rate;
- (BOOL)isPlaying;
- (long long)timeControlStatus;
- (void).cxx_destruct;
- (long long)status;

@end
