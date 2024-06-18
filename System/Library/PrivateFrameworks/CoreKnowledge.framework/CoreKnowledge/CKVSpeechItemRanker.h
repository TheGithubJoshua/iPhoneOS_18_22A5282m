@class NSMutableArray, NSObject;
@protocol CKVDatabaseReadOnlyAccess;

@interface CKVSpeechItemRanker : NSObject {
    NSMutableArray *_datasets;
}

@property (readonly, nonatomic) NSObject<CKVDatabaseReadOnlyAccess> *database;

+ (id)rankersForGroup:(id)a0 database:(id)a1 outOriginAppIds:(id *)a2 error:(id *)a3;

- (id)init;
- (id)initWithDatabase:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)addDataset:(id)a0;
- (unsigned int)calculateItemLimit;
- (id)datasets;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasDatasets;

@end
