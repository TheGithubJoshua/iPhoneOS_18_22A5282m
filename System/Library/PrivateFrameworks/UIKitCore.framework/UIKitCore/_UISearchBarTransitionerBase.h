@class _UISearchBarTransitionContext, _UISearchBarLayout, UIView;

@interface _UISearchBarTransitionerBase : NSObject

@property (readonly, weak, nonatomic) UIView *searchBar;
@property (retain, nonatomic) _UISearchBarTransitionContext *transitionContext;
@property (readonly, nonatomic) _UISearchBarLayout *activeLayout;

- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (void)animate;
- (void)complete;
- (void)prepare;
- (id)initWithNewTransitionContextForSearchBar:(id)a0;
- (id)initWithTransitionContext:(id)a0 forSearchBar:(id)a1;

@end
