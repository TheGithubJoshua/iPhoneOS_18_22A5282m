@class NSString;

@interface INCodableStringAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (nonatomic, getter=isMultiline) BOOL multiline;
@property (nonatomic) BOOL disableAutocorrect;
@property (nonatomic) BOOL disableSmartDashes;
@property (nonatomic) BOOL disableSmartQuotes;
@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) NSString *defaultValueID;
@property (nonatomic) long long capitalization;
@property (readonly, copy, nonatomic) NSString *localizedDefaultValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)localizedDefaultValueWithLocalizer:(id)a0;
- (id)__INTypeCodableDescriptionDisableSmartQuotesKey;
- (id)__INTypeCodableDescriptionCapitalizationKey;
- (id)__INIntentResponseCodableDescriptionCapitalizationKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartQuotesKey;
- (id)__INIntentResponseCodableDescriptionDisableAutocorrectKey;
- (id)__INIntentResponseCodableDescriptionMultilineKey;
- (id)__INCodableDescriptionMultilineKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartDashesKey;
- (id)__INCodableDescriptionCapitalizationKey;
- (id)__INCodableDescriptionDisableSmartDashesKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionDisableAutocorrectKey;
- (void).cxx_destruct;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDisableSmartDashesKey;
- (id)__INTypeCodableDescriptionDefaultValueIDKey;
- (id)__INCodableDescriptionDisableSmartQuotesKey;
- (id)__INTypeCodableDescriptionMultilineKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueIDKey;
- (id)__INCodableDescriptionDefaultValueIDKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDisableAutocorrectKey;
- (id)defaultValueForIntentDefaultValueProvider;

@end
