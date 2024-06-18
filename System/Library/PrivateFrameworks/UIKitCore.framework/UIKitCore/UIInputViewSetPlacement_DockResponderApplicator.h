@class UIKeyboardPopoverContainer;

@interface UIInputViewSetPlacement_DockResponderApplicator : UIInputViewSetPlacement_FloatingApplicator

@property (retain, nonatomic) UIKeyboardPopoverContainer *popover;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } popoverRectPlaceholder;

- (id)startingPropertiesFromPlacementProperties:(id)a0;
- (void)invalidatePopover;
- (BOOL)isGesture:(id)a0 inDraggableView:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)preBeginGesture:(id)a0 shouldBegin:(BOOL *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })popoverFrame;
- (void)applyChanges:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)draggableView;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })scaledPopoverTransform;
- (id)twoFingerDraggableView;
- (BOOL)isPopoverRequired;
- (void)prepare;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;

@end
