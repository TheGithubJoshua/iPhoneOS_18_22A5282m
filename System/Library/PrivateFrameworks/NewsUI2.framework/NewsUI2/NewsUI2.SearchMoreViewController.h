@interface NewsUI2.SearchMoreViewController : UIViewController <TSSearchResultsPanable> {
    void /* unknown type, empty encoding */ searchContentType;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ toolbarManager;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
}

@property (nonatomic, readonly) BOOL isSearchResultsPane;

- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;

@end
