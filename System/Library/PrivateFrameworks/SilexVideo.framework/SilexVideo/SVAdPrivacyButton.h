@interface SVAdPrivacyButton : SVButton

+ (double)height;
+ (id)font;
+ (struct CGSize { double x0; double x1; })size;
+ (id)title;

- (id)accessibilityElements;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;

@end
