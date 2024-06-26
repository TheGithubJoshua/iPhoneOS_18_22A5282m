@class NSArray, CLLocation, NSDate;

@interface PLAssetCluster : NSObject

@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

+ (id)sortByTimeSortDescriptors;
+ (id)mergedCluster:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAssetsSortedByDate:(id)a0 region:(id)a1;

@end
