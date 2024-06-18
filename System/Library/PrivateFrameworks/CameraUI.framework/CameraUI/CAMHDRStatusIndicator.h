@interface CAMHDRStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, setter=setHDRMode:) long long hdrMode;
@property (nonatomic, getter=isAutoHDRAllowed) BOOL autoHDRAllowed;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)imageNameForCurrentState;
- (id)imageNameForAXHUD;
- (void)setAllowAutoHDR:(BOOL)a0;
- (void)setHDRMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
