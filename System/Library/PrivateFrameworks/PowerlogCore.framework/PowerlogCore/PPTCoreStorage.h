@class PPTSQLStorage, NSDictionary, PPTFlatStorage;

@interface PPTCoreStorage : NSObject

@property (retain) PPTSQLStorage *sqlStorage;
@property (retain) PPTFlatStorage *flatStorage;
@property (retain) NSDictionary *storageMap;

+ (id)storageClassForType:(int)a0;
+ (void)setupStorage;
+ (void)startAllStorage;
+ (id)storageClassForKey:(id)a0;
+ (id)sharedFlatStorage;
+ (void)setupMetadataStorage;
+ (void)setupEntryObjects;
+ (id)sharedSQLStorage;

- (id)init;
- (void)mergePreUnlockDBFile;
- (void).cxx_destruct;
- (void)startStorage;

@end
