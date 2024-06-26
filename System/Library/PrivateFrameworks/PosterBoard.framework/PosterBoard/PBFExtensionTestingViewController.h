@class ExtensionListViewController, PBFGalleryViewController, PBFClientTesterViewController, UIViewController, UISegmentedControl, PBFConfigViewController, UINavigationBar;

@interface PBFExtensionTestingViewController : UIViewController {
    UINavigationBar *_barView;
    UISegmentedControl *_variantSelector;
    ExtensionListViewController *_renderingController;
    ExtensionListViewController *_editingController;
    PBFGalleryViewController *_galleryController;
    PBFConfigViewController *_configController;
    PBFClientTesterViewController *_clientTesterController;
    UIViewController *_presentedViewController;
}

- (id)init;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)_variantSelectorValueChanged:(id)a0;
- (void).cxx_destruct;
- (void)presentPage:(id)a0;

@end
