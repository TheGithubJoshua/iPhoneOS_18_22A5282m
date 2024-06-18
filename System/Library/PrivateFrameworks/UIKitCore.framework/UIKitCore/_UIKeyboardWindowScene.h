@interface _UIKeyboardWindowScene : _UIScreenBasedWindowScene

+ (BOOL)alwaysKeepContexts;
+ (BOOL)shouldAllowComponents;
+ (BOOL)autoInvalidates;

- (id)initWithScreen:(id)a0 session:(id)a1 lookupKey:(id)a2;
- (BOOL)_affectsScreenOrientation;
- (id)_fixupInheritedSettings:(id)a0;

@end
