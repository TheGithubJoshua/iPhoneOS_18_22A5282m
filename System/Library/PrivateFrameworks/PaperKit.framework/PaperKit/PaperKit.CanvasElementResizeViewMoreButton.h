@interface PaperKit.CanvasElementResizeViewMoreButton : UIControl <UIPointerInteractionDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ imageView;
}

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;

@end
