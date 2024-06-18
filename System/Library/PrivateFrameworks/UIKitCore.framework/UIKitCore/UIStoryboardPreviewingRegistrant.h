@class NSString, UIStoryboardPreviewingSegueTemplateStorage, UIView, UIViewController;
@protocol UIViewControllerPreviewing;

@interface UIStoryboardPreviewingRegistrant : NSObject <NSCoding, UIViewControllerPreviewingDelegate> {
    id<UIViewControllerPreviewing> _previewingContext;
    UIStoryboardPreviewingSegueTemplateStorage *_segueTemplateStorage;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) UIView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)previewingContext:(id)a0 viewControllerForLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)previewingContext:(id)a0 commitViewController:(id)a1;
- (void)registerForPreviewing;
- (void)unregisterForPreviewing;

@end
