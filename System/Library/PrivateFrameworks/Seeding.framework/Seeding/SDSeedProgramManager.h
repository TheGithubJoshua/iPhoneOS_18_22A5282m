@class NSDictionary;

@interface SDSeedProgramManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;
@property (class, readonly, nonatomic) BOOL canFileFeedback;

+ (BOOL)_setAudienceForSeedProgram:(long long)a0;
+ (id)_loadSeedCatalogsFromPlist;
+ (long long)_seedProgramForString:(id)a0;
+ (void)_clearAudience;
+ (BOOL)fixUpAssetAudience;
+ (void)_setHelpFeedbackMenuEnabled:(BOOL)a0;
+ (void)enrollInSeedProgramNamed:(id)a0 withAssetAudience:(id)a1 completion:(id /* block */)a2;
+ (BOOL)unenrollFromSeedProgram;
+ (BOOL)enrollInSeedProgram:(long long)a0 deletingSystemURL:(BOOL)a1;
+ (BOOL)enrollInSeedProgram:(long long)a0;
+ (void)_createFeedbackAssistantSymlink;
+ (long long)currentSeedProgram;
+ (BOOL)_currentAudienceIsSeed;
+ (void)_clearSeedCatalog;
+ (BOOL)_canEnrollInBetaSoftware;
+ (id)stringForSeedProgram:(long long)a0;
+ (long long)currentSeedProgramForDiskAtPath:(id)a0;
+ (BOOL)_setCatalogForSeedProgram:(long long)a0;
+ (BOOL)_currentCatalogIsSeed;
+ (id)_loadSeedAudiencesFromPlist;
+ (BOOL)isEnrolledInSeedProgram;
+ (long long)_currentSeedProgramFromDisk;
+ (void)_setSeedProgramPref:(long long)a0;
+ (void)_setSeedOptOutUIDisabled:(BOOL)a0;

@end
