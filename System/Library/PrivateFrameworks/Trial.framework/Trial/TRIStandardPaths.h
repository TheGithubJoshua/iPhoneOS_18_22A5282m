@class NSString, TRIAppContainer;

@interface TRIStandardPaths : NSObject <TRIPaths> {
    unsigned int _schemaVersion;
    TRIAppContainer *_container;
    BOOL _isClient;
    struct atomic_flag { _Atomic BOOL _Value; } _loggedRootDir;
    NSString *_containerPath;
}

+ (id)sharedSystemPaths;
+ (unsigned int)resetStorageRequestSchemaVersion;
+ (id)schemaVersionFile;
+ (id)resolveHardCodedPath:(id)a0;
+ (unsigned int)legacySchemaVersion;
+ (unsigned int)currentSchemaVersion;

- (BOOL)validateWithError:(id *)a0;
- (id)assetStoreUsingGlobal:(BOOL)a0;
- (id)init;
- (id)container;
- (id)namespaceDescriptorsRolloutDir;
- (id)treatmentsDir;
- (id)assetStore;
- (id)_trialSystemRootDir;
- (id)decryptionKeyDirForAppleInternal:(BOOL)a0;
- (id)_versionSpecificSystemStorageDir;
- (id)localTempDir;
- (id)logDir;
- (id)trialRootDirUsingGlobal:(BOOL)a0;
- (id)initWithSchemaVersion:(unsigned int)a0;
- (id)namespaceDescriptorsDevOverrideDir;
- (id)databaseDir;
- (id)pathsForContainer:(id)a0 asClientProcess:(BOOL)a1;
- (id)experimentsDir;
- (id)_versionSpecificStorageDirUsingGlobal:(BOOL)a0;
- (void).cxx_destruct;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)deviceIdentifierFile;
- (id)namespaceDescriptorsExperimentDir;
- (id)namespaceDescriptorsDefaultDir;
- (id)containerDir;
- (id)systemDataFile;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)namespaceDescriptorsDir;
- (id)initWithCurrentSchemaVersion;
- (id)trialRootDirWithError:(id *)a0;
- (id)trialRootDir;
- (id)subjectDataFile;
- (id)initWithSchemaVersion:(unsigned int)a0 container:(id)a1 asClientProcess:(BOOL)a2;
- (id)_pathErrorWithDescription:(id)a0;
- (id)trialRootVolume;
- (id)_realHomeDirectory;
- (id)_versionSpecificStorageDir;

@end
