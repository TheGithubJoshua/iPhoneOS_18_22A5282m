@protocol SBSystemGestureRecognizerDelegate;

@interface SBFailingSystemGestureRecognizer : UIGestureRecognizer

@property (weak, nonatomic) id<SBSystemGestureRecognizerDelegate> delegate;

- (id)init;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;

@end
