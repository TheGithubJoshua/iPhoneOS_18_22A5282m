@class NSArray, UIView;

@interface UIMainPrinterUtilityCell : UITableViewCell {
    UIView *_supplyLevelsView;
}

@property (retain, nonatomic) NSArray *supplies;
@property (nonatomic) BOOL showSupplyDataUnderPrinterName;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
