@class NSArray, NSString, NSManagedObjectModel;

@interface NotesMigrationMapping : NSObject

@property (copy) NSArray *sourceModels;
@property (copy) NSString *descriptionString;
@property (retain) NSManagedObjectModel *destinationModel;
@property long long type;

+ (id)mappings;
+ (id)customMappingFromSourceModelName:(id)a0 toDestinationModelName:(id)a1;
+ (id)descriptionStringFromSourceStoreNames:(id)a0 destinationStoreName:(id)a1;
+ (id)inferredMappingFromSourceModelNames:(id)a0 toDestinationModelName:(id)a1;
+ (id)modelForModelName:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (BOOL)canMigrateStoreMetadata:(id)a0;
- (id)mappingModelForStoreMetadata:(id)a0;
- (id)sourceModelForStoreMetadata:(id)a0;

@end
