@class UILabel;

@interface UIKBRecentInputCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;

+ (id)titleAttributesForRenderConfig:(id)a0;
+ (id)textColorForRenderConfig:(id)a0 isSelected:(BOOL)a1;

- (void)setSelected:(BOOL)a0;
- (BOOL)isFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)_canFocusProgrammatically;
- (void)setInputText:(id)a0;

@end
