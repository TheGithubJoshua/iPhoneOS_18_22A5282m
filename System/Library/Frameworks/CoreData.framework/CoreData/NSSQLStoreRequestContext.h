@class NSError, NSManagedObjectContext, NSSQLRowCache, NSSQLCore, NSPersistentStoreRequest, NSSQLiteConnection, NSQueryGenerationToken, NSException, NSNumber;

@interface NSSQLStoreRequestContext : NSObject {
    NSSQLCore *_sqlCore;
    NSSQLiteConnection *_connection;
    NSManagedObjectContext *_context;
    NSError *_error;
    NSException *_exception;
    NSQueryGenerationToken *_queryGeneration;
    NSNumber *_transactionID;
    BOOL _useColoredLogging;
    BOOL _useConcurrentFetching;
    BOOL _hasHistoryTracking;
    BOOL _storeIsInMemory;
}

@property (readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest;
@property (retain, nonatomic) id result;
@property (readonly, nonatomic) NSSQLRowCache *rowCache;
@property (readonly, nonatomic) BOOL isWritingRequest;

- (void)executeEpilogue;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)executeRequestUsingConnection:(id)a0;
- (BOOL)executeRequestCore:(id *)a0;
- (void)dealloc;
- (void)executePrologue;

@end