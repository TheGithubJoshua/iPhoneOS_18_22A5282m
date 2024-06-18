@interface UIStatusBarLockScreenStyleAttributes : UIStatusBarNewUIStyleAttributes

- (BOOL)isLockScreen;
- (Class)foregroundStyleClass;
- (BOOL)shouldShowInternalItemType:(int)a0 withScreenCapabilities:(id)a1;
- (double)heightForMetrics:(long long)a0;

@end
