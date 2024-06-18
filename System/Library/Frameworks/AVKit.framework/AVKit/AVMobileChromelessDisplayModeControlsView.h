@class AVButton, AVMobileChromelessControlsStyleSheet;
@protocol AVMobileChromelessDisplayModeControlsViewDelegate;

@interface AVMobileChromelessDisplayModeControlsView : AVView {
    AVButton *_fullScreenButton;
    AVButton *_pictureInPictureButton;
}

@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet;
@property (nonatomic) unsigned long long fullscreenIcon;
@property (nonatomic) BOOL includesPictureInPictureControl;
@property (nonatomic) BOOL includesFullscreenControl;
@property (weak, nonatomic) id<AVMobileChromelessDisplayModeControlsViewDelegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithStyleSheet:(id)a0;
- (void).cxx_destruct;
- (void)_updateFullscreenControlIcon;
- (void)pictureInPictureControlWasPressed;
- (void)layoutSubviews;
- (void)_addDisplayModeControlViews:(id)a0;
- (void)fullScreenButtonWasPressed;

@end
