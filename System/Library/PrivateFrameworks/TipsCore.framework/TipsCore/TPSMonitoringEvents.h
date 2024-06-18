@class NSDictionary;

@interface TPSMonitoringEvents : TPSSerializableObject

@property (readonly, nonatomic) BOOL hasEvents;
@property (copy, nonatomic) NSDictionary *initialDisplayEventMap;
@property (copy, nonatomic) NSDictionary *displayEventMap;
@property (copy, nonatomic) NSDictionary *restartTrackingTriggerEventMap;
@property (copy, nonatomic) NSDictionary *restartTrackingDisplayEventMap;
@property (copy, nonatomic) NSDictionary *dismissalEventMap;
@property (copy, nonatomic) NSDictionary *desiredOutcomeEventMap;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)hasRegistrableContextualEventsForEventOptions:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)clientContextEventsForMap:(id)a0;
- (id)clientContextKeysForMap:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)registrableContextualEventsForEventOptions:(unsigned long long)a0 type:(long long)a1;
- (BOOL)hasClientContextKeysForEventOptions:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0 desiredOutcomeDictionary:(id)a1;
- (id)registrableContextualEventsForMap:(id)a0 type:(long long)a1;
- (id)clientContextKeysForEventOptions:(unsigned long long)a0;
- (id)autoDismissEvents;
- (unsigned long long)eventOptionsForEventIdentifier:(id)a0;
- (BOOL)hasEvents;
- (id)eventMapFromMonitoringEventsDictionary:(id)a0;

@end
