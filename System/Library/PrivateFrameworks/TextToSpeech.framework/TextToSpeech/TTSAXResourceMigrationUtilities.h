@class NSDictionary, AXAssetsService;

@interface TTSAXResourceMigrationUtilities : NSObject

@property (retain, nonatomic) AXAssetsService *assetsService;
@property (nonatomic) BOOL isMigrationComplete;
@property (retain, nonatomic) NSDictionary *obsoleteVoicesWithReplacements;

+ (id)sharedInstance;

- (id)init;
- (void)writeIsMigrationCompleteToPreferences:(id)a0;
- (id)_readIsMigrationCompleteFromPreferences;
- (id)updatedIdentifierForLegacyIdentifier:(id)a0 withLanguageCode:(id)a1;
- (void)downloadCompactResourceIfNeededForIdentifier:(id)a0;
- (void)restartMigrationIfNeeded;
- (id)_remapGenderedSiriVoiceIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)_readVoiceIdentifiersToMigrateFromPreferences;
- (id)convertIdentifierIfNeeded:(id)a0;
- (void)writeVoiceIdentifiersToMigrateToPreferences:(id)a0;
- (id)legacyIdentifierForUpdatedIdentifierDuringMigration:(id)a0;
- (void)resourceCompletedMigration:(id)a0;
- (BOOL)resourceNeedsMigration:(id)a0;
- (void)deleteCompactResourceIfNeededForIdentifier:(id)a0;

@end
