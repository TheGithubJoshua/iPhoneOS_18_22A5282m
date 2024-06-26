@class UIMenu, UILabel, UIView, UIButton;
@protocol NANowPlayingDockedViewDelegate;

@interface NANowPlayingDockedView : UIControl

@property (weak, nonatomic) id<NANowPlayingDockedViewDelegate> delegate;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UILabel *publisherLabel;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIButton *rewindButton;
@property (readonly, nonatomic) UIButton *playPauseButton;
@property (retain, nonatomic) UIMenu *menu;
@property (nonatomic) BOOL waiting;
@property (nonatomic) BOOL changesDisplayWhenHighlighted;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)setPublisher:(id)a0;
- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (void)setMarqueeRunning:(BOOL)a0;
- (void)_updateTitleAccessibilityLabel;
- (id)initWithBackground:(id)a0;
- (void)pauseButtonTapped:(id)a0;
- (void)playButtonTapped:(id)a0;
- (void)rewindButtonTapped:(id)a0;
- (void)setIsPlaying:(BOOL)a0 waiting:(BOOL)a1;

@end
