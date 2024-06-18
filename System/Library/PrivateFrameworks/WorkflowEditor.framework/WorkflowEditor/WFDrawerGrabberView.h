@class NSArray, WFDrawerController, _UIGrabber;

@interface WFDrawerGrabberView : UIView {
    NSArray *_accessibilityCustomActions;
    _UIGrabber *_grabber;
}

@property (weak, nonatomic) WFDrawerController *drawerController;

- (id)init;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (BOOL)accessibilityCollapseDrawer;
- (BOOL)accessibilityExpandDrawer;

@end
