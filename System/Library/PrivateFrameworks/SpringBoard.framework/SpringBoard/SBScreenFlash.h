@class UIScreen, UIWindow, UIView, NSMutableArray;

@interface SBScreenFlash : NSObject {
    NSMutableArray *_flashCompletionBlocks;
    UIScreen *_screen;
    UIWindow *_flashWindow;
    UIView *_flashView;
    BOOL _windowVisible;
}

+ (id)mainScreenFlasher;

- (id)initWithScreen:(id)a0;
- (void)_tearDown;
- (void).cxx_destruct;
- (void)_createUIWithColor:(id)a0;
- (void)_orderWindowFrontAndThenOut:(id)a0 withColor:(id)a1;
- (void)_orderWindowOut:(id)a0;
- (void)flashColor:(id)a0 withCompletion:(id /* block */)a1;
- (void)flashWhiteWithCompletion:(id /* block */)a0;

@end
