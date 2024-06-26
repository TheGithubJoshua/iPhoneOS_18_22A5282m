@class NSString;

@interface INTypeCodableDescription : INCodableDescription

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayNameLocID;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;

+ (id)__INCodablePlacemarkAttributeMetadataTypeKey;
+ (id)__INCodableAttributeTypeKey;
+ (id)__INCodableStringAttributeMetadataDisableAutocorrectKey;
+ (id)__INCodableTimeIntervalAttributeMetadataMinimumUnitKey;
+ (id)__INCodableScalarAttributeKey;
+ (BOOL)supportsSecureCoding;
+ (id)__INCodableAttributeMetadataKey;
+ (id)__INCodableAttributeNameKey;
+ (id)__INCodableStringAttributeMetadataDefaultValueKey;
+ (id)__INCodableStringAttributeMetadataDisableSmartQuotesKey;
+ (id)__INCodableDateComponentsAttributeMetadataTypeKey;
+ (id)__INCodableURLAttributeMetadataKey;
+ (id)__INCodableStringAttributeMetadataCapitalizationKey;
+ (id)__INCodableObjectAttributeKey;
+ (id)__INCodableEnumAttributeMetadataDefaultValueKey;
+ (id)__INCodableBooleanAttributeMetadataFalseDisplayNameIDKey;
+ (id)__INCodableNumberAttributeMetadataDefaultValueKey;
+ (id)__INCodableMeasurementAttributeMetadataDefaultUnitKey;
+ (id)__INCodableAttributePromptDialogsKey;
+ (id)__INCodableAttributeMetadataPlaceholderKey;
+ (id)__INCodableStringAttributeMetadataDefaultValueIDKey;
+ (id)__INCodableMeasurementAttributeMetadataDefaultValueKey;
+ (id)__INCodableAttributeArraySizeSizeClassKey;
+ (id)__INCodableURLAttributeMetadataDefaultValueKey;
+ (id)__INCodableAttributePromptDialogKey;
+ (id)__INCodableAttributeRelationshipPredicateValueKey;
+ (id)__INCodableBooleanAttributeMetadataTrueDisplayNameKey;
+ (id)__INCodableAttributeDisplayNameIDKey;
+ (id)__INCodableBooleanAttributeMetadataTrueDisplayNameIDKey;
+ (id)__INCodableDateComponentsAttributeMetadataTemplateIDKey;
+ (id)__INCodableEnumAttributeEnumTypeNamespaceKey;
+ (id)__INCodableAttributeRelationshipPredicateValuesKey;
+ (id)__INCodableAttributePromptDialogTypeKey;
+ (id)__INCodableAttributeRelationshipKey;
+ (id)__INCodableCustomObjectAttributeObjectTypeNamespaceKey;
+ (id)__INCodableAttributeWindowSizeKey;
+ (id)__INCodableAttributeRelationshipPredicateNameKey;
+ (id)__INCodableAttributeMetadataPlaceholderIDKey;
+ (id)__INCodableAttributeSupportsSearchKey;
+ (id)__INCodablePlacemarkAttributeMetadataKey;
+ (id)__INCodableAttributeFixedSizeArrayKey;
+ (id)__INCodableDateComponentsAttributeMetadataTemplateKey;
+ (id)__INCodableStringAttributeMetadataMultilineKey;
+ (id)__INCodableAttributeEntityKeypathKey;
+ (id)__INCodableAttributeArraySizeSizeKey;
+ (id)__Key;
+ (id)__INCodableNumberAttributeMetadataMaximumValueKey;
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
+ (id)__NameKey;
+ (id)__INCodableAttributeSupportsDynamicEnumerationKey;
+ (id)__INCodableBooleanAttributeMetadataDefaultValueKey;
+ (id)__INCodableTimeIntervalAttributeMetadataDefaultValueKey;
+ (id)__INCodableCurrencyAmountAttributeMetadataCurrencyCodeKey;
+ (id)__INCodableEnumAttributeMetadataKey;
+ (id)__INCodableAttributeDefaultKey;
+ (id)__INCodablePersonAttributeMetadataTypeKey;
+ (id)__PropertiesKey;
+ (id)__INCodableStringAttributeMetadataDisableSmartDashesKey;
+ (id)__PropertyKey;
+ (id)__INCodableCurrencyAmountAttributeMetadataCurrencyCodesKey;
+ (id)__DisplayNameKey;
+ (id)__INCodableAttributeEnumTypeKey;
+ (id)__INCodableNumberAttributeMetadataTypeKey;
+ (id)__INCodableAttributeSupportsResolutionKey;
+ (id)__INCodableAttributeDisplayPriorityKey;
+ (id)__INCodableFileAttributeMetadataCustomUTIsKey;
+ (id)__INCodableDateComponentsAttributeMetadataDateStyleKey;
+ (id)__INCodableCustomObjectAttributeObjectTypeKey;
+ (id)__INCodableObjectAttributeTypeKey;
+ (id)__INCodableAttributeRelationshipParentNameKey;
+ (id)__INCodablePersonAttributeMetadataKey;
+ (id)__INCodableTimeIntervalAttributeMetadataMaximumValueKey;
+ (id)__INCodableMeasurementAttributeMetadataUnitKey;
+ (id)__INCodableTimeIntervalAttributeMetadataDefaultUnitKey;
+ (id)__INCodableAttributeUnsupportedReasonsKey;
+ (id)__INCodableTimeIntervalAttributeMetadataMinimumValueKey;
+ (id)__INCodableScalarAttributeTypeKey;
+ (id)__INCodableAttributeArraySizesKey;
+ (id)__INCodableDateComponentsAttributeMetadataFormatKey;
+ (id)__INCodableEnumAttributeEnumTypeKey;
+ (id)__INCodableAttributeUnsupportedReasonCodeKey;
+ (id)__INCodableTimeIntervalAttributeMetadataUnitKey;
+ (id)__INCodableAttributeTagKey;
+ (id)__INCodableBooleanAttributeMetadataFalseDisplayNameKey;
+ (id)__ClassNameKey;
+ (id)__DisplayNameIDKey;
+ (id)__ClassPrefixKey;

- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_attributesKey;
- (id)_attributeKey;
- (id)localizedDisplayNameWithLocalizer:(id)a0;

@end
