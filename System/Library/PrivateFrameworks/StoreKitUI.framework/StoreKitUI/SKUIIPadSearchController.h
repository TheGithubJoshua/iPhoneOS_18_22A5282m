@class NSString, SKUIClientContext, SKUISearchFieldController, UIViewController;

@interface SKUIIPadSearchController : NSObject <SKUISearchFieldDelegate> {
    SKUISearchFieldController *_searchFieldController;
}

@property (class, copy, nonatomic) NSString *lastSearchTerm;

@property (readonly, weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) SKUISearchFieldController *searchFieldController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_searchFieldController;
- (void)_termDidChangeNotification:(id)a0;
- (id)initWithParentViewController:(id)a0;
- (id)newSearchFieldBarItem;
- (void)reloadSearchField;
- (void)searchFieldController:(id)a0 requestSearch:(id)a1;
- (void)setNumberOfSearchResults:(long long)a0;
- (void)setSearchFieldPlaceholderText:(id)a0;
- (void)setSearchFieldText:(id)a0;

@end
