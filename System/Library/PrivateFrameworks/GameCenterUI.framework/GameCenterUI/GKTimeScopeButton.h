@interface GKTimeScopeButton : GKDynamicButton

@property (nonatomic) long long timeScope;
@property (nonatomic) long long leaderboardOccurrence;

- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (void)updateWithTitle:(id)a0;

@end
