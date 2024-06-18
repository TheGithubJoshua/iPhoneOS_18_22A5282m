@class NSMutableDictionary, NSString, NSDictionary, INCodableLocalizationTable, NSOrderedSet, INSchema, NSArray;

@interface INCodableDescription : NSObject <NSSecureCoding, INCodableCoding> {
    NSMutableDictionary *_attributesByName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setLocalizationTable:) INCodableLocalizationTable *_localizationTable;
@property (copy, nonatomic, setter=_setCustomLocalizationTable:) INCodableLocalizationTable *_customLocalizationTable;
@property (readonly, copy, nonatomic) NSString *_attributeKey;
@property (readonly, copy, nonatomic) NSString *_attributesKey;
@property (weak, nonatomic) INSchema *schema;
@property (copy, nonatomic) NSString *intentDefinitionNamespace;
@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *typeName;
@property (copy, nonatomic) NSDictionary *attributes;
@property (copy, nonatomic) NSOrderedSet *displayOrderedAttributes;
@property (copy, nonatomic) NSString *semanticRoot;
@property (copy, nonatomic) NSString *mainBundleIdentifier;
@property (readonly, nonatomic) NSArray *referencedCodableEnums;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__INCodablePlacemarkAttributeMetadataTypeKey;
+ (id)__INCodableAttributeTypeKey;
+ (id)__INCodableStringAttributeMetadataDisableAutocorrectKey;
+ (id)__INCodableAttributePromptDialogFormatStringDictionaryKey;
+ (id)__INCodableAttributePromptDialogFormatStringIDKey;
+ (id)__INCodableAttributePromptDialogFormatStringKey;
+ (id)__INCodableTimeIntervalAttributeMetadataMinimumUnitKey;
+ (id)__INCodableScalarAttributeKey;
+ (id)__INCodableAttributeDialogFormatStringDictionaryKey;
+ (id)__INIntentCodablePhrasePronunciationHintKey;
+ (id)__INCodableAttributeMetadataKey;
+ (id)__INIntentResponseCodableCodeFormatStringDictionaryKey;
+ (id)__INCodableAttributeNameKey;
+ (id)__INCodableStringAttributeMetadataDefaultValueKey;
+ (id)__INCodableAttributeDialogFormatStringIDKey;
+ (id)_codableDescriptionForTypedObject:(id)a0 inDictionary:(id)a1;
+ (id)__INCodableStringAttributeMetadataDisableSmartQuotesKey;
+ (id)__INCodableDateComponentsAttributeMetadataTypeKey;
+ (id)__INIntentResponseCodableCodeConciseFormatStringKey;
+ (id)__INCodableURLAttributeMetadataKey;
+ (id)__INCodableStringAttributeMetadataCapitalizationKey;
+ (id)__INCodableObjectAttributeKey;
+ (id)__INCodableAttributeUnsupportedReasonFormatStringDictionaryLanguageCodeKey;
+ (id)__INIntentResponseCodableCodeFormatStringDictionaryLanguageCodeKey;
+ (id)__INCodableEnumAttributeMetadataDefaultValueKey;
+ (id)__INCodableBooleanAttributeMetadataFalseDisplayNameIDKey;
+ (id)__INCodableNumberAttributeMetadataDefaultValueKey;
+ (id)__INCodableMeasurementAttributeMetadataDefaultUnitKey;
+ (id)__INCodableAttributePromptDialogsKey;
+ (id)__INIntentCodablePhrasePhraseIDKey;
+ (id)__INCodableAttributeMetadataPlaceholderKey;
+ (id)__INCodableStringAttributeMetadataDefaultValueIDKey;
+ (id)__INCodableMeasurementAttributeMetadataDefaultValueKey;
+ (id)__INCodableAttributeArraySizeSizeClassKey;
+ (id)__INCodableURLAttributeMetadataDefaultValueKey;
+ (id)__INCodableAttributePromptDialogKey;
+ (id)__INCodableAttributeRelationshipPredicateValueKey;
+ (id)__INCodableBooleanAttributeMetadataTrueDisplayNameKey;
+ (id)__INCodableAttributeDisplayNameIDKey;
+ (id)__INIntentResponseCodableCodeSuccessKey;
+ (id)__INCodableAttributeUnsupportedReasonFormatStringIDKey;
+ (id)__INCodableBooleanAttributeMetadataTrueDisplayNameIDKey;
+ (id)__INCodableDateComponentsAttributeMetadataTemplateIDKey;
+ (id)__INCodableEnumAttributeEnumTypeNamespaceKey;
+ (id)__INCodableAttributeRelationshipPredicateValuesKey;
+ (id)__INCodableAttributeUnsupportedReasonFormatStringLanguageCodeKey;
+ (id)__INCodableAttributePromptDialogTypeKey;
+ (id)__INIntentResponseCodableCodeConciseFormatStringDictionaryKey;
+ (id)__INCodableAttributeRelationshipKey;
+ (id)__INCodableCustomObjectAttributeObjectTypeNamespaceKey;
+ (id)_calculateReferencedCodableDescriptionsFromAttributes:(id)a0 usingTypes:(id)a1;
+ (id)__INCodableAttributeWindowSizeKey;
+ (id)__INIntentCodablePhrasePronunciationHintIDKey;
+ (id)__INCodableAttributeDialogFormatStringLanguageCodeKey;
+ (id)__INCodableAttributeRelationshipPredicateNameKey;
+ (id)__INCodableAttributeMetadataPlaceholderIDKey;
+ (id)__INCodableAttributeSupportsSearchKey;
+ (id)__INCodablePlacemarkAttributeMetadataKey;
+ (id)__INCodableAttributeFixedSizeArrayKey;
+ (id)__INCodableDateComponentsAttributeMetadataTemplateKey;
+ (id)__INCodableStringAttributeMetadataMultilineKey;
+ (id)__INCodableAttributeEntityKeypathKey;
+ (id)__INCodableAttributeArraySizeSizeKey;
+ (id)__INIntentResponseCodableCodeFormatStringKey;
+ (id)__INCodableNumberAttributeMetadataMaximumValueKey;
+ (id)__INIntentResponseCodableCodeConciseFormatStringLanguageCodeKey;
+ (id)__INIntentResponseCodableCodeFormatStringLanguageCodeKey;
+ (id)__INCodableNumberAttributeMetadataMinimumValueKey;
+ (id)__INCodableMeasurementAttributeMetadataSupportsNegativeNumbersKey;
+ (id)__INCodableTimeIntervalAttributeMetadataMaximumUnitKey;
+ (id)__INCodableAttributeSupportsMultipleValuesKey;
+ (id)__INCodableDateComponentsAttributeMetadataTimeStyleKey;
+ (id)__INCodableAttributeConfigurableKey;
+ (id)__INCodableFileAttributeMetadataTypeKey;
+ (id)__INCodableAttributeDisplayNameKey;
+ (id)__INCodableAttributeUnsupportedReasonKey;
+ (id)__INCodableNumberAttributeMetadataSupportsNegativeNumbersKey;
+ (id)_calculateReferencedCodableDescriptionsFromAttributes:(id)a0 usingTypes:(id)a1 foundAttributes:(id)a2;
+ (id)__INCodableAttributeSupportsDynamicEnumerationKey;
+ (id)__INCodableBooleanAttributeMetadataDefaultValueKey;
+ (id)__INCodableTimeIntervalAttributeMetadataDefaultValueKey;
+ (id)__INCodableCurrencyAmountAttributeMetadataCurrencyCodeKey;
+ (id)__INCodableEnumAttributeMetadataKey;
+ (id)__INCodableAttributeDefaultKey;
+ (id)__INCodableAttributeDialogFormatStringKey;
+ (id)__INCodablePersonAttributeMetadataTypeKey;
+ (id)__INCodableStringAttributeMetadataDisableSmartDashesKey;
+ (id)__INCodableCurrencyAmountAttributeMetadataCurrencyCodesKey;
+ (id)__INCodableAttributeDialogFormatStringDictionaryLanguageCodeKey;
+ (id)__INCodableAttributeEnumTypeKey;
+ (id)__INCodableNumberAttributeMetadataTypeKey;
+ (id)__INCodableAttributeSupportsResolutionKey;
+ (id)__INCodableAttributeDisplayPriorityKey;
+ (id)__INCodableFileAttributeMetadataCustomUTIsKey;
+ (id)__INCodableDateComponentsAttributeMetadataDateStyleKey;
+ (id)__INIntentCodablePhrasePhraseKey;
+ (id)__INCodableCustomObjectAttributeObjectTypeKey;
+ (id)__INCodableObjectAttributeTypeKey;
+ (id)__INCodableAttributeRelationshipParentNameKey;
+ (id)__INCodableAttributePromptDialogFormatStringLanguageCodeKey;
+ (id)__INCodableAttributeUnsupportedReasonFormatStringKey;
+ (id)__INIntentResponseCodableCodeNameKey;
+ (id)__INCodablePersonAttributeMetadataKey;
+ (id)__INIntentResponseCodableCodeConciseFormatStringIDKey;
+ (id)__INCodableTimeIntervalAttributeMetadataMaximumValueKey;
+ (id)__INCodableMeasurementAttributeMetadataUnitKey;
+ (id)__INCodableTimeIntervalAttributeMetadataDefaultUnitKey;
+ (id)__INCodableAttributeUnsupportedReasonsKey;
+ (id)__INCodableAttributePromptDialogFormatStringDictionaryLanguageCodeKey;
+ (id)__INCodableTimeIntervalAttributeMetadataMinimumValueKey;
+ (id)__INCodableScalarAttributeTypeKey;
+ (id)__INCodableAttributeArraySizesKey;
+ (id)__INCodableDateComponentsAttributeMetadataFormatKey;
+ (id)__INCodableAttributeUnsupportedReasonFormatStringDictionaryKey;
+ (id)__INCodableEnumAttributeEnumTypeKey;
+ (id)__INCodableAttributeUnsupportedReasonCodeKey;
+ (id)__INIntentResponseCodableCodeFormatStringIDKey;
+ (id)__INCodableTimeIntervalAttributeMetadataUnitKey;
+ (id)__INCodableAttributeTagKey;
+ (id)__INIntentResponseCodableCodeConciseFormatStringDictionaryLanguageCodeKey;
+ (id)__INCodableBooleanAttributeMetadataFalseDisplayNameKey;

- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)init;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)_ignoredAttributeTags;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_nullable_schema;
- (void)_updateAttributesByName;
- (id)attributeByKeyPath:(id)a0;
- (id)attributeByName:(id)a0;
- (unsigned long long)highestAttributeTag;

@end