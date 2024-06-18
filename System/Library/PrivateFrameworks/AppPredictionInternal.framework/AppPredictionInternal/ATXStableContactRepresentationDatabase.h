@interface ATXStableContactRepresentationDatabase : ATXAbstractVersionedDatabase

- (BOOL)migrate;
- (id)init;
- (long long)latestVersion;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)a0 stableContactIdentifier:(id)a1;
- (id)stableContactIdentifier:(id)a0;
- (id)deleteAllData;
- (BOOL)_runMigrationSteps:(id)a0;
- (id)cnContactId:(id)a0;

@end
