@class FCCKPrivateDatabase;

@interface FCCKPrivateDatabaseOperation : FCOperation

@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (nonatomic) BOOL skipPreflight;
@property (nonatomic) BOOL handleIdentityLoss;

- (id)init;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (unsigned long long)maxRetries;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (void)runChildCKOperation:(id)a0 destination:(long long)a1;

@end
