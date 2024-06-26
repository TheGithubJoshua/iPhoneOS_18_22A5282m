@class SKUISearchBar, UILabel, NSMutableString;
@protocol SKUISearchControllerDelegate;

@interface SKUISearchController : UISearchController {
    UILabel *_suffixLabel;
    NSMutableString *_paddingString;
    SKUISearchBar *_searchBar;
}

@property (readonly, nonatomic) SKUISearchBar *searchBar;
@property (weak, nonatomic) id<SKUISearchControllerDelegate> delegate;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)setActive:(BOOL)a0;
- (void)_setSuffix:(id)a0;

@end
