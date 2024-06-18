@class UISegmentedControl;

@interface WFSegmentedCell : UITableViewCell

@property (weak, nonatomic) UISegmentedControl *segmentedControl;
@property (copy) id /* block */ handler;

- (void)awakeFromNib;
- (void).cxx_destruct;
- (void)addSubview:(id)a0;
- (void)_segmentedControlDidChange:(id)a0;

@end
