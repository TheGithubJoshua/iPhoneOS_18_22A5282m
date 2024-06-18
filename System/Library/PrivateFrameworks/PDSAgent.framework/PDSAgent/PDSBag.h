@class NSNumber, NSArray;

@interface PDSBag : IDSServerBag

@property (readonly, nonatomic) long long ttlFromBag;
@property (readonly, nonatomic) long long ttlWindowFromBag;
@property (readonly, nonatomic) long long ttlGracePeriodFromBag;
@property (readonly, nonatomic) double coalesceDelayFromBag;
@property (readonly, nonatomic) double coalescePeriodFromBag;
@property (readonly, nonatomic) double coalesceMaxPeriodFromBag;
@property (readonly, nonatomic) double messageTimeoutFromBag;
@property (readonly, nonatomic) BOOL bagKillSwitchActive;
@property (readonly, nonatomic) NSNumber *minEnabledVersion;
@property (readonly, nonatomic) BOOL allRequiredBagCoalescingValuesPresent;
@property (readonly, nonatomic) BOOL allRequiredBagTTLValuesPresent;
@property (readonly, nonatomic) NSArray *nonCoalescingTopicsFromBag;

- (long long)ttlFromDefault;
- (id)init;
- (BOOL)topicAvoidsCoalescing:(id)a0;
- (BOOL)_valuesDefinedAsNumbersInBagForKeys:(id)a0;
- (long long)ttlWindowFromDefault;
- (long long)ttlGracePeriodFromDefault;
- (void)_bagExternallyReloaded;
- (unsigned long long)_bagDomain;

@end
