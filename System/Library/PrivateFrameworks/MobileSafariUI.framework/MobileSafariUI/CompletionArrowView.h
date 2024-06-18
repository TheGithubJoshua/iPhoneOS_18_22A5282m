@class UITableViewCell;

@interface CompletionArrowView : UIButton

@property (weak, nonatomic) UITableViewCell *parentCell;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)init;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
