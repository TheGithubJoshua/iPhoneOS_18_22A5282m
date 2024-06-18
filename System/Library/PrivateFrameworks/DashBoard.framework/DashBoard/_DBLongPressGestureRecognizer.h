@interface _DBLongPressGestureRecognizer : UILongPressGestureRecognizer

@property (nonatomic) unsigned long long lastSenderID;

- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;

@end
