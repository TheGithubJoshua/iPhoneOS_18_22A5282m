@class UIView;
@protocol FIUIHealthSettingsForceUpdatable;

@interface FIUIHealthSettingsTableViewCell : UITableViewCell {
    UIView *_inputView;
}

@property (weak, nonatomic) id<FIUIHealthSettingsForceUpdatable> forceUpdatable;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)becomeFirstResponder;
- (id)inputView;
- (BOOL)canResignFirstResponder;
- (void)setInputView:(id)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;

@end
