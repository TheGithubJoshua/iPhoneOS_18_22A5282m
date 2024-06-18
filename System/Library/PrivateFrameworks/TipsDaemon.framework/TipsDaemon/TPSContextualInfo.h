@class NSString, NSArray, TPSMonitoringEvents, TPSContextualCondition;

@interface TPSContextualInfo : TPSSerializableObject

@property (nonatomic) long long customizationID;
@property (nonatomic) long long displayMaxCount;
@property (nonatomic) long long lastModifiedDate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *displayBundleIDs;
@property (copy, nonatomic) NSArray *eligibleContext;
@property (copy, nonatomic) TPSMonitoringEvents *monitoringEvents;
@property (copy, nonatomic) NSArray *usageEvents;
@property (copy, nonatomic) TPSContextualCondition *triggerCondition;
@property (copy, nonatomic) TPSContextualCondition *desiredOutcomeCondition;
@property (readonly, nonatomic) int priority;

+ (BOOL)supportsSecureCoding;
+ (id)contentDictionaryWithTipDeliveryInfoId:(id)a0 deliveryInfoMap:(id)a1;
+ (void)eventsInfoArrayForContextualInfoDictionary:(id)a0 triggerEvents:(id *)a1 desiredOutcomeEvents:(id *)a2;
+ (id)identifierFromDictionary:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (long long)_lastModifiedDateFromDictionary:(id)a0;
- (BOOL)hasChangesFromDictionary:(id)a0;
- (id)displayBundleID;
- (id)conditionForType:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)restartTriggerTracking;
- (void)restartDesiredOutcomeTracking;
- (id)desiredOutcomeEventIdentifiers;
- (id)triggerEventIdentifiers;

@end
