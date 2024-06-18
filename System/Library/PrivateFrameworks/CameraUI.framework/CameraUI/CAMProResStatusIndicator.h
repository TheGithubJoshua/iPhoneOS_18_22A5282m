@interface CAMProResStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, setter=setProResVideoMode:) long long proResVideoMode;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)imageNameForCurrentState;
- (id)imageNameForAXHUD;
- (void)setProResVideoMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;

@end
