@class NSSet;

@interface WFSoundRecognitionTrigger : WFTrigger

@property (copy, nonatomic) NSSet *soundDetectionTypes;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyph;
+ (double)displayGlyphCornerRadius;
+ (id)localizedDisplayExplanation;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasValidConfiguration;

@end
