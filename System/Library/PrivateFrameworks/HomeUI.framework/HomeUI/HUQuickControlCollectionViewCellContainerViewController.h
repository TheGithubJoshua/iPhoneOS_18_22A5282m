@class HUQuickControlViewController, HUQuickControlCollectionViewCellContainerView;

@interface HUQuickControlCollectionViewCellContainerViewController : UIViewController

@property (retain, nonatomic) HUQuickControlCollectionViewCellContainerView *view;
@property (readonly, nonatomic) HUQuickControlCollectionViewCellContainerView *viewIfLoaded;
@property (nonatomic) unsigned long long titlePosition;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } preferredContentLayoutFrameInset;
@property (readonly, nonatomic) HUQuickControlViewController *contentViewController;

+ (id)intrinsicSizeDescriptorControlSizeDescriptor:(id)a0 titlePosition:(unsigned long long)a1;

- (void)loadView;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)setTitle:(id)a0;
- (id)initWithContentViewController:(id)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;

@end
