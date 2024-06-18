@class DBInCallWidgetButtonRingView;

@interface DBInCallWidgetButton : UIButton

@property (retain, nonatomic) DBInCallWidgetButtonRingView *ringView;
@property (readonly, nonatomic) long long inCallButtonType;

- (void)setHighlighted:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void)setupConstraints;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithButtonType:(long long)a0;

@end
