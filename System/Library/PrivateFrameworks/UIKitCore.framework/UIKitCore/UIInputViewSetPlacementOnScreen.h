@interface UIInputViewSetPlacementOnScreen : UIInputViewSetPlacement <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)inputViewWillAppear;
- (BOOL)showsInputOrAssistantViews;
- (BOOL)showsKeyboard;
- (BOOL)showsInputViews;

@end
