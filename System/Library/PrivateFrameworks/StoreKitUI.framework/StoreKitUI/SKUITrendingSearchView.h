@class NSArray, UIView, UIStackView;

@interface SKUITrendingSearchView : UIScrollView

@property (weak, nonatomic) UIStackView *trendingSearchesStackView;
@property (weak, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) NSArray *verticalMarginRelatedConstraints;
@property (copy, nonatomic) UIView *trendingTitleView;
@property (copy, nonatomic) NSArray *trendingSearchViews;

- (id)initWithCoder:(id)a0;
- (void)layoutMarginsDidChange;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)commonInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
