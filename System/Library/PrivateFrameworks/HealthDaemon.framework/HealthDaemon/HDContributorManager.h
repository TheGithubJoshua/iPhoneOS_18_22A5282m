@class HDProfile;

@interface HDContributorManager : NSObject {
    HDProfile *_profile;
}

- (id)initWithProfile:(id)a0;
- (id)_imPreferredAccount;
- (id)insertOrLookupContributorEntityWithReference:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)defaultContributorReference;
- (void).cxx_destruct;
- (id)_primaryAppleAccount;
- (id)contributorForReference:(id)a0 error:(id *)a1;

@end
