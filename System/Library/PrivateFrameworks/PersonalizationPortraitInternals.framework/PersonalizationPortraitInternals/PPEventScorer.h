@class NSSet, NSDictionary, EAEmailAddressSet, PPTrialWrapper;

@interface PPEventScorer : NSObject {
    NSDictionary *_pastEventTitlesAndParticipants;
    double _earliestStartTime;
    BOOL _shouldConsiderAlarms;
    EAEmailAddressSet *_emailVIPEmailAddresses;
    NSSet *_favoritesEmailAddresses;
    int _rankingOptions;
    long long _pastTitlesCount;
    PPTrialWrapper *_trialWrapper;
}

+ (void)clearAssetCache;
+ (id)enrichDictionary:(id)a0 withEvent:(id)a1;
+ (void)setLocationsOfInterestLocations:(id)a0 withReferenceDate:(id)a1;

- (id)init;
- (id)scoreEvent:(id)a0 usingDate:(id)a1;
- (void)setFavoritesEmailAddresses:(id)a0;
- (void).cxx_destruct;
- (BOOL)isWorkCalendar:(id)a0;
- (BOOL)isHomeCalendar:(id)a0;
- (void)setEmailVIPEmailAddresses:(id)a0;
- (id)initWithTrialWrapper:(id)a0;
- (id)initWithPastEventTitlesAndParticipants:(id)a0 andEarliestStartTime:(double)a1 shouldConsiderAlarms:(BOOL)a2 withOptions:(int)a3 trialWrapper:(id)a4;
- (BOOL)scoreIsExtraordinary:(double)a0 rankingOptions:(int)a1;

@end
