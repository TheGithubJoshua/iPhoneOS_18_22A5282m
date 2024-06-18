@class FLFollowUpController;

@interface SUSFollowUpController : NSObject

@property (retain, nonatomic) FLFollowUpController *followUpController;

+ (id)sharedController;
+ (id)stringForSUSFollowUpType:(unsigned long long)a0;

- (id)init;
- (void)postFollowUpOfType:(unsigned long long)a0 withUpdate:(id)a1 userInfo:(id)a2;
- (BOOL)_isCurrentlyPresentingFollowUpType:(unsigned long long)a0 currentFollowUps:(id)a1;
- (id)identifierForSUFollowUpType:(unsigned long long)a0;
- (id)identifiersForSUFollowUpTypes:(id)a0;
- (void)SUSFollowUpControllerUnbadgeSettings;
- (id)getCurrentSUSFollowUpItems;
- (void)dismissFollowUpType:(unsigned long long)a0;
- (BOOL)isCurrentlyPresentingFollowUpType:(unsigned long long)a0;
- (void)dismissAllSUFollowUps;
- (void)postFollowUpItem:(id)a0;
- (BOOL)isCurrentlyPresentingFollowUpTypes:(id)a0 presentationOption:(unsigned long long)a1;
- (void)dismissLegacyFollowUps;
- (BOOL)isfollowUpSUSRelated:(id)a0;
- (void)dealloc;
- (void)SUSFollowUpControllerBadgeSettings:(id)a0;
- (void)dismissFollowUpTypes:(id)a0;
- (void)dismissFollowUpWithIdentifiers:(id)a0;
- (BOOL)isBadgeOnlyFollowUpCurrentlyBeingPresented;

@end
