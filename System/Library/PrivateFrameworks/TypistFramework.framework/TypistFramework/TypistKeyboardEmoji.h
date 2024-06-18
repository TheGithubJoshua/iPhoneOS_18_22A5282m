@interface TypistKeyboardEmoji : TypistKeyboard

+ (id)findEmojiScrollView;
+ (void)resetSelectedCategory;
+ (BOOL)scrollEmojiKeyboard;

- (id)generateKeystrokeStream:(id)a0;
- (id)init:(id)a0 options:(id)a1;
- (void)preprocessing;

@end
