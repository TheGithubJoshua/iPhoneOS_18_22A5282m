@class UIToolbar;

@interface BrowserToolbar : _SFToolbar

@property (readonly, nonatomic) UIToolbar *replacementToolbar;

- (void)_sceneWillEnterForeground:(id)a0;
- (void)_updateItemsForReplacementToolbar;
- (void)setReplacementToolbar:(id)a0 tintStyle:(long long)a1 withAnimationDelay:(double)a2;
- (void)setItems:(id)a0 animated:(BOOL)a1;
- (id)initWithPlacement:(long long)a0 hideBackground:(BOOL)a1;
- (void).cxx_destruct;
- (void)_sceneDidEnterBackground:(id)a0;
- (void)layoutSubviews;

@end
