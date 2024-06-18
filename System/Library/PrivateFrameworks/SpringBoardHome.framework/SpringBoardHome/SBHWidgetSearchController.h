@class NSMapTable, UIView;
@protocol SBIconListLayoutProvider;

@interface SBHWidgetSearchController : UISearchController {
    NSMapTable *_scrollProgressByClient;
}

@property (retain, nonatomic) UIView *searchBarBackgroundView;
@property (readonly, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly, nonatomic) UIView *searchBarTextFieldBackgroundView;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)initWithListLayoutProvider:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (id)_textFieldFont;
- (void)_setupTextField;
- (void)_setupSearchBar;
- (void)_setupBarBackground;
- (void)_setupTextFieldBackground;
- (double)grabberTopSpacing;
- (void)updateSearchBarBackgroundForScrollDistance:(double)a0 forClient:(id)a1;
- (void)updateSearchBarContentInsetsWithWidth:(double)a0;

@end
