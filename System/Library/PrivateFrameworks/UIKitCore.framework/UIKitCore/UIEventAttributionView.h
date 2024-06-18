@class BKSHIDEventAuthenticationMessage;

@interface UIEventAttributionView : UIView

@property (class, copy, nonatomic) BKSHIDEventAuthenticationMessage *lastEventMessage;

- (id)initWithCoder:(id)a0;
- (void)didMoveToSuperview;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setHidden:(BOOL)a0;
- (void)_updateLayerContents;

@end
