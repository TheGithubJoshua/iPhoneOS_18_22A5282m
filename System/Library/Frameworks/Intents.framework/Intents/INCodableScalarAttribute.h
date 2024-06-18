@interface INCodableScalarAttribute : INCodableAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;

- (Class)objectClass;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (void)updateWithDictionary:(id)a0;
- (Class)resolutionResultClass;
- (id)__INIntentResponseCodableDescriptionKey;
- (unsigned long long)hash;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (long long)valueType;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__INTypeCodableDescriptionKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INCodableDescriptionKey;
- (Class)_relationshipValueTransformerClass;
- (id)initWithPropertyName:(id)a0 type:(long long)a1;

@end
