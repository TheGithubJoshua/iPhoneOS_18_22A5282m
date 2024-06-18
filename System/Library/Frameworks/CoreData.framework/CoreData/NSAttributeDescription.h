@class NSString, NSData;

@interface NSAttributeDescription : NSPropertyDescription {
    unsigned short _type;
    Class _attributeValueClass;
    NSString *_valueTransformerName;
    NSString *_attributeValueClassName;
    id _defaultValue;
}

@property (readonly, nonatomic) BOOL usesMergeableStorage;
@property BOOL preserveValueOnDeletionInPersistentHistory;
@property BOOL isFileBackedFuture;
@property (readonly, nonatomic) BOOL usesMergeableStorage;
@property unsigned long long attributeType;
@property (copy) NSString *attributeValueClassName;
@property (retain) id defaultValue;
@property (readonly, copy) NSData *versionHash;
@property (copy) NSString *valueTransformerName;
@property BOOL allowsExternalBinaryDataStorage;
@property BOOL preservesValueInHistoryOnDeletion;
@property BOOL allowsCloudEncryption;

+ (BOOL)supportsSecureCoding;
+ (id)stringForAttributeType:(unsigned long long)a0;
+ (void)initialize;

- (BOOL)_isEqualWithoutIndex:(id)a0;
- (BOOL)_isSchemaEqual:(id)a0;
- (BOOL)_isEqual:(id)a0 skipIndexCheck:(BOOL)a1;
- (BOOL)_comparePredicatesAndWarnings:(id)a0;
- (id)_rawValidationWarnings;
- (BOOL)_nonPredicateValidateValue:(id *)a0 forKey:(id)a1 inObject:(id)a2 error:(id *)a3;
- (id)validationWarnings;
- (BOOL)_epsilonEquals:(id)a0 rhs:(id)a1 withFlags:(int)a2;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_propertyType;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (void)_createCachesAndOptimizeState;
- (id)_initWithName:(id)a0 type:(unsigned long long)a1 withClassName:(id)a2;
- (BOOL)isIndexed;
- (id)_initWithName:(id)a0 type:(unsigned long long)a1;
- (BOOL)storesBinaryDataExternally;
- (int)_encodedAttributeFlagsForFlags:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)validationPredicates;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_attributeTypeIsSchemaEqual:(unsigned long long)a0;
- (void)dealloc;
- (Class)_attributeValueClass;
- (id)_initWithType:(unsigned long long)a0;
- (id)_rawValidationPredicates;

@end
