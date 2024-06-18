@protocol PUEditExtensionActivityViewControllerDelegate;

@interface PUEditExtensionActivityViewController : UIActivityViewController

@property (weak, nonatomic) id<PUEditExtensionActivityViewControllerDelegate> editExtensionActivityViewControllerDelegate;

- (void).cxx_destruct;
- (void)_performActivity:(id)a0;
- (BOOL)_shouldShowSystemActivityType:(id)a0;
- (BOOL)_shouldUseModernDesign;
- (BOOL)appWantsLargePreview;
- (BOOL)isPhotosOrCamera;

@end
