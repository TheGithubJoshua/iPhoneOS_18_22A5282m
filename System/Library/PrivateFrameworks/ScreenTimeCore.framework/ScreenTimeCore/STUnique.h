@class NSPersistentHistoryToken;
@protocol STPersistenceControllerProtocol;

@interface STUnique : NSObject {
    NSPersistentHistoryToken *_migratedToken;
}

@property (retain, nonatomic) id<STPersistenceControllerProtocol> persistenceController;

+ (Class)_internalClassForSerializableClassName:(id)a0;
+ (id)cloudToLocalMapping;
+ (id)localToCloudMapping;
+ (id)mirroredEntityNames;

- (id)historyTokenForAuthor:(id)a0 fromStore:(id)a1;
- (BOOL)areLocalChangesInterestingWithError:(id *)a0;
- (id)initWithPersistenceController:(id)a0;
- (void)newResolveConflictsBetweenLocalDeltas:(id)a0 cloudDeltas:(id)a1;
- (BOOL)addHistoryToken:(id)a0 forAuthor:(id)a1 toMetadataForStore:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)resolveConflictsBetweenLocalDeltas:(id)a0 cloudDeltas:(id)a1;
- (BOOL)migrateWithError:(id *)a0;
- (BOOL)migrateWithExportNeeded:(BOOL *)a0 error:(id *)a1;

@end
