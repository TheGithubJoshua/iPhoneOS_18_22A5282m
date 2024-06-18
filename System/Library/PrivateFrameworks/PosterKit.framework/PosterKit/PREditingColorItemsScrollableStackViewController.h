@class UIScrollView, UIStackView;

@interface PREditingColorItemsScrollableStackViewController : PREditingColorItemsViewController

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) BOOL needsScrollToSelectedItem;

- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (double)estimatedHeight;
- (void)layoutWithItemViews:(id)a0;
- (void)scrollToSelectedItemAnimated:(BOOL)a0;
- (void)updateInteritemSpacingIfNeeded;

@end
