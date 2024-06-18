@class NSString, NSMutableString;

@interface VPNTableCell : PSTableCell

@property (retain) NSMutableString *detailText;
@property (retain) NSString *subtitle;
@property (retain) NSString *alert;

- (void)setChecked:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateDetail;

@end
