@interface UITextLabel : UILabel

- (void)setAlignment:(long long)a0;
- (long long)alignment;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMinFontSize:(float)a0;
- (float)minFontSize;
- (void)setColor:(id)a0;
- (id)color;
- (BOOL)centersHorizontally;
- (struct CGSize { double x0; double x1; })ellipsizedTextSize;
- (id)highlightedColor;
- (void)setCentersHorizontally:(BOOL)a0;
- (void)setHighlightedColor:(id)a0;
- (void)setTextAutoresizesToFit:(BOOL)a0;
- (void)setWrapsText:(BOOL)a0;
- (BOOL)textAutoresizesToFit;
- (BOOL)wrapsText;

@end
