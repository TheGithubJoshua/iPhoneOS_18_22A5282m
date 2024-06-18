@class NSString;

@interface WFNFCTrigger : WFTrigger

@property (copy, nonatomic) NSString *tagIdentifier;
@property (copy, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isUserInitiated;
+ (id)localizedDisplayName;
+ (BOOL)isSupportedOnThisDevice;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
