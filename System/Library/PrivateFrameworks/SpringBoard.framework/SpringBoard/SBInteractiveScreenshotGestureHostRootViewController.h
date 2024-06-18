@class NSString, _UILayerHostView, UIScreen;

@interface SBInteractiveScreenshotGestureHostRootViewController : SBFTouchPassThroughViewController <BSInvalidatable> {
    unsigned int _hostingContextID;
    int _hostingPid;
    _UILayerHostView *_layerHostView;
    UIScreen *_screen;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScreen:(id)a0;
- (void)viewDidLoad;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_reloadLayerHostView;
- (void)setHostingContextID:(unsigned int)a0 pid:(int)a1;

@end
