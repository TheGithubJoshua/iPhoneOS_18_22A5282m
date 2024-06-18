@class UILabel;
@protocol CNContactListDuplicatesBannerViewDelegate;

@interface CNContactListDuplicatesBannerView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long duplicatesCount;
@property (weak, nonatomic) id<CNContactListDuplicatesBannerViewDelegate> delegate;

- (void).cxx_destruct;
- (id)countStringForLocalizedStringKey:(id)a0 count:(long long)a1;
- (void)didTapDismiss;
- (void)didTapViewDuplicates;
- (id)initWithDuplicatesCount:(long long)a0;
- (void)setupSubviews;

@end
