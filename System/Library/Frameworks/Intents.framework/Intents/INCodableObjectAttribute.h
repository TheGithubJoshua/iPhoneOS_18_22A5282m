@class NSString, NSValueTransformer;

@interface INCodableObjectAttribute : INCodableAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setOriginalTypeName:) NSString *_originalTypeName;
@property (copy, nonatomic) NSString *typeName;
@property (readonly, nonatomic) NSValueTransformer *valueTransformer;
@property (readonly, copy, nonatomic) NSString *className;

- (Class)objectClass;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (void)updateWithDictionary:(id)a0;
- (Class)resolutionResultClass;
- (id)__INIntentResponseCodableDescriptionKey;
- (unsigned long long)hash;
- (void)setClassName:(id)a0;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (long long)valueType;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__INTypeCodableDescriptionKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INCodableDescriptionKey;
- (Class)_relationshipValueTransformerClass;

@end
