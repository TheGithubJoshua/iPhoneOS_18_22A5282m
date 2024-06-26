@class CNTransportButton, CNContactAction, UILabel, CNCardActionGroupItem;

@interface CNContactActionCell : CNLabeledCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CNTransportButton *transportIcon;
@property (readonly, nonatomic) CNCardActionGroupItem *actionGroupItem;
@property (readonly, nonatomic) CNContactAction *action;

+ (BOOL)shouldIndentWhileEditing;

- (id)labelView;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (double)minCellHeight;
- (id)rightMostView;
- (void)setCardGroupItem:(id)a0;
- (void)setLabelTextAttributes:(id)a0;
- (BOOL)shouldPerformDefaultAction;
- (id)variableConstraints;

@end
