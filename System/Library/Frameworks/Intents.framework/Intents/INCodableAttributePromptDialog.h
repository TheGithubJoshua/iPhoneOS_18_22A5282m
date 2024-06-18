@interface INCodableAttributePromptDialog : INCodableAttributeDialog

@property (nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;

- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (void)updateWithDictionary:(id)a0;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (unsigned long long)hash;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__INTypeCodableDescriptionKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionKey;

@end
