@protocol CNDonationAgentAdapter;

@interface CNDonationStore : NSObject

@property (readonly, nonatomic) id<CNDonationAgentAdapter> adapter;

- (id)init;
- (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)rejectValueWithDonationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)donatedMeCardEither;
- (void)fetchDonatedMeCard:(id /* block */)a0;
- (void)removeAllRejectionsWithCompletionHandler:(id /* block */)a0;
- (id)donatedMeCard;
- (void).cxx_destruct;
- (void)donateMeCardValues:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAdapter:(id)a0;
- (id)changeFromAccount:(id)a0 toAccount:(id)a1;
- (void)rejectValuesWithClusterIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)meCardDonations;

@end
