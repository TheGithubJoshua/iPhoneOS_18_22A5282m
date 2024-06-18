@interface INCodablePlacemarkAttributeMetadata : INCodableAttributeMetadata

@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;

- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (void)updateWithDictionary:(id)a0;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INCodableDescriptionKey;

@end
