@class HDProfile;

@interface FCGoalProgressStore : NSObject {
    HDProfile *_profile;
}

- (id)initWithProfile:(id)a0;
- (id)_userDefaultsDomain;
- (id)lastFiredEventDateForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_legacyDefaultsDomain;
- (void)storeFiredEventDate:(id)a0 identifier:(id)a1;
- (void)storeCurrentConfiguration:(id)a0;
- (id)currentConfiguration;

@end
