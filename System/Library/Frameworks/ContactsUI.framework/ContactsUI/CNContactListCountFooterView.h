@class NSObject;
@protocol CNContactListCountViewDelegate;

@interface CNContactListCountFooterView : UICollectionViewListCell

@property (nonatomic) long long contactCount;
@property (nonatomic) long long duplicateCount;
@property (nonatomic) long long selectedCount;
@property (weak, nonatomic) NSObject<CNContactListCountViewDelegate> *delegate;

- (void)didSelectViewAllDuplicates;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldDisplaySelectedCount;
- (BOOL)shouldDisplayDuplicateCount;
- (id)countViewConfiguration;
- (void).cxx_destruct;
- (id)primaryText;
- (id)countStringForLocalizedStringKey:(id)a0 count:(long long)a1;
- (id)secondaryText;
- (BOOL)shouldDisplayContactCount;

@end
