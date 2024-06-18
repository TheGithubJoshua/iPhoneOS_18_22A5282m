@class NSMutableDictionary, NSString, NSData, NSNumber;

@interface AceObject : NSObject <AceObject> {
    NSNumber *_deserializationDuration;
    NSNumber *_mutatingCommand;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *plistData;
@property (readonly, nonatomic) NSMutableDictionary *dict;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSNumber *usefulnessScore;
@property (nonatomic) BOOL mutatingCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceObjectWithDictionary:(id)a0;
+ (id)dictionaryArrayWithAceObjectArray:(id)a0;
+ (id)_aceObjectWithMutableDictionary:(id)a0;
+ (id)_newAceObjectWithMutableDictionary:(id)a0;
+ (id)aceObjectArrayWithDictionaryArray:(id)a0 baseClass:(Class)a1;
+ (id)aceObjectArrayWithDictionaryArray:(id)a0 baseProtocol:(id)a1;
+ (id)aceObjectDictionaryWithDictionary:(id)a0 baseClass:(Class)a1;
+ (id)aceObjectDictionaryWithDictionary:(id)a0 baseProtocol:(id)a1;
+ (id)aceObjectWithGenericCommand:(id)a0;
+ (id)aceObjectWithPlistData:(id)a0;
+ (id)_aceObjectWithMutableDictionary:(id)a0 context:(id)a1;
+ (id)_filteredDictionaryForKeySet:(id)a0 plistData:(id)a1;
+ (id)aceObjectArrayWithDictionaryArray:(id)a0 baseClass:(Class)a1 context:(id)a2;
+ (id)aceObjectArrayWithDictionaryArray:(id)a0 baseProtocol:(id)a1 context:(id)a2;
+ (id)aceObjectDictionaryWithDictionary:(id)a0 baseClass:(Class)a1 context:(id)a2;
+ (id)aceObjectDictionaryWithDictionary:(id)a0 baseProtocol:(id)a1 context:(id)a2;
+ (id)aceObjectWithDictionary:(id)a0 context:(id)a1;
+ (id)aceObjectWithGenericCommand:(id)a0 context:(id)a1;
+ (id)dictionaryWithAceObjectDictionary:(id)a0;
+ (id)newAceObjectWithDictionary:(id)a0 context:(id)a1;
+ (id)newAceObjectWithGenericCommand:(id)a0 context:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)encodedClassName;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)groupIdentifier;
- (id)fullDescription;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (id)_serializedData;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)properties;
- (id)dictionary;
- (id)propertyForKey:(id)a0;
- (id)_dict;
- (BOOL)_isDeserialized;
- (id)propertyForKeyWithoutDeserializing:(id)a0;
- (void)_appendDescriptionOfObject:(id)a0 toString:(id)a1 atDepth:(unsigned long long)a2 withPrefixes:(id)a3 hint:(id)a4;
- (id)_initWithMutableDictionary:(id)a0;
- (id)_initWithPlistData:(id)a0 aceId:(id)a1 refId:(id)a2 usefulnessScore:(id)a3 mutatingCommand:(id)a4;
- (id)_descriptionHint;
- (void)_deserializeFromPlistData;
- (id)deserializationDuration;
- (id)forceEagerDeserialization;
- (BOOL)hasArrayForPropertyForKey:(id)a0;
- (id)initWithDictionary:(id)a0 context:(id)a1;
- (void)setTopLevelProperty:(id)a0 forKey:(id)a1;
- (id)topLevelPropertyForKey:(id)a0;
- (void)updateUsingSet:(id)a0 add:(id)a1 remove:(id)a2;

@end