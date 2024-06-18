@interface OBTrayButton : UIButton

@property (nonatomic) double lastTitleLabelHeight;

+ (id)buttonWithType:(long long)a0;
+ (double)standardHeight;

- (void)traitCollectionDidChange:(id)a0;
- (id)buttonFont;
- (id)_fontTextStyle;

@end
