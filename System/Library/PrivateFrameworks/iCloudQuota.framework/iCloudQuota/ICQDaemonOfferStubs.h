@class NSArray;

@interface ICQDaemonOfferStubs : ICQDaemonPersisted

@property (readonly, nonatomic) NSArray *serverStubs;
@property (readonly, nonatomic) NSArray *buddyStubs;
@property (readonly, nonatomic) NSArray *defaultStubs;
@property (readonly, nonatomic) NSArray *premiumStubs;

+ (id)daemonOfferStubsDictionarySample;
+ (id)persistenceKey;

- (id)initWithDictionary:(id)a0;
- (id)choosePremiumStub;
- (id)chooseBuddyStubForConditions:(id)a0;
- (id)chooseStubForConditions:(id)a0;
- (id)chooseStub;
- (id)_chooseStubFromServerStubs:(id)a0 offerType:(long long)a1;
- (void)_initServerStubsFromServerDictionary;
- (id)_initWithAccount:(id)a0 error:(id)a1;
- (id)chooseFirstPremiumStub;
- (void).cxx_destruct;
- (id)_initWithAccount:(id)a0 serverDictionary:(id)a1;
- (id)chooseDefaultStubForConditions:(id)a0;
- (id)chooseFirstStub;
- (void)setServerDictionary:(id)a0;
- (id)chooseDefaultStub;
- (BOOL)containsOfferID:(id)a0;
- (BOOL)_stubsArrayContainsOfferID:(id)a0 stubs:(id)a1;
- (id)chooseFirstDefaultStub;
- (id)chooseBuddyStubForOfferType:(long long)a0;
- (id)sortedServerStubs:(id)a0;
- (id)chooseBuddyStub;
- (id)_chooseStubFromServerStubs:(id)a0 conditions:(id)a1;
- (id)choosePremiumStubForConditions:(id)a0;
- (id)chooseStubForOfferType:(long long)a0;
- (BOOL)_isValidServerStubs:(id)a0 key:(id)a1;

@end
