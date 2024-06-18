@class UIImage, UIImageView, UITapGestureRecognizer;
@protocol AXCCIconViewControllerDelegate;

@interface AXCCIconViewController : UIViewController {
    UIImage *_image;
    UIImageView *_glyphImageView;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (weak, nonatomic) id<AXCCIconViewControllerDelegate> iconDelegate;

- (void)_handleTapGestureRecognizer:(id)a0;
- (void)loadView;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;

@end
