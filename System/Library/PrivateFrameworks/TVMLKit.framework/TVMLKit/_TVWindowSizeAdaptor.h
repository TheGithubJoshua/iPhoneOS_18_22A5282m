@class UIWindow;

@interface _TVWindowSizeAdaptor : NSObject {
    unsigned long long _allowedInterfaceOrientations;
}

@property (readonly, weak, nonatomic) UIWindow *window;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } adjustedWindowSize;

- (id)initWithWindow:(id)a0;
- (unsigned long long)_supportedOrientations;
- (void).cxx_destruct;
- (BOOL)update;
- (BOOL)_shouldSwapDimensions;

@end
