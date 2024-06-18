@class HDDatabaseSchemaManager, HDDatabaseMigrationTransaction, NSMutableArray, _HKBehavior;

@interface HDDatabaseMigrator : NSObject {
    BOOL _hasPerformedMigration;
    NSMutableArray *_migrationSteps;
}

@property (readonly, nonatomic) HDDatabaseMigrationTransaction *transaction;
@property (readonly, nonatomic) HDDatabaseSchemaManager *schemaManager;
@property (readonly, nonatomic) _HKBehavior *behavior;

- (id)boulderProtectedMigrationSteps;
- (void)addPrimaryMigrationSteps;
- (void)addLockstepMigrationForSchema:(id)a0 toVersion:(long long)a1 requiringVersion:(long long)a2 foreignKeyStatus:(long long)a3 handler:(id /* block */)a4;
- (void)sky_addUnprotectedMigrationSteps;
- (id)init;
- (long long)_corry_rewriteHFDStep2WithError:(id *)a0;
- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (id)cinarProtectedMigrationSteps;
- (id)boulderUnprotectedMigrationSteps;
- (long long)migrateFromVersion:(long long)a0 toVersion:(long long)a1 error:(id *)a2;
- (BOOL)executeSQLStatements:(id)a0 error:(id *)a1;
- (id)tigrisProtectedMigrationSteps;
- (id)butlerUnprotectedMigrationSteps;
- (id)butlerProtectedMigrationSteps;
- (id)emetProtectedMigrationSteps;
- (id)okemoZursUnprotectedMigrationSteps;
- (void)azul_addProtectedMigrationSteps;
- (id)initWithTransaction:(id)a0;
- (id)whitetailProtectedMigrationSteps;
- (unsigned long long)fetchLegacySyncIdentity:(id)a0 error:(id *)a1;
- (void)sydney_addProtectedMigrationSteps;
- (void)future_addProtectedMigrationSteps;
- (void)yukon_addUnprotectedMigrationSteps;
- (void)sky_addProtectedMigrationSteps;
- (void)peace_addUnprotectedMigrationSteps;
- (void)invalidate;
- (id)erieProtectedMigrationSteps;
- (void).cxx_destruct;
- (void)addMigrationForSchema:(id)a0 toVersion:(long long)a1 foreignKeyStatus:(long long)a2 handler:(id /* block */)a3;
- (id)emetUnprotectedMigrationSteps;
- (id)whitetailUnprotectedMigrationSteps;
- (void)azul_addUnprotectedMigrationSteps;
- (id)corryProtectedMigrationSteps;
- (id)corryUnprotectedMigrationSteps;
- (void)sydney_addUnprotectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1 foreignKeys:(long long)a2;
- (id)monarchUnprotectedMigrationSteps;
- (void)yukon_addProtectedMigrationSteps;
- (id)monarchProtectedMigrationSteps;
- (void)peace_addProtectedMigrationSteps;
- (void)addMigrationSteps:(id)a0;
- (long long)performHFDMigrationToVersion:(long long)a0 handler:(id /* block */)a1 error:(id *)a2;
- (void)future_addUnprotectedMigrationSteps;
- (id)eagleUnprotectedMigrationSteps;
- (id)eagleProtectedMigrationSteps;
- (id)cinarUnprotectedMigrationSteps;
- (id)tigrisUnprotectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 foreignKeys:(long long)a1 handler:(id /* block */)a2;
- (long long)_corry_rewriteHFDStep1WithError:(id *)a0;
- (id)erieUnprotectedMigrationSteps;
- (id)okemoZursProtectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1;

@end
