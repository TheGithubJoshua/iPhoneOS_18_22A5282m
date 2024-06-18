@class NSArray, RTLocation;

@interface RTVisitLocationPoints : NSObject

@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) RTLocation *centroid;

- (id)init;
- (id)firstDate;
- (id)initWithLocations:(id)a0;
- (id)lastDate;
- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (void)enumerateLowSpeedSegementsUsingBlock:(id)a0 block:(id /* block */)a1;

@end
