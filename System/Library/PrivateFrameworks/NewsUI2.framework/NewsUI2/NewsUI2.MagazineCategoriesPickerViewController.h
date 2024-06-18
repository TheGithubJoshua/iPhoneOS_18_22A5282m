@interface NewsUI2.MagazineCategoriesPickerViewController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ eventManager;
    void /* unknown type, empty encoding */ selectedCategory;
}

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)closeButtonTappedWithSender:(id)a0;

@end
