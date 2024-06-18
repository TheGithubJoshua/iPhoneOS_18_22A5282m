@class NSArray;

@interface WFAlarmTrigger : WFTrigger

@property (nonatomic) long long alarmType;
@property (copy, nonatomic) NSArray *alarmIDs;
@property (copy, nonatomic) NSArray *cachedAlarmDescriptions;
@property (nonatomic) long long alarmState;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
