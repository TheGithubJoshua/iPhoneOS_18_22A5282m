@interface PKPassthroughView : UIView {
    BOOL _inHitTest;
    BOOL _inPortalHitTest;
    unsigned long long _portalTargetCount;
}

@property (nonatomic, getter=isHitTestEnabled) BOOL hitTestEnabled;
@property (weak, nonatomic) PKPassthroughView *portal;
@property (readonly, nonatomic, getter=isPortalled) BOOL portalled;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
