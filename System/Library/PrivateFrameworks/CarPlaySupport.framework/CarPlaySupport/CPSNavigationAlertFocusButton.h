@class CPSNavigationAlertProgressView, CPAlertAction;

@interface CPSNavigationAlertFocusButton : CPSButton

@property (weak, nonatomic) CPAlertAction *alertAction;
@property (weak, nonatomic) CPSNavigationAlertProgressView *progressView;
@property (nonatomic) BOOL isPrimary;

+ (id)buttonWithAction:(id)a0 progressView:(id)a1 isPrimary:(BOOL)a2;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;

@end
