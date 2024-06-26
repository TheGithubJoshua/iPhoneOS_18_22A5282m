@class NSString, NSArray, INCodableAttribute, NSNumber;

@interface INIntentCodableDescription : INRootCodableDescription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setInputAttributeName:) NSString *_inputAttributeName;
@property (copy, nonatomic, setter=_setKeyAttributeName:) NSString *_keyAttributeName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleLocID;
@property (copy, nonatomic) NSString *descriptiveText;
@property (copy, nonatomic) NSString *descriptiveTextLocID;
@property (copy, nonatomic) NSString *defaultImageName;
@property (nonatomic) long long intentCategory;
@property (copy, nonatomic) NSString *verb;
@property (nonatomic) BOOL userConfirmationRequired;
@property (nonatomic, getter=isForeground) BOOL foreground;
@property (nonatomic, getter=isDeprecated) BOOL deprecated;
@property (nonatomic, getter=isConfigurable) BOOL configurable;
@property (nonatomic, getter=isEligibleForSuggestions) BOOL eligibleForSuggestions;
@property (nonatomic, getter=isEligibleForWidgets) BOOL eligibleForWidgets;
@property (readonly, nonatomic) INCodableAttribute *inputAttribute;
@property (readonly, nonatomic) INCodableAttribute *keyAttribute;
@property (retain, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSNumber *versioningHash;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedDescriptiveText;
@property (copy, nonatomic) NSArray *entityVerbs;

+ (id)__ParameterKey;
+ (id)__Key;
+ (id)__NameKey;
+ (id)__NameKey;
+ (id)__HashKey;
+ (id)__ParametersKey;
+ (id)__SummaryKey;
+ (id)__ClassNameKey;
+ (id)__DescriptionKey;
+ (id)__VerbAssociationsKey;
+ (id)__EntityKey;
+ (id)__TitleIDKey;
+ (id)__ClassPrefixKey;
+ (id)__TitleKey;
+ (id)__DescriptionIDKey;
+ (id)__EligibleForWidgetsKey;
+ (id)__DefaultImageNameKey;
+ (id)__DeprecatedKey;
+ (id)__PhrasesKey;
+ (id)__UserConfirmationRequiredKey;
+ (id)_intentClassNameWithDictionary:(id)a0;
+ (id)__ForegroundKey;
+ (id)__IneligibleForSuggestionsKey;
+ (id)__VerbKey;
+ (id)__ConfigurableKey;
+ (id)__CategoryKey;
+ (id)__KeyParameterKey;
+ (id)__InputKey;

- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)attributes;
- (void)encodeWithCoder:(id)a0;
- (id)_ignoredAttributeTags;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_attributesKey;
- (id)_attributeKey;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)a0 intentResponseCodableDescription:(id)a1;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)a0 intentResponseCodableDescription:(id)a1;
- (void)_updateWithIntentCodableDescription:(id)a0;
- (id)localizedDescriptiveTextWithLocalizer:(id)a0;
- (id)localizedTitleWithLocalizer:(id)a0;
- (id)resolvableParameterCombinationsWithParameterCombinations:(id)a0;

@end
