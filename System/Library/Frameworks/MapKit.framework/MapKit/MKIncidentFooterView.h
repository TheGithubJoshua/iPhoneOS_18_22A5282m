@class UIColor, MKViewWithHairline;

@interface MKIncidentFooterView : UITableViewHeaderFooterView {
    MKViewWithHairline *_hairlineView;
}

@property (copy, nonatomic) UIColor *separatorColor;

- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
