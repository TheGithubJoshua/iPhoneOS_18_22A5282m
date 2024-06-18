@class NSString, NSDictionary;

@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *parameters;

+ (BOOL)supportsSecureCoding;
+ (id)predicateForFirstPartyWorkoutMatchingTypes:(id)a0 states:(id)a1;
+ (id)predicateForPhotosAppBecameForeground;
+ (id)predicateForIsConnectedToCar;
+ (id)andPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)predicateForNextAlarm;
+ (id)predicateWithIdentifier:(id)a0;
+ (id)_predicateForChangeAtKeyPath:(id)a0 identifier:(id)a1;
+ (id)contextualPredicateForKeyPaths:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)predicateForIsConnectedToAudioBluetoothDevice;
+ (id)predicates;
+ (id)predicateForNetworkQualityFair;
+ (id)_predicateForKeyPath:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)_predicateForKeyPath:(id)a0 equalToValue:(id)a1 identifier:(id)a2;
+ (id)predicateForUserIsLeavingHome;
+ (id)predicateForForegroundApp;
+ (id)predicateForUserIsArrivingAtHome;
+ (id)predicateForBacklightOnStatus;
+ (id)predicateForNetworkQualityBad;
+ (id)orPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)notPredicateWithSubpredicate:(id)a0 identifier:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)initWithPlistDictionary:(id)a0;
- (id)plistDictionary;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;

@end
