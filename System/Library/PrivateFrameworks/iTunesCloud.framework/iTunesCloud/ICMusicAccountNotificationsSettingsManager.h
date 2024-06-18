@interface ICMusicAccountNotificationsSettingsManager : NSObject

@property (class, readonly, nonatomic) ICMusicAccountNotificationsSettingsManager *sharedManager;

- (void)setAccountNotificationsArtistContentFeature:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (id)cachedAccountNotificationsShowInLibrarySwitch;
- (void)setCachedAccountNotificationsShowInLibraryEnabled:(BOOL)a0;
- (id)_getSwitchesDependingOnSubscriptionStatus:(id)a0 withResponse:(id)a1 togglingSwitchesToValue:(BOOL)a2;
- (id)storeRequestContext;
- (void)getAccountNotificationsWithCompletionHandler:(id /* block */)a0;

@end
