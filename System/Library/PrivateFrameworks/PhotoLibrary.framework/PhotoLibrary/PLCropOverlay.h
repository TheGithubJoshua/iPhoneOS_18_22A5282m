@class UIView, NSString, PLContactPhotoOverlay, PLCropOverlayBottomBar, PLCropOverlayWallpaperBottomBar, PLCropOverlayCropView, UIButton, UIImageView, UIToolbar, UILabel, PLProgressHUD;
@protocol PLCropOverlayDelegate;

@interface PLCropOverlay : UIView {
    PLCropOverlayCropView *_cropView;
    UIImageView *_shadowView;
    UIView *_overlayContainerView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
    UIToolbar *_customToolbar;
    UILabel *_titleLabel;
    UIImageView *_topShineView;
    PLProgressHUD *_hud;
    float _statusBarHeight;
    int _mode;
    unsigned char _previewMode : 1;
    unsigned char _cropRectIsVisible : 1;
    unsigned char _offsetStatusBar : 1;
    unsigned char _tookPhoto : 1;
    unsigned char _showsCropRegion : 1;
    unsigned char _controlsAreVisible : 1;
    UIImageView *_bottomShineView;
    UIButton *_okButton;
    UIView *_wildcatPickerTopView;
    UIView *_wildcatPickerBottomView;
}

@property (readonly, nonatomic) PLCropOverlayBottomBar *_bottomBar;
@property (readonly, nonatomic) UIButton *_cameraCancelButton;
@property (readonly, nonatomic) PLContactPhotoOverlay *contactPhotoOverlay;
@property (retain, nonatomic) UIView *cameraBottomBar;
@property (readonly, nonatomic) PLCropOverlayWallpaperBottomBar *wallpaperBottomBar;
@property (nonatomic) BOOL motionToggleIsOn;
@property (nonatomic) BOOL isEditingHomeScreen;
@property (nonatomic) BOOL isEditingLockScreen;
@property (nonatomic) BOOL motionToggleHidden;
@property (nonatomic, getter=isDisplayedInPopover) BOOL displayedInPopover;
@property (copy, nonatomic) NSString *defaultOKButtonTitle;
@property (copy, nonatomic) NSString *defaultCancelButtonTitle;
@property (weak, nonatomic) id<PLCropOverlayDelegate> delegate;
@property (nonatomic) BOOL previewMode;

- (void)_setMode:(int)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dismiss;
- (id)overlayContainerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRect;
- (void)_updateTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)bottomBar;
- (int)mode;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)cancelButtonClicked:(id)a0;
- (void)setTitle:(id)a0;
- (void)setCancelButtonTitle:(id)a0;
- (void)setFileResizingHidden:(BOOL)a0;
- (void)setFileResizingTitle:(id)a0;
- (void)_createCropView;
- (void)didCapturePhoto;
- (void)insertIrisView:(id)a0;
- (void)_tappedBottomBarPlaybackButton:(id)a0;
- (void)_updateEditImageDoneButtonTitle;
- (void)didCaptureVideo;
- (void)setProgressDone;
- (void)_backgroundSavePhoto:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 minimalCropDimension:(double)a2;
- (id)_bottomBarFileSizeMenu;
- (id)_bottomBarFileSizeMenuActions;
- (void)_fadeOutCompleted:(id)a0;
- (id)_fileResizingButton;
- (id)_newOverlayViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lighterEdgeOnTop:(BOOL)a1;
- (void)_pauseButtonPressed:(id)a0;
- (void)_playButtonPressed:(id)a0;
- (void)_savePhotoFinished:(id)a0;
- (void)_tappedBottomBarCancelButton:(id)a0;
- (void)_tappedBottomBarDoneButton:(id)a0;
- (void)_tappedBottomBarMotionToggle;
- (void)_tappedBottomBarSetBothButton;
- (void)_tappedBottomBarSetHomeButton;
- (void)_tappedBottomBarSetLockButton;
- (void)_updateCropRectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateEditImageCancelButtonTitle;
- (void)_updateMotionToggle;
- (void)_updateToolbarItems:(BOOL)a0;
- (void)_updateWallpaperBottomBarSettingButtons;
- (void)beginBackgroundSaveWithTile:(id)a0 progressTitle:(id)a1 completionCallbackTarget:(id)a2 options:(int)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bottomBarFrame;
- (BOOL)controlsAreVisible;
- (void)cropOverlayBottomBarPauseButtonClicked:(id)a0;
- (void)cropOverlayBottomBarPlayButtonClicked:(id)a0;
- (void)didPauseVideo;
- (void)didPlayVideo;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mode:(int)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mode:(int)a1 offsettingStatusBar:(BOOL)a2;
- (BOOL)isTelephonyUIMode:(int)a0;
- (BOOL)isWallpaperUIMode:(int)a0;
- (void)removeProgress;
- (void)setControlsAreVisible:(BOOL)a0;
- (void)setCropRectVisible:(BOOL)a0 duration:(float)a1;
- (void)setOKButtonShowsCamera:(BOOL)a0;
- (void)setOKButtonTitle:(id)a0;
- (void)setOverlayContainerView:(id)a0;
- (void)setShowProgress:(BOOL)a0 title:(id)a1;
- (void)setShowsCropRegion:(BOOL)a0;
- (void)setTitle:(id)a0 okButtonTitle:(id)a1;
- (void)setTitleHidden:(BOOL)a0 animationDuration:(double)a1;
- (void)statusBarHeightDidChange:(id)a0;

@end