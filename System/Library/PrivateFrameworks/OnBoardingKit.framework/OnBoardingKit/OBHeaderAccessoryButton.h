@interface OBHeaderAccessoryButton : UIButton

@property (nonatomic) BOOL underlineLinks;

+ (id)buttonWithType:(long long)a0;
+ (id)accessoryButton;

- (void)traitCollectionDidChange:(id)a0;
- (void)tintColorDidChange;
- (void)_updateText;
- (id)_fontTextStyle;

@end
