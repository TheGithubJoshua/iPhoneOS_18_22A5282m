@class UISwitch;
@protocol AAUISwitchTableViewCellDelegate;

@interface AAUISwitchTableViewCell : UITableViewCell

@property (readonly, nonatomic) UISwitch *control;
@property (weak, nonatomic) id<AAUISwitchTableViewCellDelegate> delegate;

- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_controlValueChanged:(id)a0;
- (void)_delegate_switchTableViewCellDidUpdateValue;

@end
