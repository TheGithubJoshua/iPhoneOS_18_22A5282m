@class NSArray;

@interface CertUIItemDetailsSummaryCell : UITableViewCell

@property (retain, nonatomic) NSArray *detailViews;
@property (nonatomic) double detailLabelOriginX;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)createViewWithDescriptors:(id)a0;
- (void)createViewWithItemDetailArray:(id)a0;

@end
