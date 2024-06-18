@class NSBatchDeleteRequest, NSArray, NSFetchRequest, NSSQLFetchRequestContext;

@interface NSSQLBatchDeleteRequestContext : NSSQLBatchOperationRequestContext {
    NSFetchRequest *_fetchRequestForObjectsToDelete;
    NSArray *_deleteStatements;
    NSArray *_deletedObjectIDs;
    NSSQLFetchRequestContext *_fetchContext;
    NSArray *_externalDataReferenceTriggerStatements;
    NSArray *_externalDataReferencesToDelete;
    NSArray *_fileBackedFuturesToDelete;
}

@property (readonly, nonatomic) NSBatchDeleteRequest *request;

- (BOOL)executeRequestCore:(id *)a0;
- (BOOL)isWritingRequest;
- (void)dealloc;
- (void)executePrologue;

@end
