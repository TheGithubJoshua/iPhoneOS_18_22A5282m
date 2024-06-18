@class NSString;

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog

@property (copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *predicateFormat;

+ (BOOL)supportsSecureCoding;

- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)__INCodableDescriptionCodeKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (unsigned long long)hash;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INIntentResponseCodableDescriptionCodeKey;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__INTypeCodableDescriptionCodeKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionKey;

@end
