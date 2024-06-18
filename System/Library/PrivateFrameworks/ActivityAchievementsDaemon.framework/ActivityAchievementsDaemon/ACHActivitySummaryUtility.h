@class HDActivitySummaryBuilder, HDProfile, HDDatabaseTransactionContext;

@interface ACHActivitySummaryUtility : NSObject

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDActivitySummaryBuilder *summaryBuilder;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext;

- (void).cxx_destruct;
- (id)newEmptyActivitySummaryFromSummary:(id)a0;
- (BOOL)_enumerateActivitySummariesForDateComponentInterval:(id)a0 handler:(id /* block */)a1 error:(id *)a2;
- (void)enumerateActivitySummariesForDateComponentInterval:(id)a0 handler:(id /* block */)a1;
- (id)initWithProfile:(id)a0 shouldIncludePrivateProperties:(BOOL)a1;

@end
