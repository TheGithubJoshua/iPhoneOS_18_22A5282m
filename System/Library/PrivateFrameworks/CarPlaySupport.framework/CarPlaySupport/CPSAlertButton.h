@class CPAlertAction;

@interface CPSAlertButton : CPSButton

@property (retain, nonatomic) CPAlertAction *alertAction;

+ (id)buttonWithCPAlertAction:(id)a0;

- (void)setHighlighted:(BOOL)a0;
- (id)_externalUnfocusedBorderColor;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_buttonFont;

@end
