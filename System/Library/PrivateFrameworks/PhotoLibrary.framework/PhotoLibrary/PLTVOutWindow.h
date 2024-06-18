@class UIView;

@interface PLTVOutWindow : UIWindow {
    UIView *_backgroundView;
    UIView *_videoView;
}

- (id)init;
- (id)videoView;
- (BOOL)setVideoView:(id)a0;
- (void)dealloc;
- (BOOL)_setupTargetScreen:(id)a0;

@end
