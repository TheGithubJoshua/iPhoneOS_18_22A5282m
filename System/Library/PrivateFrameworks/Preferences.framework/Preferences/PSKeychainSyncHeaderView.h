@class UILabel;

@interface PSKeychainSyncHeaderView : UIView <PSHeaderFooterView> {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

@property (nonatomic) BOOL usesCompactLayout;

- (void)setTitleText:(id)a0;
- (void)setDetailText:(id)a0;
- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;

@end
