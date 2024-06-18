@class UIView;

@interface CNContactListHeaderView : UICollectionViewListCell

@property (retain, nonatomic) UIView *headerView;

- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
