@class NSDictionary, NSDate;

@interface STLaunchDates : NSObject

@property (retain) NSDictionary *launchDatesByApp;
@property (retain) NSDate *latestDate;

+ (id)sharedDates;

- (void)load;
- (id)init;
- (void)refreshDates;
- (void).cxx_destruct;
- (void)_updateDates:(id)a0;
- (void)_writeDatesPref:(id)a0;
- (void)addBiomeDates;
- (void)addSpotlightDates;
- (id)launchDateForApp:(id)a0;
- (void)readDatesPref;
- (void)updateDates:(id)a0;
- (void)writeDatesPref;

@end
