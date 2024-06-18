@class NSString, NSArray, TLKLabel;

@interface SearchUITruncatingListLabel : UIView

@property (retain, nonatomic) NSString *caption;
@property (retain, nonatomic) NSArray *list;
@property (retain, nonatomic) TLKLabel *label;

- (id)init;
- (id)text;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (long long)numberOfLines;
- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (BOOL)canFitString:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateCaption:(id)a0 list:(id)a1;
- (void)updateLabelForSize:(struct CGSize { double x0; double x1; })a0;

@end
