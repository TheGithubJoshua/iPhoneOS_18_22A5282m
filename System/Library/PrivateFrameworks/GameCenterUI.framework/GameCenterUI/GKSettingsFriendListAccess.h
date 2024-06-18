@class NSArray, NSDictionary, PSSpecifier, GKLocalPlayer;

@interface GKSettingsFriendListAccess : PSListController

@property (weak, nonatomic) PSSpecifier *globalAccessSpecifier;
@property (retain, nonatomic) NSArray *games;
@property (retain, nonatomic) NSDictionary *gameSettings;
@property (retain, nonatomic) GKLocalPlayer *localPlayer;
@property (nonatomic) BOOL loadingGames;

- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)a0;
- (void)dealloc;
- (id)globalFriendListAccessSpecifier;
- (BOOL)globalFriendListAccess;
- (id)individualBundleIDFriendListAccessSpecifier;
- (BOOL)isFriendListSharingRestricted;
- (void)loadAllGames;
- (id)loadFreshSpecifiers;
- (id)loadingSpecifier;
- (void)reloadWithClearLocalCache:(BOOL)a0;
- (void)setGlobalFriendListAccess:(struct __CFBoolean { } *)a0 withSpecifier:(id)a1;

@end
