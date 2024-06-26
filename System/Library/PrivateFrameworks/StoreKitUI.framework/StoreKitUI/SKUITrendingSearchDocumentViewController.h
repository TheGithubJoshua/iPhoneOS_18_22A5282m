@class SKUITrendingSearchView, NSString, SKUITrendingSearchTemplateElement, UIViewController;

@interface SKUITrendingSearchDocumentViewController : SKUIViewController <SKUIDocumentViewController>

@property (retain, nonatomic) SKUITrendingSearchView *resultsView;
@property (retain, nonatomic) SKUITrendingSearchTemplateElement *template;
@property (retain, nonatomic) UIViewController *privacyViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_reloadResultsView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_resultsViewContentInset;
- (void)documentDidUpdate:(id)a0;
- (id)impressionableViewElements;
- (id)initWithTemplateElement:(id)a0;
- (void)resultsViewTapRecognized:(id)a0;
- (void)searchResultButtonTapped:(id)a0;

@end
