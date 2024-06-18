@interface CPLSyncIndicator : NSObject

+ (void)hideSyncIndicator;
+ (void)showSyncIndicator;
+ (void)setForeground:(BOOL)a0;
+ (void)_doProtected:(id /* block */)a0;
+ (void)_reallyHideSyncIndicator;
+ (void)_reallyShowSyncIndicator;

@end
