@class NSArray, NSString, NSDate;

@interface PLAssetSearchResult : PLSearchResult

@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) NSDate *sortDate;
@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (unsigned long long)assetCount;
- (id)keyAssetUUID;

@end
