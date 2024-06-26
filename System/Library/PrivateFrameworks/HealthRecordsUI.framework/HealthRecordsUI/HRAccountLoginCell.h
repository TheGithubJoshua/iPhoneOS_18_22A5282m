@class NSString;

@interface HRAccountLoginCell : UITableViewCell {
    void /* unknown type, empty encoding */ accountErrorView;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

- (void)configureWithAccount:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutMarginsDidChange;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
