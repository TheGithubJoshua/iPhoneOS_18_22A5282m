@class AVButton, AVMobileChromelessControlsStyleSheet;
@protocol AVMobileChromelessPlaybackControlsViewDelegate;

@interface AVMobileChromelessPlaybackControlsView : AVView {
    AVButton *_leftSecondaryButton;
    AVButton *_rightSecondaryButton;
    AVButton *_playPauseButton;
}

@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet;
@property (nonatomic) BOOL playPauseButtonShowsPlayIcon;
@property (nonatomic) BOOL leftSecondaryControlEnabled;
@property (nonatomic) BOOL rightSecondaryControlEnabled;
@property (nonatomic) unsigned long long leftSecondaryControlIcon;
@property (nonatomic) unsigned long long rightSecondaryControlIcon;
@property (weak) id<AVMobileChromelessPlaybackControlsViewDelegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)leftSecondaryControlWasPressed;
- (void)_addPlaybackControlViews:(id)a0;
- (id)initWithStyleSheet:(id)a0;
- (void).cxx_destruct;
- (void)rightSecondaryControlWasPressed;
- (void)_updateRightSecondaryControlIcon;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)a0;
- (void)_updateLeftSecondaryControlIcon;
- (void)layoutSubviews;
- (void)playPauseButtonWasPressed;

@end
