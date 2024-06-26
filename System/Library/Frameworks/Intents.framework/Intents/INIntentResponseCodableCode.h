@class INIntentResponseCodableDescription, NSString, NSArray;

@interface INIntentResponseCodableCode : NSObject <NSSecureCoding, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic, setter=_setCodableDescription:) INIntentResponseCodableDescription *_codableDescription;
@property (nonatomic) long long value;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isSuccess) BOOL success;
@property (copy, nonatomic) NSString *formatString;
@property (copy, nonatomic) NSString *formatStringLocID;
@property (copy, nonatomic) NSString *conciseFormatString;
@property (copy, nonatomic) NSString *conciseFormatStringLocID;
@property (readonly, nonatomic) NSArray *parameterNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)__INCodableDescriptionConciseFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionConciseFormatStringKey;
- (id)__INCodableDescriptionConciseFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)dictionaryRepresentation;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionConciseFormatStringDictionaryLanguageCodeKey;
- (id)_parameterNamesFromString:(id)a0;
- (void).cxx_destruct;
- (id)__INCodableDescriptionSuccessKey;
- (id)__INCodableDescriptionNameKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionConciseFormatStringDictionaryKey;

@end
