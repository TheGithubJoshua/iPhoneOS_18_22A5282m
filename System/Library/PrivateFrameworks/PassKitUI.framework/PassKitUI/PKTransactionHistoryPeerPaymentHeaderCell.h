@class PKAvatarHeaderView;

@interface PKTransactionHistoryPeerPaymentHeaderCell : PKDashboardCollectionViewCell {
    PKAvatarHeaderView *_headerView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithPeerPaymentCounterpartHandle:(id)a0 contact:(id)a1;

@end