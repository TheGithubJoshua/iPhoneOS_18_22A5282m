@protocol _UIKeyShortcutHUDKeyListenerDelegate;

@interface _UIKeyShortcutHUDModifierKeyListener : NSObject

@property (weak, nonatomic) id<_UIKeyShortcutHUDKeyListenerDelegate> delegate;
@property (nonatomic) long long currentModifierFlags;

- (void).cxx_destruct;
- (void)handleKeyboardEvent:(id)a0;

@end
