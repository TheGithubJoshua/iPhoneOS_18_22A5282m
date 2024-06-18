@class NSArray, NSPersistentHistoryToken, NSFetchRequest, NSNumber;

@interface NSPersistentHistoryChangeRequest : NSPersistentStoreRequest {
    NSArray *_transactionIDs;
    NSNumber *_transactionNumber;
    struct __persistentHistoryChangeRequestDescriptionFlags { unsigned char _useQueryGenerationToken : 1; unsigned char _deleteHistoryRequest : 1; unsigned char _fetchTransactionForToken : 1; unsigned char _percentageDeleteHistoryRequest : 1; unsigned int _reservedPersistentHistoryChangeRequestDescription : 28; } _persistentHistoryChangeRequestDescriptionFlags;
    id *_additionalPrivateIvars;
    unsigned long long _percentageOfDB;
}

@property long long resultType;
@property (readonly) NSPersistentHistoryToken *token;
@property (retain, nonatomic) NSFetchRequest *fetchRequest;

+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1 withPolicy:(id)a2;
+ (id)fetchHistoryAfterTransaction:(id)a0;
+ (id)deleteHistoryBeforeDate:(id)a0 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)a1;
+ (id)deleteHistoryBeforeToken:(id)a0;
+ (id)deleteHistoryBeforeTransaction:(id)a0;
+ (id)fetchHistoryTransactionForToken:(id)a0;
+ (id)fetchHistoryWithFetchRequest:(id)a0;
+ (id)fetchHistoryAfterToken:(id)a0;
+ (id)fetchHistoryAfterDate:(id)a0;
+ (id)deleteHistoryBeforeToken:(id)a0 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)a1;
+ (id)deleteHistoryBeforeDate:(id)a0;
+ (id)_stringForHistoryRequestResultType:(long long)a0;

- (unsigned long long)fetchLimit;
- (id)init;
- (BOOL)includesSubentities;
- (id)encodeForXPC;
- (id)initWithTransactionID:(id)a0 delete:(BOOL)a1 transactionOnly:(BOOL)a2 percentageOfDB:(unsigned long long)a3;
- (id)transactionIDs;
- (BOOL)isDelete;
- (BOOL)isPercentageDelete;
- (id)initWithDate:(id)a0;
- (unsigned long long)fetchOffset;
- (id)propertiesToFetchForEntity:(id)a0 includeTransactionStrings:(BOOL)a1;
- (void)setFetchLimit:(unsigned long long)a0;
- (id)initWithToken:(id)a0 delete:(BOOL)a1;
- (id)propertiesToFetchForEntity:(id)a0;
- (id)predicate;
- (unsigned long long)requestType;
- (id)date;
- (void)setFetchBatchSize:(unsigned long long)a0;
- (void)setUseQueryGenerationToken:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)predicateForStoreIdentifier:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)entityNameToFetch;
- (void)setFetchOffset:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDate:(id)a0 delete:(BOOL)a1;
- (id)initWithToken:(id)a0;
- (BOOL)useQueryGenerationToken;
- (id)transactionNumber;
- (void)dealloc;
- (id)initWithDate:(id)a0 delete:(BOOL)a1 percentageOfDB:(unsigned long long)a2;
- (unsigned long long)fetchBatchSize;
- (BOOL)isFetchTransactionForToken;
- (id)propertiesToFetch;
- (unsigned long long)percentageOfDB;
- (id)initWithTransactionIDs:(id)a0;
- (id)initWithToken:(id)a0 delete:(BOOL)a1 percentageOfDB:(unsigned long long)a2;
- (id)initWithFetchRequest:(id)a0;
- (id)initWithTransactionToken:(id)a0;

@end
