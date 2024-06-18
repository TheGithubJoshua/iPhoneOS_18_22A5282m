@class DMXPCConnection;

@interface DMConnection : NSObject {
    DMXPCConnection *_connection;
}

+ (id)connection;

- (void)testMigrationUIWithProgress:(BOOL)a0 forceInvert:(BOOL)a1;
- (id)init;
- (void)deferExit;
- (void)reportMigrationFailure;
- (void)changeVisibility:(BOOL)a0 completion:(id /* block */)a1;
- (id)migrationPhaseDescription;
- (BOOL)isMigrationNeeded;
- (void).cxx_destruct;
- (void)cancelDeferredExit;
- (void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned int)a0;
- (id)userDataDispositionAuxiliaryData;
- (unsigned int)userDataDisposition;
- (id)orderedPluginIdentifiers;
- (void)migrationPluginResults:(id /* block */)a0;
- (long long)migrateCheckingNecessity:(BOOL)a0 lastRelevantPlugin:(id)a1 testMigrationInfrastructureOnly:(BOOL)a2;
- (void)dealloc;
- (id)previousBuildVersion;

@end
