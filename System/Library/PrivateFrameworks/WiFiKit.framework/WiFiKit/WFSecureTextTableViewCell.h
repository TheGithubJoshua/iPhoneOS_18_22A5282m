@class NSString, UIFont;

@interface WFSecureTextTableViewCell : UITableViewCell

@property (copy, nonatomic) UIFont *placeholderFont;
@property (nonatomic) BOOL hideSecureText;
@property (copy, nonatomic) NSString *credentials;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)canBecomeFirstResponder;

@end
