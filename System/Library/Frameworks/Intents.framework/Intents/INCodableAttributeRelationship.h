@class NSArray, NSDictionary, NSString, INCodableAttribute, INCodableDescription;

@interface INCodableAttributeRelationship : NSObject <NSSecureCoding, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=_setOriginalDictionary:) NSDictionary *_originalDictionary;
@property (readonly, weak, nonatomic) INCodableAttribute *codableAttribute;
@property (readonly, weak, nonatomic) INCodableDescription *_codableDescription;
@property (weak, nonatomic) INCodableAttribute *parentCodableAttribute;
@property (nonatomic) unsigned long long relation;
@property (retain, nonatomic) NSArray *values;
@property (readonly, nonatomic) Class valueClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)__INIntentResponseCodableDescriptionPredicateNameKey;
- (id)dictionaryRepresentation;
- (id)__INCodableDescriptionPredicateNameKey;
- (id)__INTypeCodableDescriptionPredicateNameKey;
- (id)__INTypeCodableDescriptionPredicateValueKey;
- (void)_establishRelationship;
- (id)__INTypeCodableDescriptionPredicateValuesKey;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)__INIntentResponseCodableDescriptionPredicateValueKey;
- (id)__INCodableDescriptionPredicateValueKey;
- (id)initWithCodableAttribute:(id)a0;
- (id)__INIntentResponseCodableDescriptionPredicateValuesKey;
- (id)__INTypeCodableDescriptionParentNameKey;
- (BOOL)compareValue:(id)a0;
- (id)__INCodableDescriptionPredicateValuesKey;
- (id)__INIntentResponseCodableDescriptionParentNameKey;
- (id)__INCodableDescriptionParentNameKey;

@end
