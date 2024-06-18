@interface _MKConditionalPanGestureRecognizer : UIPanGestureRecognizer

@property (nonatomic) long long requiredModifierFlags;

- (BOOL)_shouldReceiveEvent:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;

@end
