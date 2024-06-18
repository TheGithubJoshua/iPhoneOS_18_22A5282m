@class UITouch;

@interface SBHPageManagementListTapGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) UITouch *activeTouch;

- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
