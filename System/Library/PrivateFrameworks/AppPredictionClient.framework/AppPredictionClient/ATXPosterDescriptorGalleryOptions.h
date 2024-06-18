@class NSArray, NSString, ATXComplication, NSDictionary;

@interface ATXPosterDescriptorGalleryOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *modularComplications;
@property (copy, nonatomic) ATXComplication *inlineComplication;
@property (nonatomic) BOOL allowsSystemSuggestedComplications;
@property (nonatomic) long long featuredConfidenceLevel;
@property (copy, nonatomic) NSString *displayNameLocalizationKey;
@property (copy, nonatomic) NSString *spokenNameLocalizationKey;
@property (copy, nonatomic) NSString *descriptiveTextLocalizationKey;
@property (nonatomic, getter=isHero) BOOL hero;
@property (nonatomic) BOOL shouldShowAsShuffleStack;
@property (nonatomic) long long photoSubtype;
@property (nonatomic) long long focus;
@property (nonatomic, getter=isOnlyEligibleForMadeForFocusSection) BOOL onlyEligibleForMadeForFocusSection;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)galleryOptionsFromDictionaryRepresentation:(id)a0 error:(id *)a1;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)isBlankTemplate;
- (void)setBlankTemplate:(BOOL)a0;
- (BOOL)isEqualToATXPosterDescriptorGalleryOptions:(id)a0;
- (void)setPreferredInlineComplication:(id)a0;
- (void)setPreferredComplications:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)preferredInlineComplication;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)preferredComplications;

@end
