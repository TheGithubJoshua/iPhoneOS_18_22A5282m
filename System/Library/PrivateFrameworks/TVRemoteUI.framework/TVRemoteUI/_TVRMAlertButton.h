@class UIView;

@interface _TVRMAlertButton : UIButton

@property (nonatomic) BOOL showingBackgroundEffect;
@property (retain, nonatomic) UIView *burnView;
@property (retain, nonatomic) UIView *plusDView;

- (void)setHighlighted:(BOOL)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
