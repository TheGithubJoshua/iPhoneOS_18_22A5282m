@class VSFontCenter, UILabel, NSError, UIButton;

@interface VSErrorViewController : UIViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIButton *recoveryButton;
@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isRecoveryDestructive) BOOL recoveryDestructive;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateText;
- (void)_recoveryButtonPressed:(id)a0;

@end
