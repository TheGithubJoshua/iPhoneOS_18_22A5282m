@class NSString, UILabel;

@interface GameCenterUI.GKPickerGroupNearbyCell : GameCenterUI.GKPickerGroupNearbyCollectionViewCell

@property (class, nonatomic, readonly) NSString *reuseIdentifier;
@property (class, nonatomic, readonly) NSString *reuseIdentifierAX;

@property (nonatomic, weak) void /* unknown type, empty encoding */ iconContainer;
@property (nonatomic, weak) void /* unknown type, empty encoding */ badgeLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic) BOOL highlighted;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)isHighlighted;
- (void)configureWithBadgeCount:(long long)a0;

@end
