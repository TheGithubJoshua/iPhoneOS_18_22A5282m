@class PXUIButtonConfiguration, UIPointerInteraction, NSString;

@interface PXUIButton : UIButton <UIPointerInteractionDelegate>

@property (readonly, nonatomic) UIPointerInteraction *pointerInteraction;
@property (copy, nonatomic) PXUIButtonConfiguration *px_configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithWithCursorEffect:(long long)a0 target:(id)a1 action:(SEL)a2;

- (void)setHighlighted:(BOOL)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pointerRectForCurrentState;

@end
