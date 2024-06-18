@class UIButton;

@interface STSingleLineButtonHeaderView : STSingleLineHeaderView

@property (readonly, nonatomic) UIButton *button;

- (void).cxx_destruct;
- (void)setSpecifier:(id)a0;
- (double)preferredHeightForWidth:(double)a0;
- (id)initWithSpecifier:(id)a0 useContentLayoutGuide:(BOOL)a1;
- (void)reloadFromSpecifier;

@end
