@class UIToolbar;

@interface SFToolbarContainer : UIView {
    UIToolbar *_toolbar;
    double _minimumWidth;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _toolbarInsets;
}

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
