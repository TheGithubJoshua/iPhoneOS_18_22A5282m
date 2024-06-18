@protocol PKPaletteTextOptionsViewControllerDelegate;

@interface PKPaletteTextOptionsViewController : UIViewController

@property (weak, nonatomic) id<PKPaletteTextOptionsViewControllerDelegate> delegate;

- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (void)_signatureButtonTouchUpInsideHandler:(id)a0;
- (void)_textButtonTouchUpInsideHandler:(id)a0;

@end
