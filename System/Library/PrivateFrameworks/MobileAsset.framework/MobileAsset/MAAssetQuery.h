@class NSString, NSArray, NSSet, NSDate, NSMutableArray;

@interface MAAssetQuery : NSObject {
    BOOL _isPallasResult;
}

@property (readonly, nonatomic) NSMutableArray *queryParams;
@property (readonly, nonatomic) NSString *assetType;
@property (nonatomic) BOOL doNotBlockBeforeFirstUnlock;
@property (nonatomic) BOOL doNotBlockOnNetworkStatus;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) long long resultCode;
@property (readonly, nonatomic) BOOL isDone;
@property (readonly, nonatomic) NSSet *assetIds;
@property (readonly, nonatomic) long long returnTypes;
@property (readonly, nonatomic) NSDate *lastFetchDate;
@property (readonly, nonatomic) NSDate *postedDate;
@property (retain, nonatomic) NSString *purpose;

- (id)initWithType:(id)a0;
- (void)getResultsFromMessage:(id)a0;
- (void)augmentResultsWithState:(BOOL)a0;
- (long long)addKeyValuePair:(id)a0 with:(id)a1;
- (id)initWithType:(id)a0 andPurpose:(id)a1;
- (void)returnTypes:(long long)a0;
- (long long)queryMetaDataSync;
- (BOOL)isCatalogFetchedWithinThePastFewDays:(int)a0;
- (void).cxx_destruct;
- (id)description;
- (long long)queryInstalledAssetIds;
- (void)queryMetaDataWithError:(id /* block */)a0;
- (void)queryMetaData:(id /* block */)a0;
- (BOOL)isCatalogFetchedFromLiveServer;
- (long long)addKeyValueNull:(id)a0;
- (long long)addKeyValueArray:(id)a0 with:(id)a1;

@end
