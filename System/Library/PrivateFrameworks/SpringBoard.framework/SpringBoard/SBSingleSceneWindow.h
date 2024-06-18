@interface SBSingleSceneWindow : SBFWindow

@property (nonatomic, getter=isSceneContentVisible) BOOL sceneContentVisible;

+ (BOOL)_isSecure;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithWindowScene:(id)a0;
- (BOOL)isContentHidden;

@end
