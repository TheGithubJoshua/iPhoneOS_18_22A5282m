@interface AssistiveTouchHelper : NSObject

+ (void)initializeMonitoring;

- (void)enable;
- (id)init;
- (void)loadBuddyBundles;
- (void)_sendKeyboardStatusUpdateHidden;
- (id)_astDispatchQueue;
- (void)_sendKeyboardStatusUpdate;
- (void)installKeyboardListener;
- (void)_sendKeyboardStatusUpdate:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
