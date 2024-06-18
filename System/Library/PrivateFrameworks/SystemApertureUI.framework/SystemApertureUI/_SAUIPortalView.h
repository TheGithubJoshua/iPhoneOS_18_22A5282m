@class UIView;

@interface _SAUIPortalView : UIView

@property (retain, nonatomic) UIView *sourceView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)portalLayer;
- (void)_configurePortalViewIfNeeded;

@end
