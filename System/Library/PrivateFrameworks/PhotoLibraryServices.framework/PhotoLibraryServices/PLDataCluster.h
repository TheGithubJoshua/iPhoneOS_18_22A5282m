@class NSArray;

@interface PLDataCluster : NSObject

@property (retain, nonatomic) NSArray *objects;
@property (nonatomic) double diameter;
@property (retain, nonatomic) id clustroid;
@property (nonatomic) double score;

+ (id)clusterWithObjects:(id)a0;
+ (id)clusterWithObjects:(id)a0 clustroid:(id)a1 diameter:(double)a2;

- (id)locations;
- (id)init;
- (id)meanUniversalDate;
- (void).cxx_destruct;
- (id)description;
- (id)meanRegion:(double)a0;
- (id)approximateRegionWithMaximumRadius:(double)a0;
- (id)universalDates;

@end
