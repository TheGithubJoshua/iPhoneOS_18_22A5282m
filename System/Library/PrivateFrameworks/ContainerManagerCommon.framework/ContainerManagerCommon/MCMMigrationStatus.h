@class NSURL, NSMutableDictionary;

@interface MCMMigrationStatus : NSObject

@property (retain, nonatomic) NSMutableDictionary *migrationInfo;
@property (retain, nonatomic) NSURL *migrationFileURL;

+ (id)currentBuildVersion;

- (id)init;
- (id)initForMobileUserMigration;
- (void)_migrateFromManyMarkerFilesToOneWithLibraryPath:(id)a0;
- (id)_readMigrationStatusFromDisk;
- (void)writeCurrentBuildInfoToDisk;
- (void)_removeMarkerFileWithName:(id)a0 libraryPath:(id)a1;
- (void).cxx_destruct;
- (id)_iso8601DateFormatter;
- (void)_readStatusFromMarkerFileWithName:(id)a0 andSetAsType:(id)a1 libraryPath:(id)a2;
- (void)setMigrationCompleteForType:(id)a0;
- (id)initForSystemMigration;
- (BOOL)isBuildUpgrade;
- (BOOL)_writeMigrationStatusToDisk;
- (BOOL)hasMigrationOccurredForType:(id)a0;

@end
