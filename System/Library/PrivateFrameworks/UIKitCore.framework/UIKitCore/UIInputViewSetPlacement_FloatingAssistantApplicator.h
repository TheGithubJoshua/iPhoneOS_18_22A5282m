@class TUIInputAssistantHostView;

@interface UIInputViewSetPlacement_FloatingAssistantApplicator : UIInputViewSetPlacement_AssistantApplicator

@property (retain, nonatomic) TUIInputAssistantHostView *hostView;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inputAccessoryPaddingForTraitCollection:(id)a0;

- (BOOL)shouldApplyOriginChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })popoverFrame;
- (void)applyChanges:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inputAccessoryPadding;
- (void)setupHostViewIfNeeded;
- (void)prepare;

@end
