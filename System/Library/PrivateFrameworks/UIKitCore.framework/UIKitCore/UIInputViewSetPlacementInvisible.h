@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacementWrapper <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)placementWithPlacement:(id)a0;

- (BOOL)isUndocked;
- (BOOL)inputViewWillAppear;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (double)alpha;
- (BOOL)isInteractive;
- (BOOL)showsInputOrAssistantViews;
- (BOOL)showsKeyboard;
- (BOOL)isVisible;
- (BOOL)showsInputViews;
- (id)applicatorInfoForOwner:(id)a0;

@end
