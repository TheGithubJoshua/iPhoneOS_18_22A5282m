@class UIStackView, UIView, NSArray, NSString, GKLeaderboardSet, UIImageView, GKLeaderboard, NSLayoutConstraint, UIVisualEffectView, UILabel, UIColor;

@interface GKLeaderboardCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) NSLayoutConstraint *iconContainerHeight;
@property (retain, nonatomic) NSLayoutConstraint *minimumIconHeight;
@property (retain, nonatomic) UIView *iconContainer;
@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) UIColor *titleLabelColor;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) NSArray *customBackgroundBlur;
@property (retain, nonatomic) NSString *dataToken;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (readonly, nonatomic) UIView *popoverSourceView;

- (void)setHighlighted:(BOOL)a0;
- (void)updateImage;
- (void)updateLayout;
- (void)setSelected:(BOOL)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)awakeFromNib;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)addVisualEffect;
- (void)setupFallbackIcon;
- (void)updateOverlay;
- (void)updateRank;
- (void)updateSummary;

@end
