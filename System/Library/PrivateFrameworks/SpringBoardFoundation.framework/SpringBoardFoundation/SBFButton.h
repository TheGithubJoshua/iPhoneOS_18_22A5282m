@interface SBFButton : UIButton

- (void)setHighlighted:(BOOL)a0;
- (void)_updateForStateChange;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_drawingAsSelected;
- (void)_touchUpInside;
- (void)_updateSelected:(BOOL)a0 highlighted:(BOOL)a1;

@end
