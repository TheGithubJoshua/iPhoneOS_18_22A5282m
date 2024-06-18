@class UIView, ICPencilKitAttachmentAccessibilityElement;

@interface ICPencilKitAttachmentResizeHandleAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) ICPencilKitAttachmentAccessibilityElement *attachmentElement;
@property (weak, nonatomic) UIView *drawingResizeView;
@property (readonly, nonatomic) BOOL top;
@property (readonly, nonatomic) BOOL isEnabled;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityContainer;
- (id)initWithAttachmentAccessibilityElement:(id)a0 drawingResizeView:(id)a1;

@end
