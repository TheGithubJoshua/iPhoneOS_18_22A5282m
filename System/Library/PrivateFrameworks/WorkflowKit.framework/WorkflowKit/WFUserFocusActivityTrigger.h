@class NSString, WFColor;

@interface WFUserFocusActivityTrigger : WFTrigger

@property (retain, nonatomic) NSString *activityName;
@property (retain, nonatomic) NSString *activityUniqueIdentifier;
@property (retain, nonatomic) NSString *activitySemanticIdentifier;
@property (retain, nonatomic) NSString *activityGlyphName;
@property (retain, nonatomic) WFColor *activityTintColor;
@property (nonatomic) BOOL onEnable;
@property (nonatomic) BOOL onDisable;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isUserInitiated;
+ (id)localizedDisplayName;
+ (id)tintColor;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)onLabel;
+ (id)offIcon;
+ (id)onIconTintColor;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (id)localizedDisplayExplanation;
+ (id)offIconTintColor;
+ (id)offLabel;
+ (id)onIcon;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)localizedDisplayName;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithActivity:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (id)displayGlyph;
- (id)displayGlyphName;
- (id)displayGlyphTintColor;
- (BOOL)hasValidConfiguration;
- (id)localizedDisplayExplanation;

@end
