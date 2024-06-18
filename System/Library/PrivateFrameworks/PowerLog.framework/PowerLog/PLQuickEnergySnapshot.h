@class NSDate;

@interface PLQuickEnergySnapshot : NSObject

@property (retain) NSDate *timestamp;
@property double cpuEnergy;
@property double networkEnergy;

- (double)getTotalEnergy;
- (id)initWithEnergies:(double)a0 andNetworkEnergy:(double)a1;
- (void).cxx_destruct;
- (id)description;
- (double)computeEnergyDiff:(id)a0;

@end
