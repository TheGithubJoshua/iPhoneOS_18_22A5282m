@interface WidgetPreviewsShellPlugin.WallpaperBackedViewController : UIViewController {
    void /* unknown type, empty encoding */ previewViewController;
    void /* unknown type, empty encoding */ wallpaperWidth;
    void /* unknown type, empty encoding */ wallpaperView;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;

@end
