@class EKEventMapDetailItem;

@interface EKEventMapCell : UITableViewCell

@property (weak, nonatomic) EKEventMapDetailItem *detailItem;
@property (nonatomic) BOOL currentlyLoading;
@property (nonatomic) BOOL mapViewSetup;
@property (nonatomic) BOOL setupAsEmptyView;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selected:(BOOL)a1;
- (void)_drawSeparatorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
