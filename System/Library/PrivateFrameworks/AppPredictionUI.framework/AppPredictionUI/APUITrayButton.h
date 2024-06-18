@interface APUITrayButton : UIButton

+ (id)buttonWithType:(long long)a0;
+ (double)standardHeight;

- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)traitCollectionDidChange:(id)a0;
- (void)layoutSubviews;
- (id)_buttonFont;
- (id)_fontTextStyle;

@end
