@class SKUITextBoxView;

@interface SKUITextBoxTableViewCell : SKUITableViewCell

@property (readonly, nonatomic) SKUITextBoxView *textBoxView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textBoxInsets;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
