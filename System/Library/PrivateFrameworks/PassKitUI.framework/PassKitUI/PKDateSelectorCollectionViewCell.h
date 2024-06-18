@class UIDatePicker, NSDate;
@protocol PKDateSelectorCollectionViewCellDelegate;

@interface PKDateSelectorCollectionViewCell : UICollectionViewListCell {
    UIDatePicker *_datePicker;
}

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *minimumDate;
@property (retain, nonatomic) NSDate *maximumDate;
@property (weak, nonatomic) id<PKDateSelectorCollectionViewCellDelegate> delegate;

- (id)init;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)_didUpdateDate:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;

@end
