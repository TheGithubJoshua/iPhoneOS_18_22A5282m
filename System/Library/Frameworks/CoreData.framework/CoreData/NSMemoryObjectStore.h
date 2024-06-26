@interface NSMemoryObjectStore : NSMappedObjectStore

+ (id)metadataForPersistentStoreWithURL:(id)a0 error:(id *)a1;
+ (id)metadataForPersistentStoreWithURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (BOOL)setMetadata:(id)a0 forPersistentStoreWithURL:(id)a1 options:(id)a2 error:(id *)a3;
+ (BOOL)setMetadata:(id)a0 forPersistentStoreWithURL:(id)a1 error:(id *)a2;

- (id)initWithPersistentStoreCoordinator:(id)a0 configurationName:(id)a1 URL:(id)a2 options:(id)a3;
- (void)_preflightCrossCheck;
- (void)saveDocumentToPath:(id)a0;
- (id)type;

@end
